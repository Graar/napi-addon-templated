//
// Created by ross on 18/12/2018.
//

#ifndef CPPSRC_ACTUALCLASS_H
#define CPPSRC_ACTUALCLASS_H

/* cppsrc/Samples/actualclass.h */

template <typename T>
class TemplateClass {
public:
    TemplateClass<T>(T value); //constructor
    T getValue(); //getter for the value
    T add(T toAdd); //adds the toAdd value to the value_
private:
    T value_;
};


#endif //CPPSRC_ACTUALCLASS_H
