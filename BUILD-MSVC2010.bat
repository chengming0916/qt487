call "C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\vcvarsall.bat" x86_amd64

configure -make nmake -debug-and-release -opensource -confirm-license -platform win32-msvc2010 -nomake examples -nomake tests

nmake

@pause