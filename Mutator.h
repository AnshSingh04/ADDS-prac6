#ifndef Mutator_H
#define Mutator_H
#include "Individual.h"

class Mutator {    
    public:
    virtual Individual * mutate(Individual *i,int k) = 0;
};
#endif