from copy import deepcopy
import cv2
import numpy as np


def equalize_image(image): 
    image = to_uint8(deepcopy(image))
    if len(image.shape) == 2:
        return cv2.equalizeHist(image)
    if len(image.shape) == 3:
        new_image = np.zeros_like(image)
        for k in range(image.shape[2]):
            new_image[..., k] = cv2.equalizeHist(image[..., k])
        return new_image
    raise

def regional_equalization(image, patch_size):
    h, w = patch_size
    new_image = np.zeros_like(image)
    for i in range(0, image.shape[0], h):
        for j in range(0, image.shape[1], w):
            patch = image[i:i+h, j:j+w, ...]
            new_image[i:i+h, j:j+w, ...] = equalize_image(patch)
    return new_image

def log_transform(image, c=1):
    image = image.astype(float)
    return c * np.log(1 + image)

def power_transform(image, power, c=1):
    image = image.astype(float)
    return c * image**power

def nemai_transform(image, base=np.e, c=1):
    image = image.astype(float)
    return base ** (c*image)

def root_transform(image, root, c=1):
    image = image.astype(float)
    return power_transform(image, 1.0/root, c)

def negative(image, image_max=None):
    if image_max is None:
        image_max = image.max()
    return image_max - image

def histogram(img):
    img = to_uint8(img)
    a = [0 for x in range(256)]
    for x in range(256):
        a[x] = np.count_nonzero(img == x)
    return a

def to_uint8(image):
    return ((image - image.min()) / (image.max() - image.min()) * 255).astype('uint8')

def stretch_contrast(img, p1, p2):
    image = deepcopy(img[:]).astype(float)
    t1 = p1[0]
    t2 = p2[0]
    
    p0 = (0,0)
    a1, b1 = get_linear_parameters(p0, p1)
    image[image < t1] = linear_transform(image[image < t1], a1, b1)
    
    a2, b2 = get_linear_parameters(p1, p2)
    image[(image >= t1) & (image < t2)] = linear_transform(image[(image >= t1) & (image < t2)], a2, b2)
    
    p3 = (255, 255)
    a3, b3 = get_linear_parameters(p2, p3)
    image[image >= t2] = linear_transform(image[image >= t2], a3, b3)
    return image

def stretch_slice(image, t1, t2, value):
    image = deepcopy(image[:]).astype(float)
    image[(image >= t1) & (image <= t2)] = value
    return image

def linear_transform(image, a, b):
    return image.astype(float)*a + b

def get_linear_parameters(p1, p2):
    x1, y1 = p1
    x2, y2 = p2
    a = (y2 - y1) / (x2 - x1)
    b = y2 - a*x2
    return a,b