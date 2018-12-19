//
// Created by ross on 18/12/2018.
//

#ifndef CPPSRC_ACTUALCLASS_H
#define CPPSRC_ACTUALCLASS_H

/* cppsrc/Samples/actualclass.h */

class ActualClass {
public:
    ActualClass(double value); //constructor
    double getValue(); //getter for the value
    double add(double toAdd); //adds the toAdd value to the value_
private:
    double value_;
};


#endif //CPPSRC_ACTUALCLASS_H
