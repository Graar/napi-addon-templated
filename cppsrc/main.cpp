//
// Created by ross on 18/12/2018.
//

/* cppsrc/main.cpp */
#include <napi.h>
#include "Samples/functionexample.h"
#include "Samples/classexample.h"
#include "Samples/templateclassexample.h"


Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
    functionexample::Init(env, exports);
    return ClassExample::Init(env, exports);
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, InitAll)




