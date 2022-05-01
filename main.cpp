#include"Individual.h"
#include"Mutator.h"
#include"BitFlip.h"
#include <iostream>
#include <string>
#include"Rearrange.h"

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k){   
    Individual p(indPtr->getString());
    indPtr = mPtr->mutate(p,k);
    return indPtr;
}

int main(void){
    string binarystr1;
    int k1;
    string binarystr2;
    int k2;
    cin >> binarystr1 >> k1 >> binarystr2 >> k2;
    Individual *person1;
    person1 = new Individual(binarystr1);
    Individual *person2;
    person2 = new Individual(binarystr2);
    Rearrange r;
    BitFlip b;
    person1 = execute(person1,&b,k1);
    person2 = execute(person2,&r,k2);
    std::cout << person1->getString() << " " << person2->getString() << " " << person2->getMaxOnes()<<std::endl;
}