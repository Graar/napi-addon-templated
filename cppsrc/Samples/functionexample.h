//
// Created by ross on 18/12/2018.
//

#ifndef CPPSRC_FUNCTIONEXAMPLE_H
#define CPPSRC_FUNCTIONEXAMPLE_H


#include <napi.h>
namespace functionexample {
    std::string hello();
    Napi::String HelloWrapped(const Napi::CallbackInfo& info);

    int add(int a, int b);
    Napi::Number AddWrapped(const Napi::CallbackInfo& info);
    Napi::Object Init(Napi::Env env, Napi::Object exports);
}



#endif //CPPSRC_FUNCTIONEXAMPLE_H
