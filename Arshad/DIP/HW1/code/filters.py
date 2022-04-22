import numpy as np
import cv2


def convolution(image: np.ndarray, filter, padding, **kwargs):
    #return tensorflow.nn.convolution(image[np.newaxis, ..., np.newaxis].astype(float), filter[..., np.newaxis, np.newaxis], padding=padding, **kwargs)
    return cv2.filter2D(image, -1, filter)

def fft(image: np.ndarray, padded_size):
    image_padded = np.zeros(padded_size)
    image_padded[:image.shape[0], :image.shape[1]] = image

    image_fft = np.fft.fft2(image_padded)
    return np.fft.fftshift(image_fft)

def ifft(image_spectrum, original_size):
    return abs(np.fft.ifft2(np.fft.ifftshift(image_spectrum)))[:original_size[0], :original_size[1]]

def fourier_filter(image: np.ndarray, filter, padded_size, spatial_filter=False):
    if spatial_filter == True:
        pass
    spectrum = fft(image, padded_size)
    spectrum = spectrum * filter
    return ifft(spectrum, image.shape)

def khat_ofoghi_filter(height, width, Y0, zekhamat):
    P, Q = height, width
    y = np.arange(P)[..., np.newaxis] * np.ones((P,Q))
    
    return (y > Y0 + zekhamat) | (y < Y0 - zekhamat)

def khat_amudi_filter(height, width, X0, zekhamat):
    P, Q = height, width
    x = np.arange(Q)[np.newaxis, ...] * np.ones((P,Q))
    
    return (x > X0 + zekhamat) | (x < X0 - zekhamat)

def khat_movarab_filter(height, width, theta, zekhamat):
    P, Q = height, width
    x = np.arange(Q)[np.newaxis, ...] * np.ones((P,Q))-Q/2
    y = np.arange(P)[..., np.newaxis] * np.ones((P,Q))-P/2
    if theta == 90:
        x1 = -zekhamat/4
        x2 = zekhamat/4
        return (x > x1) & (x < x2)
    if theta == 0:
        y1 = -zekhamat/4
        y2 = zekhamat/4
        return (y > y1) & (y < y2)
    theta = np.deg2rad(theta)
    zekhamat = abs(zekhamat*np.sin(theta))
    a1 = np.tan(theta)
    y1 = a1*x - zekhamat / 2
    y2 = a1*x + zekhamat / 2
    return (y > y1) & (y < y2)

def mian_nagozar_filter(height, width, D0, zekhamat):
    P, Q = height, width
    x = np.arange(Q)[np.newaxis, ...] * np.ones((P,Q))
    y = np.arange(P)[..., np.newaxis] * np.ones((P,Q))
    D = np.sqrt((x-Q/2)**2 + (y-P/2)**2)
    
    return (D > D0 + zekhamat) | (D < D0 - zekhamat)

def mian_nagozar_morabai_filter(height, width, d0, zekhamat):
    P, Q = height, width
    x = abs(np.arange(Q)[np.newaxis, ...] * np.ones((P,Q)) - Q/2)
    y = abs(np.arange(P)[..., np.newaxis] * np.ones((P,Q)) - P/2)
    
    #return (abs(x + y) + abs(x-y) < d0 - zekhamat) | (abs(x + y) + abs(x-y) > d0 + zekhamat) 
    d0 /= 2
    zekhamat /= 2
    return ((x > d0 + zekhamat) | (x < d0 - zekhamat)) & ((y > d0 + zekhamat) | (y < d0 - zekhamat))

def IHPF(height, width, D0):
    P, Q = height, width
    x = np.arange(Q)[np.newaxis, ...] * np.ones((P,Q))
    y = np.arange(P)[..., np.newaxis] * np.ones((P,Q))
    D = np.sqrt((x-Q/2)**2 + (y-P/2)**2)
    return D > D0

def ILPF(height, width, D0):
    P, Q = height, width
    x = np.arange(Q)[np.newaxis, ...] * np.ones((P,Q))
    y = np.arange(P)[..., np.newaxis] * np.ones((P,Q))
    D = np.sqrt((x-Q/2)**2 + (y-P/2)**2)
    return D < D0

def low_pass_morabai_filter(height, width, d0):
    P, Q = height, width
    x = abs(np.arange(Q)[np.newaxis, ...] * np.ones((P,Q)) - Q/2)
    y = abs(np.arange(P)[..., np.newaxis] * np.ones((P,Q)) - P/2)
    
    return (abs(x + y) + abs(x-y) < d0)


def increase_contrast(image, shedat=3):
    if shedat == 1:
        return np.sqrt(abs(image))
    if shedat == 2:
        return np.log(1 + abs(image))
    if shedat == 3:
        return np.sqrt(np.log(1+abs(image)))
    

def gaussian_low_pass(height, width, D0):
    P, Q = height, width
    x = np.arange(Q)[np.newaxis, ...] * np.ones((P,Q))
    y = np.arange(P)[..., np.newaxis] * np.ones((P,Q))
    D = np.sqrt((x-Q/2)**2 + (y-P/2)**2)
    return np.exp(-1 * D**2 / 2 / D0**2)

def noghte_filter(height, width, x0, y0, zekhamat):
    P, Q = height, width
    x = np.arange(Q)[np.newaxis, ...] * np.ones((P,Q))
    y = np.arange(P)[..., np.newaxis] * np.ones((P,Q))
    D = np.sqrt((x-x0)**2 + (y-y0)**2)
    return D > zekhamat

def noghte_filter_gaussian(height, width, x0, y0, zekhamat):
    P, Q = height, width
    x = np.arange(Q)[np.newaxis, ...] * np.ones((P,Q))
    y = np.arange(P)[..., np.newaxis] * np.ones((P,Q))
    D = np.sqrt((x-x0)**2 + (y-y0)**2)
    return -np.exp(-1 * D**2 / 2 / zekhamat**2)

def mostatil_filter(height, width, x0, y0, h, w):
    P, Q = height, width
    x = np.arange(Q)[np.newaxis, ...] * np.ones((P,Q)) - Q/2
    y = np.arange(P)[..., np.newaxis] * np.ones((P,Q)) - P/2
    return np.logical_not((x < x0 + w/2) & (x > x0 - w/2) & (y < y0 + h/2) & (y > y0 - h/2))