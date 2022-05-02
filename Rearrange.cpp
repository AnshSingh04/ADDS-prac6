#include "Rearrange.h"
#include <string>

using namespace std;

Individual * Rearrange::mutate(Individual * i, int k){
    if (k > i->getLength())
        k = k%i->getLength();
    string temp;
  
    for (int j = k; j <= i->getLength() ; j++) {
        if (i->getBit(j) == 48)
            temp.push_back('0');
        else
            temp.push_back('1');
    }
    for (int j = 1; j < k ; j++) {
        if (i->getBit(j) == 48)
            temp.push_back('0');
        else
            temp.push_back('1');
    }
    return new Individual(temp);
}