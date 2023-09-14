Declare Function GetEnv$ Lib "MIUTIL.DLL" (ByVal EnvVar As String) As String

Declare Function DriveList$ Lib "MIUTIL.DLL" (ByVal Delimiter As String, rc As SmallInt) As String
Declare Function DirList$ Lib "MIUTIL.DLL" (ByVal FileSpec As String, ByVal Delimiter As String, rc As SmallInt) As String
Declare Function FileList$ Lib "MIUTIL.DLL" (ByVal FileSpec As String, ByVal Delimiter As String, rc As SmallInt) As String
Declare Function GetDateAndTimeStamp Lib "MIUTIL.DLL" (ByVal Path As String, Date As Integer, Time As Integer) As SmallInt
Declare Function SetDateAndTimeStamp Lib "MIUTIL.DLL" (ByVal Path As String, Date As Integer, Time As Integer) As SmallInt
Declare Function FileSize Lib "MIUTIL.DLL" (ByVal Path As String, Size As Integer) As SmallInt

Declare Sub CurTime Lib "MIUTIL.DLL" (Hour As SmallInt, Minute As SmallInt, Second As SmallInt)
Declare Function CurTime$  Lib "MIUTIL.DLL" As String

Declare Function CopyFileBinary Lib "MIUTIL.DLL" (ByVal InFile As String, ByVal OutFile As String) As SmallInt
Declare Function CopyFile Lib "MIUTIL.DLL" (ByVal InFile As String, ByVal OutFile As String) As SmallInt
Declare Function pbCopyFileBinaryInit Lib "MIUTIL.DLL" (ByVal InFile As String, ByVal OutFile As String, FileSize As Integer) As SmallInt
Declare Function pbCopyFileBinaryTerm Lib "MIUTIL.DLL" As SmallInt
Declare Function pbCopyFileBinary Lib "MIUTIL.DLL" (FilePos As Integer) As SmallInt
Declare Function RenameFile Lib "MIUTIL.DLL" (ByVal OldFile As String, ByVal NewFile As String) As SmallInt

Declare Function CreateDirectory Lib "MIUTIL.DLL" (ByVal Path As String) As SmallInt
Declare Function KillDirectory Lib "MIUTIL.DLL" (ByVal Path As String) As SmallInt
Declare Function ChangeWorkingDirectory Lib "MIUTIL.DLL" (ByVal Path As String) As SmallInt

Declare Function GetApplicationHWND  Lib "MIUTIL.DLL"As Integer
Declare Function GetActiveDocumentHWND Lib "MIUTIL.DLL" As Integer
Declare Sub SetWindowOrder Lib "MIUTIL.DLL" (ByVal hWin As Integer, ByVal Order As SmallInt)
Declare Function GetWindowTitle Lib "MIUTIL.DLL" (ByVal hWin As Integer) As String
Declare Sub SetWindowTitle Lib "MIUTIL.DLL" (ByVal hWin As Integer, ByVal Title As String)

Declare Function FlushIniCache Lib "MIUTIL.DLL" (ByVal IniFile As String) As SmallInt

Define HWND_TOP       0
Define HWND_BOTTOM    1
Define HWND_TOPMOST   (-1)
Define HWND_NOTOPMOST (-2)
