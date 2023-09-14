'***********************************************************************
'*
'*	MIUTIL2.INC
'*
'*	Definitions for MapInfo utilities 2 DLL
'*	(The routines MIUTIL (1) forgot to include !)
'*
'*	All routines return an integer return code (0/FALSE or 1/TRUE).
'*
'***********************************************************************

Declare Function ChangeWorkingDrive
						Lib "MIUTIL2.DLL"
						(ByVal driveletter as string) as smallint
Declare Function GetCurrentDrive
						Lib "MIUTIL2.DLL"
						(driveletter as string) as smallint
Declare Function GetCurrentDirectory
						Lib "MIUTIL2.DLL"
						(dirpath as string) as smallint

