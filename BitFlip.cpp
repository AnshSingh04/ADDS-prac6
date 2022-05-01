#include "BitFlip.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

Individual* BitFlip::mutate(Individual i, int k) {
    int pos=0;
    if(k>i.getLength()) {
        pos = k-i.getLength()-1;
    }
    else
        pos=k-1;
    string bit_list = i.getString();
    if(bit_list[pos] == '1')
        bit_list[pos] = '0';
    else
        bit_list[pos] = '1';
    Individual *temp;
    temp = new Individual(bit_list);
    return temp;
}
