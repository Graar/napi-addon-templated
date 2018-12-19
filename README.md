# napi-addon-templated
A repository containing examples of C++ code being wrapped with node N-Api and node-addon-api and (non-working) templated C++

Constructed from the excellent example at:

https://medium.com/@atulanand94/beginners-guide-to-writing-nodejs-addons-using-c-and-n-api-node-addon-api-9b3b718a9a7f

which shows how to wrapper C++ functions and classes for use with Javascript using N-API 
and the node-addon-api package.

This repo has been developed as a vehicle to figure out how to implement the same thing when using templated C++.


####How to use
Simply pull the repo and then run '`yarn install`' or '`npm install`'.

This will install the required node-modules and immediately run the build command

Currently this yields an error something like this:

``Building the projects in this solution one at a time. To enable parallel build, please add the "/m" switch.
  nothing.c
  win_delay_load_hook.cc
  nothing.vcxproj -> H:\git\napi-addon-templated\build\Release\\nothing.lib
  main.cpp
  functionexample.cpp
  actualclass.cpp
  classexample.cpp
  templateclass.cpp
  templateclassexample.cpp
  win_delay_load_hook.cc
h:\git\napi-addon-templated\cppsrc\Samples/templateclassexample.h(18): error C2143: syntax error: missing ';' before '<' (compiling source file ..\cppsrc\main.cpp)
 [H:\git\napi-addon-templated\build\testaddon.vcxproj]
  h:\git\napi-addon-templated\cppsrc\Samples/templateclassexample.h(19): note: see reference to class template instantiation 'TemplateClassExample<T>' being compil
  ed (compiling source file ..\cppsrc\main.cpp)
h:\git\napi-addon-templated\cppsrc\Samples/templateclassexample.h(18): error C4430: missing type specifier - int assumed. Note: C++ does not support default-int (c
ompiling source file ..\cppsrc\main.cpp) [H:\git\napi-addon-templated\build\testaddon.vcxproj]
h:\git\napi-addon-templated\cppsrc\Samples/templateclassexample.h(18): error C2238: unexpected token(s) preceding ';' (compiling source file ..\cppsrc\main.cpp) [H
:\git\napi-addon-templated\build\testaddon.vcxproj]
gyp ERR! build error
gyp ERR! stack Error: `C:\Program Files (x86)\MSBuild\14.0\bin\msbuild.exe` failed with exit code: 1
gyp ERR! stack     at ChildProcess.onExit (H:\Git\napi-addon-templated\node_modules\node-gyp\lib\build.js:262:23)
gyp ERR! stack     at ChildProcess.emit (events.js:182:13)
gyp ERR! stack     at Process.ChildProcess._handle.onexit (internal/child_process.js:240:12)
gyp ERR! System Windows_NT 10.0.17134
gyp ERR! command "C:\\Program Files\\nodejs\\node.exe" "H:\\Git\\napi-addon-templated\\node_modules\\node-gyp\\bin\\node-gyp.js" "rebuild"
gyp ERR! cwd H:\git\napi-addon-templated
gyp ERR! node -v v10.13.0
gyp ERR! node-gyp -v v3.8.0
gyp ERR! not ok
error Command failed with exit code 1.
info Visit https://yarnpkg.com/en/docs/cli/install for documentation about this command.
``


 
