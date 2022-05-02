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
    return (int)binaryString[pos-1];
}

void Individual::flipBit(int pos) {
    if(pos > getLength())
        pos = pos - getLength()-1;
    else
        pos = pos-1;
    if(binaryString[pos] == '1')
        binaryString[pos] = '0';
    else
        binaryString[pos] = '1';
}

int Individual::getMaxOnes() {
    int count=0;
    for(int i=0;i<getLength();i++) {
        if(binaryString[i] == '1') {
            if(i != 0 && binaryString[i-1] == '1')
                count++;
        }
    }
    return count+1;
}

int Individual::getLength() {
    return binaryString.length();
}