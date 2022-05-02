#include "BitFlipProb.h"
#include <iostream>
#include <cmath>
#include <string>
#include <random>
using namespace std;

BitFlipProb::BitFlipProb(double p) {
    prob = p;
}

Individual *BitFlipProb::mutate(Individual *i, int k) {
    for(int j=0;j<i->getLength();j++) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::discrete_distribution<> distrib({ 1-prob, prob });
        double h = distrib(gen);
        if(h == 1) {
            i->flipBit(k);
        }
    }
    return i;
}
