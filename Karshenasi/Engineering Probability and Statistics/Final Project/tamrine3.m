function varargout = tamrine3(varargin)
% TAMRINE3 MATLAB code for tamrine3.fig
%      TAMRINE3, by itself, creates a new TAMRINE3 or raises the existing
%      singleton*.
%
%      H = TAMRINE3 returns the handle to a new TAMRINE3 or the handle to
%      the existing singleton*.
%
%      TAMRINE3('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in TAMRINE3.M with the given input arguments.
%
%      TAMRINE3('Property','Value',...) creates a new TAMRINE3 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before tamrine3_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to tamrine3_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help tamrine3

% Last Modified by GUIDE v2.5 28-May-2017 06:37:53

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @tamrine3_OpeningFcn, ...
                   'gui_OutputFcn',  @tamrine3_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before tamrine3 is made visible.
function tamrine3_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to tamrine3 (see VARARGIN)

% Choose default command line output for tamrine3
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes tamrine3 wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = tamrine3_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
qq = get(handles.entekhab111,'Value');
 switch qq
     case 2
         set(handles.doa,'visible','on')
         set(handles.dob,'visible','on')
         set(handles.doplot,'visible','on')
         set(handles.text4,'visible','on')
         set(handles.text5,'visible','on')
         set(handles.semu,'visible','off')
         set(handles.sezig,'visible','off')
         set(handles.seplot,'visible','off')
         set(handles.text6,'visible','off')
         set(handles.text7,'visible','off')
         set(handles.charplot,'visible','off')
         set(handles.charteta,'visible','off')
         set(handles.text12,'visible','off')
         set(handles.charalpha,'visible','off')
         set(handles.chara,'visible','off')
         set(handles.charb,'visible','off')
         set(handles.panjbeta,'visible','off')
         set(handles.panjplot,'visible','off')
         set(handles.text15,'visible','off')
         set(handles.shishplot,'visible','off')
         set(handles.shishar,'visible','off')
         set(handles.text16,'visible','off')
         set(handles.text17,'visible','off')
         set(handles.hafa,'visible','off')
         set(handles.hafb,'visible','off')
         set(handles.hafplot,'visible','off')
         set(handles.text20,'visible','off')
         set(handles.hashtr,'visible','off')
         set(handles.hashtplot,'visible','off')
         set(handles.noh1,'visible','off')
         set(handles.noh2,'visible','off')
         set(handles.text22,'visible','off')
         set(handles.text21,'visible','off')
         set(handles.nohplot,'visible','off')
     case 3
         set(handles.semu,'visible','on')
         set(handles.sezig,'visible','on')
         set(handles.seplot,'visible','on')
         set(handles.text6,'visible','on')
         set(handles.text7,'visible','on')
         set(handles.doa,'visible','off')
         set(handles.dob,'visible','off')
         set(handles.doplot,'visible','off')
         set(handles.text4,'visible','off')
         set(handles.text5,'visible','off')
         set(handles.charplot,'visible','off')
         set(handles.charteta,'visible','off')
         set(handles.text12,'visible','off')
         set(handles.charalpha,'visible','off')
         set(handles.chara,'visible','off')
         set(handles.charb,'visible','off')
         set(handles.panjbeta,'visible','off')
         set(handles.panjplot,'visible','off')
         set(handles.text15,'visible','off')
         set(handles.shishplot,'visible','off')
         set(handles.shishar,'visible','off')
         set(handles.text16,'visible','off')
         set(handles.text17,'visible','off')
         set(handles.hafa,'visible','off')
         set(handles.hafb,'visible','off')
         set(handles.hafplot,'visible','off')
         set(handles.text20,'visible','off')
         set(handles.hashtr,'visible','off')
         set(handles.hashtplot,'visible','off')
         set(handles.noh1,'visible','off')
         set(handles.noh2,'visible','off')
         set(handles.text22,'visible','off')
         set(handles.text21,'visible','off')
         set(handles.nohplot,'visible','off')
     case 4
         set(handles.charplot,'visible','on')
         set(handles.charteta,'visible','on')
         set(handles.text12,'visible','on')
         set(handles.semu,'visible','off')
         set(handles.sezig,'visible','off')
         set(handles.seplot,'visible','off')
         set(handles.text6,'visible','off')
         set(handles.text7,'visible','off')
         set(handles.doa,'visible','off')
         set(handles.dob,'visible','off')
         set(handles.doplot,'visible','off')
         set(handles.text4,'visible','off')
         set(handles.text5,'visible','off')
         set(handles.charalpha,'visible','off')
         set(handles.chara,'visible','off')
         set(handles.charb,'visible','off')
         set(handles.panjbeta,'visible','off')
         set(handles.panjplot,'visible','off')
         set(handles.text15,'visible','off')
         set(handles.shishplot,'visible','off')
         set(handles.shishar,'visible','off')
         set(handles.text16,'visible','off')
         set(handles.text17,'visible','off')
         set(handles.hafa,'visible','off')
         set(handles.hafb,'visible','off')
         set(handles.hafplot,'visible','off')
         set(handles.text20,'visible','off')
         set(handles.hashtr,'visible','off')
         set(handles.hashtplot,'visible','off')
         set(handles.noh1,'visible','off')
         set(handles.noh2,'visible','off')
         set(handles.text22,'visible','off')
         set(handles.text21,'visible','off')
         set(handles.nohplot,'visible','off')
     case 5
         set(handles.charalpha,'visible','on')
         set(handles.chara,'visible','on')
         set(handles.charb,'visible','on')
         set(handles.panjbeta,'visible','on')
         set(handles.panjplot,'visible','on')
         set(handles.charplot,'visible','off')
         set(handles.charteta,'visible','off')
         set(handles.text12,'visible','off')
         set(handles.semu,'visible','off')
         set(handles.sezig,'visible','off')
         set(handles.seplot,'visible','off')
         set(handles.text6,'visible','off')
         set(handles.text7,'visible','off')
         set(handles.doa,'visible','off')
         set(handles.dob,'visible','off')
         set(handles.doplot,'visible','off')
         set(handles.text4,'visible','off')
         set(handles.text5,'visible','off')
         set(handles.text15,'visible','off')
         set(handles.shishplot,'visible','off')
         set(handles.shishar,'visible','off')
         set(handles.text16,'visible','off')
         set(handles.text17,'visible','off')
         set(handles.hafa,'visible','off')
         set(handles.hafb,'visible','off')
         set(handles.hafplot,'visible','off')
         set(handles.text20,'visible','off')
         set(handles.hashtr,'visible','off')
         set(handles.hashtplot,'visible','off')
         set(handles.noh1,'visible','off')
         set(handles.noh2,'visible','off')
         set(handles.text22,'visible','off')
         set(handles.text21,'visible','off')
         set(handles.nohplot,'visible','off')
     case 6
         set(handles.text15,'visible','on')
         set(handles.shishplot,'visible','on')
         set(handles.shishar,'visible','on')
         set(handles.charalpha,'visible','off')
         set(handles.chara,'visible','off')
         set(handles.charb,'visible','off')
         set(handles.panjbeta,'visible','off')
         set(handles.panjplot,'visible','off')
         set(handles.charplot,'visible','off')
         set(handles.charteta,'visible','off')
         set(handles.text12,'visible','off')
         set(handles.semu,'visible','off')
         set(handles.sezig,'visible','off')
         set(handles.seplot,'visible','off')
         set(handles.text6,'visible','off')
         set(handles.text7,'visible','off')
         set(handles.doa,'visible','off')
         set(handles.dob,'visible','off')
         set(handles.doplot,'visible','off')
         set(handles.text4,'visible','off')
         set(handles.text5,'visible','off')
         set(handles.text16,'visible','off')
         set(handles.text17,'visible','off')
         set(handles.hafa,'visible','off')
         set(handles.hafb,'visible','off')
         set(handles.hafplot,'visible','off')
         set(handles.text20,'visible','off')
         set(handles.hashtr,'visible','off')
         set(handles.hashtplot,'visible','off')
         set(handles.noh1,'visible','off')
         set(handles.noh2,'visible','off')
         set(handles.text22,'visible','off')
         set(handles.text21,'visible','off')
         set(handles.nohplot,'visible','off')
     case 7
         set(handles.text16,'visible','on')
         set(handles.text17,'visible','on')
         set(handles.hafa,'visible','on')
         set(handles.hafb,'visible','on')
         set(handles.hafplot,'visible','on')
         set(handles.text15,'visible','off')
         set(handles.shishplot,'visible','off')
         set(handles.shishar,'visible','off')
         set(handles.charalpha,'visible','off')
         set(handles.chara,'visible','off')
         set(handles.charb,'visible','off')
         set(handles.panjbeta,'visible','off')
         set(handles.panjplot,'visible','off')
         set(handles.charplot,'visible','off')
         set(handles.charteta,'visible','off')
         set(handles.text12,'visible','off')
         set(handles.semu,'visible','off')
         set(handles.sezig,'visible','off')
         set(handles.seplot,'visible','off')
         set(handles.text6,'visible','off')
         set(handles.text7,'visible','off')
         set(handles.doa,'visible','off')
         set(handles.dob,'visible','off')
         set(handles.doplot,'visible','off')
         set(handles.text4,'visible','off')
         set(handles.text5,'visible','off')
         set(handles.text20,'visible','off')
         set(handles.hashtr,'visible','off')
         set(handles.hashtplot,'visible','off')
         set(handles.noh1,'visible','off')
         set(handles.noh2,'visible','off')
         set(handles.text22,'visible','off')
         set(handles.text21,'visible','off')
         set(handles.nohplot,'visible','off')
     case 8
         set(handles.text20,'visible','on')
         set(handles.hashtr,'visible','on')
         set(handles.hashtplot,'visible','on')
         set(handles.text16,'visible','off')
         set(handles.text17,'visible','off')
         set(handles.hafa,'visible','off')
         set(handles.hafb,'visible','off')
         set(handles.hafplot,'visible','off')
         set(handles.text15,'visible','off')
         set(handles.shishplot,'visible','off')
         set(handles.shishar,'visible','off')
         set(handles.charalpha,'visible','off')
         set(handles.chara,'visible','off')
         set(handles.charb,'visible','off')
         set(handles.panjbeta,'visible','off')
         set(handles.panjplot,'visible','off')
         set(handles.charplot,'visible','off')
         set(handles.charteta,'visible','off')
         set(handles.text12,'visible','off')
         set(handles.semu,'visible','off')
         set(handles.sezig,'visible','off')
         set(handles.seplot,'visible','off')
         set(handles.text6,'visible','off')
         set(handles.text7,'visible','off')
         set(handles.doa,'visible','off')
         set(handles.dob,'visible','off')
         set(handles.doplot,'visible','off')
         set(handles.text4,'visible','off')
         set(handles.text5,'visible','off')
         set(handles.noh1,'visible','off')
         set(handles.noh2,'visible','off')
         set(handles.text22,'visible','off')
         set(handles.text21,'visible','off')
         set(handles.nohplot,'visible','off')
     case 9
         set(handles.noh1,'visible','on')
         set(handles.noh2,'visible','on')
         set(handles.text22,'visible','on')
         set(handles.text21,'visible','on')
         set(handles.nohplot,'visible','on')
         set(handles.text20,'visible','off')
         set(handles.hashtr,'visible','off')
         set(handles.hashtplot,'visible','off')
         set(handles.text16,'visible','off')
         set(handles.text17,'visible','off')
         set(handles.hafa,'visible','off')
         set(handles.hafb,'visible','off')
         set(handles.hafplot,'visible','off')
         set(handles.text15,'visible','off')
         set(handles.shishplot,'visible','off')
         set(handles.shishar,'visible','off')
         set(handles.charalpha,'visible','off')
         set(handles.chara,'visible','off')
         set(handles.charb,'visible','off')
         set(handles.panjbeta,'visible','off')
         set(handles.panjplot,'visible','off')
         set(handles.charplot,'visible','off')
         set(handles.charteta,'visible','off')
         set(handles.text12,'visible','off')
         set(handles.semu,'visible','off')
         set(handles.sezig,'visible','off')
         set(handles.seplot,'visible','off')
         set(handles.text6,'visible','off')
         set(handles.text7,'visible','off')
         set(handles.doa,'visible','off')
         set(handles.dob,'visible','off')
         set(handles.doplot,'visible','off')
         set(handles.text4,'visible','off')
         set(handles.text5,'visible','off')
 end

    
% --- Executes on selection change in entekhab111.
function entekhab111_Callback(hObject, eventdata, handles)
% hObject    handle to entekhab111 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: contents = cellstr(get(hObject,'String')) returns entekhab111 contents as cell array
%        contents{get(hObject,'Value')} returns selected item from entekhab111


% --- Executes during object creation, after setting all properties.
function entekhab111_CreateFcn(hObject, eventdata, handles)
% hObject    handle to entekhab111 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: popupmenu controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in doplot.
function doplot_Callback(hObject, eventdata, handles)
% hObject    handle to doplot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
a = str2double ( get(handles.doa,'String') );
b = str2double ( get(handles.dob,'String') );
    x = [a b];
    y= 1/(b-a)*ones(2,1)';
    plot(x,y);



function doa_Callback(hObject, eventdata, handles)
% hObject    handle to doa (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of doa as text
%        str2double(get(hObject,'String')) returns contents of doa as a double


% --- Executes during object creation, after setting all properties.
function doa_CreateFcn(hObject, eventdata, handles)
% hObject    handle to doa (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function dob_Callback(hObject, eventdata, handles)
% hObject    handle to dob (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of dob as text
%        str2double(get(hObject,'String')) returns contents of dob as a double


% --- Executes during object creation, after setting all properties.
function dob_CreateFcn(hObject, eventdata, handles)
% hObject    handle to dob (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in seplot.
function seplot_Callback(hObject, eventdata, handles)
% hObject    handle to seplot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
zig2 = str2double ( get(handles.sezig,'String') );
zig= zig2 ^ (1/2);
miu = str2double ( get(handles.semu,'String') );
x= miu-3*zig:0.0001:miu+3*zig;;
siz = size(x);
for i=1:siz(2)
    y(i)= (1/(zig*((2*pi)^1/2)))*exp(((x(i)-miu)^(2))/((-2)*(zig2)));
end
plot(x,y);

function semu_Callback(hObject, eventdata, handles)
% hObject    handle to semu (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of semu as text
%        str2double(get(hObject,'String')) returns contents of semu as a double


% --- Executes during object creation, after setting all properties.
function semu_CreateFcn(hObject, eventdata, handles)
% hObject    handle to semu (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function sezig_Callback(hObject, eventdata, handles)
% hObject    handle to sezig (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of sezig as text
%        str2double(get(hObject,'String')) returns contents of sezig as a double


% --- Executes during object creation, after setting all properties.
function sezig_CreateFcn(hObject, eventdata, handles)
% hObject    handle to sezig (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in charplot.
function charplot_Callback(hObject, eventdata, handles)
% hObject    handle to charplot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    teta = str2double ( get(handles.charteta,'String') );
    x= 0:0.0001:5/teta;
    siz=size(x);
    for i=1:siz(2)
    y(i)= teta*exp(teta*(-1)*x(i));
    end
    plot(x,y)


function charteta_Callback(hObject, eventdata, handles)
% hObject    handle to charteta (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of charteta as text
%        str2double(get(hObject,'String')) returns contents of charteta as a double


% --- Executes during object creation, after setting all properties.
function charteta_CreateFcn(hObject, eventdata, handles)
% hObject    handle to charteta (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function charalpha_Callback(hObject, eventdata, handles)
% hObject    handle to charalpha (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of charalpha as text
%        str2double(get(hObject,'String')) returns contents of charalpha as a double


% --- Executes during object creation, after setting all properties.
function charalpha_CreateFcn(hObject, eventdata, handles)
% hObject    handle to charalpha (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function panjbeta_Callback(hObject, eventdata, handles)
% hObject    handle to panjbeta (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of panjbeta as text
%        str2double(get(hObject,'String')) returns contents of panjbeta as a double


% --- Executes during object creation, after setting all properties.
function panjbeta_CreateFcn(hObject, eventdata, handles)
% hObject    handle to panjbeta (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in panjplot.
function panjplot_Callback(hObject, eventdata, handles)
% hObject    handle to panjplot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    alpha = str2double ( get(handles.charalpha,'String') );
    beta = str2double ( get(handles.panjbeta,'String') );
    x = 0:0.0001:5*alpha/beta;
    siz=size(x);
    for i=1:siz(2)
    y(i)= (beta^alpha)*(x(i)^(alpha-1))*exp((-1)*beta*x(i))/gamma(alpha);
    end
    plot(x,y)



function shishar_Callback(hObject, eventdata, handles)
% hObject    handle to shishar (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of shishar as text
%        str2double(get(hObject,'String')) returns contents of shishar as a double


% --- Executes during object creation, after setting all properties.
function shishar_CreateFcn(hObject, eventdata, handles)
% hObject    handle to shishar (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in shishplot.
function shishplot_Callback(hObject, eventdata, handles)
% hObject    handle to shishplot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    r = str2double ( get(handles.shishar,'String') );
    x = 0:0.0001:5*(r^2)/4;
    siz=size(x);
    for i=1:siz(2)
    y(i) =((x(i)^(r/2 -1))*exp((-1)*x(i)/2))/((2^(r/2))*gamma(r/2));
    end
    plot(x,y)



function hafa_Callback(hObject, eventdata, handles)
% hObject    handle to hafa (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of hafa as text
%        str2double(get(hObject,'String')) returns contents of hafa as a double


% --- Executes during object creation, after setting all properties.
function hafa_CreateFcn(hObject, eventdata, handles)
% hObject    handle to hafa (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function hafb_Callback(hObject, eventdata, handles)
% hObject    handle to hafb (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of hafb as text
%        str2double(get(hObject,'String')) returns contents of hafb as a double


% --- Executes during object creation, after setting all properties.
function hafb_CreateFcn(hObject, eventdata, handles)
% hObject    handle to hafb (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in hafplot.
function hafplot_Callback(hObject, eventdata, handles)
% hObject    handle to hafplot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    alpha = str2double ( get(handles.hafa,'String') );
    beta = str2double ( get(handles.hafb,'String') );
    x=0:0.0001:1  ;  
    siz=size(x);
    for i=1:siz(2)
    y(i) = gamma(alpha)*gamma(beta)*(x(i)^(alpha-1))*((1-x(i))^(beta-1))/gamma(alpha+beta);
    end
    plot(x,y)



function hashtr_Callback(hObject, eventdata, handles)
% hObject    handle to hashtr (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of hashtr as text
%        str2double(get(hObject,'String')) returns contents of hashtr as a double


% --- Executes during object creation, after setting all properties.
function hashtr_CreateFcn(hObject, eventdata, handles)
% hObject    handle to hashtr (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in hashtplot.
function hashtplot_Callback(hObject, eventdata, handles)
% hObject    handle to hashtplot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    r = str2double ( get(handles.hashtr,'String') );
    x=(-10):0.0001:10 ;  
    siz=size(x);
    for i=1:siz(2)
    y(i) = ( (gamma((r+1)/2)/gamma(r/2))*(1/((r*pi)^(1/2)))*(1/((1+((x(i)^2)/r))^((r+1)/2))));
    end
    plot(x,y)



function noh1_Callback(hObject, eventdata, handles)
% hObject    handle to noh1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of noh1 as text
%        str2double(get(hObject,'String')) returns contents of noh1 as a double


% --- Executes during object creation, after setting all properties.
function noh1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to noh1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function noh2_Callback(hObject, eventdata, handles)
% hObject    handle to noh2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of noh2 as text
%        str2double(get(hObject,'String')) returns contents of noh2 as a double


% --- Executes during object creation, after setting all properties.
function noh2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to noh2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in nohplot.
function nohplot_Callback(hObject, eventdata, handles)
% hObject    handle to nohplot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
    r1 = str2double ( get(handles.noh1,'String') );
    r2 = str2double ( get(handles.noh2,'String') ); 
    x=0.0001:0.00000001:0.002 ;  
    siz=size(x);
    for i=1:siz(2)
    y(i) = ((gamma((r1+r2)/2) * ((r1/r2)^(r1/2)))/(gamma(r1/2)*gamma(r2/2)))* (    ((r1/(x(i)^2))-1)/((1+(r1*x(i)/r2))^((r1+r2)/2))) ;
    end
    plot(x,y)