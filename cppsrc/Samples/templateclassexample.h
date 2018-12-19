#ifndef CPPSRC_TEMPLATECLASSEXAMPLE_H
#define CPPSRC_TEMPLATECLASSEXAMPLE_H


#include <napi.h>
#include "templateclass.h"

template <typename T>
class TemplateClassExample : public Napi::ObjectWrap<TemplateClassExample<T>> {
public:
    static Napi::Object Init(Napi::Env env, Napi::Object exports); //Init function for setting the export key to JS
    TemplateClassExample<T>(const Napi::CallbackInfo& info); //Constructor to initialise

private:
    static Napi::FunctionReference constructor; //reference to store the class definition that needs to be exported to JS
    Napi::Value GetValue(const Napi::CallbackInfo& info); //wrapped getValue function
    Napi::Value Add(const Napi::CallbackInfo& info); //wrapped add function
    TemplateClass<T> *templateClass_; //internal instance of templateclass used to perform actual operations.
};



#endif //CPPSRC_TEMPLATECLASSEXAMPLE_H
