#ifndef BitFlipProb_H
#define BitFlipProb_H
#include <iostream>
#include <vector>
#include "Mutator.h"
using namespace std;

class BitFlipProb: public Mutator {
    
    public:
    Individual *mutate(Individual i,int k);
    BitFlipProb(double p);
    double prob;
 
};
#endif