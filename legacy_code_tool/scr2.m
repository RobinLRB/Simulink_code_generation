mex('-setup')
%folder ='Emulate_Prescan';
%addpath( genpath(folder) )
def = legacy_code('initialize')
%def.SourceFiles = {'\Emulate_Presca\Emulate_Prescan.c'};
%def.HeaderFiles = {'\Emulate_Presca\Emulate_Prescan.h'};
def.SourceFiles = {'doubleIt.c'};
def.HeaderFiles = {'doubleIt.h'};
def.SFunctionName = 'ex_sfun_doubleit';
def.OutputFcnSpec = 'uint16 y1 = doubleIt(uint16 u1)';
legacy_code('sfcn_cmex_generate', def);
legacy_code('compile', def);
legacy_code('slblock_generate', def);