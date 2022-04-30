#ifndef Rearrange_H
#define Rearrange_H
#include <iostream>
#include <vector>
#include "Mutator.h"
using namespace std;

class Rearrange: public Mutator {
    
    public:
    Individual mutate(Individual i,int k);
};
#endif