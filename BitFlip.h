#ifndef BitFlip_H
#define BitFlip_H
#include <iostream>
#include <vector>
#include "Mutator.h"
using namespace std;

class BitFlip: public Mutator {
    
    public:
    Individual mutate(Individual i, int k);
 
};
#endif