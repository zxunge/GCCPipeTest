# GCCPipeTest
GCC 1320 pipe test.

## Compilation
Unzip wxWidgets-3.2.4-headers.zip to some folder, copy those Source files to the same folder where "wxWidgets-3.2.4" exists. Use the following commands(You don't need to link, because all Errors will occur when compiling):
```
g++.exe -pipe -mthreads -D__GNUWIN32__ -D__WXMSW__ -DWXUSINGDLL -DwxUSE_UNICODE -Wall -g -D__WXDEBUG__ -IwxWidgets-3.2.4\include -IwxWidgets-3.2.4\lib\gcc_dll\mswud -c PipeTestApp.cpp -o obj\Debug\PipeTestApp.o
g++.exe -pipe -mthreads -D__GNUWIN32__ -D__WXMSW__ -DWXUSINGDLL -DwxUSE_UNICODE -Wall -g -D__WXDEBUG__ -IwxWidgets-3.2.4\include -IwxWidgets-3.2.4\lib\gcc_dll\mswud -c PipeTestMain.cpp -o obj\Debug\PipeTestMain.o
windres.exe -IwxWidgets-3.2.4\include -IwxWidgets-3.2.4\lib\gcc_dll\mswud  -J rc -O coff -i resource.rc -o obj\Debug\resource.res
```

## Description
I don't use a ccache or something else. My GCC is 13.2.0, i686, with POSIX threads and UCRT. I run on a Windows 7 System.
