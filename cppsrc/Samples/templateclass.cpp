//
// Created by ross on 18/12/2018.
//

/* cppsrc/Samples/actualclass.cpp */

#include "templateclass.h"

template <typename T>
TemplateClass<T>::TemplateClass(T value){
    this->value_ = value;
}

template <typename T>
T TemplateClass<T>::getValue()
{
    return this->value_;
}

template <typename T>
T TemplateClass<T>::add(T toAdd)
{
    this->value_ += toAdd;
    return this->value_;
}