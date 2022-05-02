#include "BitFlip.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

Individual* BitFlip::mutate(Individual *i, int k) {
    int pos=0;
    i->flipBit(k);
    return i;
}
