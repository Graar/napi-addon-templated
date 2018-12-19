
#include "templateclassexample.h"

template <typename T>
Napi::FunctionReference TemplateClassExample<T>::constructor;

template <typename T>
Napi::Object TemplateClassExample<T>::Init(Napi::Env env, Napi::Object exports) {
    Napi::HandleScope scope(env);

    Napi::Function func = DefineClass(env, "TemplateClassExample", {
            InstanceMethod("add", &TemplateClassExample::Add),
            InstanceMethod("getValue", &TemplateClassExample::GetValue),
    });

    constructor = Napi::Persistent(func);
    constructor.SuppressDestruct();

    exports.Set("TemplateClassExample", func);
    return exports;
}

template <typename T>
TemplateClassExample<T>::TemplateClassExample(const Napi::CallbackInfo& info) : Napi::ObjectWrap<TemplateClassExample>(info)  {
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);

    int length = info.Length();
    if (length != 1 || !info[0].IsNumber()) {
        Napi::TypeError::New(env, "Number expected").ThrowAsJavaScriptException();
    }

    Napi::Number value = info[0].As<Napi::Number>();
    this->templateClass_ = new TemplateClass<T>(value.DoubleValue());
}

template <typename T>
Napi::Value TemplateClassExample<T>::GetValue(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);

    T num = this->templateClass_->getValue();
    return Napi::Number::New(env, num);
}

template <typename T>
Napi::Value TemplateClassExample<T>::Add(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);

    if (  info.Length() != 1 || !info[0].IsNumber()) {
        Napi::TypeError::New(env, "Number expected").ThrowAsJavaScriptException();
    }

    Napi::Number toAdd = info[0].As<Napi::Number>();
    T answer = this->templateClass_->add(toAdd.DoubleValue());

    return Napi::Number::New(info.Env(), answer);
}
