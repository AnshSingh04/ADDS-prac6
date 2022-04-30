#include "Individual.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

Individual::Individual(int length) {
    binaryString="";
    for(int i=0;i<5;i++)
        binaryString.append("0");
}

Individual::Individual(string s) {
    binaryString = s;
}

string Individual::getString() {
    return binaryString;
}

int Individual::getBit(int pos) {
    if(pos > getLength())
        return -1;
    string bit_list = getString();
    return (int)bit_list[pos];
}

void Individual::flipBit(int pos) {
    string bit_list = getString();
    if(bit_list[pos] == '1')
        bit_list[pos] = '0';
    else
        bit_list[pos] = '1';
}

int Individual::getMaxOnes() {
    int count=0;
    string bit_list = getString();
    for(int i=0;i<getLength();i++) {
        if(bit_list[i] == '1') {
            if(i != 0 && bit_list[i-1] == '1')
                count++;
        }
    }
    return count+1;
}

int Individual::getLength() {
    string bit_list = getString();
    return bit_list.length();
}