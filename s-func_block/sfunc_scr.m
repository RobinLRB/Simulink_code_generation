mex('-setup');

def = legacy_code('initialize')
def.SourceFiles = {'csfunc.c'};
def.HeaderFiles = {'csfunc.h'};
def.SFunctionName = 'csfunc';
def.HostLibFiles = {'simstruc.h'};
def.LibPaths = {'D:\MATLAB_2019a\simulink\include'};
%def.OutputFcnSpec = ['static void mdlOutputs(SimStruct u1[1], int_T u2)'];
legacy_code('sfcn_cmex_generate', def);
legacy_code('compile', def);
legacy_code('slblock_generate', def);
mex('E:\KTH\Y2_Period_1\Embedded_Electronics_Design_Project\AD_EYE\s-func_block\create_connection.c', '-LD:\MATLAB_2019a\sys\lcc64\lcc64\lib64', 'ws2_32.lib')