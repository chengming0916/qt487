call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars32.bat"
rem %comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvars32.bat"

configure -make nmake -debug-and-release -opensource -confirm-license -platform win32-msvc2017 -nomake examples -nomake tests

nmake

@pause