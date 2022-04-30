#include "Rearrange.h"
#include <iostream>
#include <cmath>
#include <string>
#include <random>
using namespace std;

Individual Rearrange::mutate(Individual i, int k) {
    int pos=0;
    string start="",end="";
    string bit_list = i.getString();
    if(k>i.getLength()) {
        pos = k-i.getLength()-1;
    }
    else
        pos=k-1;
    for(int j=0;j<i.getLength();j++) {
        if(j<pos) 
            end=end+bit_list[j];
        else
            start=start+bit_list[j];
    }
    string st=start+end;
    Individual temp(st);
    return temp;
}
