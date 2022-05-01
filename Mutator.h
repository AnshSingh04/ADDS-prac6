#ifndef Mutator_H
#define Mutator_H
#include <iostream>
#include <vector>
#include "Individual.h"
using namespace std;

class Mutator {
    
    public:
    virtual Individual *mutate(Individual i,int k);
    Mutator();
 
};
#endif