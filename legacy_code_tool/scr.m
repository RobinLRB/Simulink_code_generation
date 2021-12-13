mex('-setup');
%rosinit;
%%Integrate C Functions into Simulink Models
def = legacy_code('initialize')
def.SourceFiles = {'doubleIt.c'};
def.HeaderFiles = {'doubleIt.h'};
def.SFunctionName = 'ex_sfun_doubleit';
def.OutputFcnSpec = 'uint16 y1 = doubleIt(double u1)';
legacy_code('sfcn_cmex_generate', def);
legacy_code('compile', def);
legacy_code('slblock_generate', def);

%%Integrate C Function Whose Arguments Are Pointers to Structures
% Simulink.importExternalCTypes('ex_myTypes_LCT.h');
% def = legacy_code('initialize');
% def.SFunctionName = 'sfun_ex_mySrc_LCT';
% def.SourceFiles = {'ex_mySrc_LCT.c'};
% def.HeaderFiles = {'ex_myTypes_LCT.h'};
% def.OutputFcnSpec = ['void myFcn(sigStructType u1[1], ',...
%     'paramStructType p1[1], sigStructType y1[1])'];
% legacy_code('generate_for_sim',def);
% legacy_code('slblock_generate', def);
% open_system('ex_lct_struct')
% structParam = struct;
% structParam.param1 = 15;
% structParam.param2 = 20;
% structParam.param3 = 5;
% structParam = Simulink.Parameter(structParam);
% structParam.DataType = 'Bus: paramStructType';
% set_param('ex_lct_struct/sfun_ex_mySrc_LCT','SParameter1','structParam')
% open_system('ex_lct_struct/Scope')
% open_system('ex_lct_struct/Scope1')
% sim('ex_lct_struct')
