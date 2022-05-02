#include "Individual.h"
#include"Mutator.h"
#include"BitFlip.h"
#include <iostream>
#include <string>
#include"BitFlipProb.h"
#include"Rearrange.h"

// The function calls the mutate function on the Individual object
// there are three parameter the individual the mutator and the index
// the function returns a new individual
Individual * execute(Individual * indPtr, Mutator * mPtr, int k){   
    Individual *newPerson;
    newPerson = new Individual(1);
    newPerson = mPtr->mutate(indPtr,k);
    return newPerson;
}

int main(void){
    std::string binarystr1;
    int k1;
    std::string binarystr2;
    int k2;
    std::cin >> binarystr1 >> k1 >> binarystr2 >> k2;
    Individual *one;
    one = new Individual(binarystr1);
    Individual *two;
    two = new Individual(binarystr2);
    Rearrange r;
    BitFlip b;
    one = execute(one,&b,k1);
    two = execute(two,&r,k2);
    std::cout << one->getString() << " " << two->getString() << " " << two->getMaxOnes()<<std::endl;
}