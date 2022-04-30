#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;
Individual * execute(Individual * indPtr, Mutator * mPtr, int k);

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) {
    return indPtr;
    //mPtr->mutate(&indPtr,k);
}

int main() {
    string binarystr1="", binarystr2="";
    int k1=0,k2=0;
    cin>>binarystr1>>k1>>binarystr2>>k2;

    Individual person1(binarystr1);
    Individual person2(binarystr2);
    BitFlip j;
    Rearrange r;

    person1 = j.mutate(person1,k1);
    person2 = r.mutate(person2,k2);
    int ones = person2.getMaxOnes();
    cout<<person1.getString()<<" "<<person2.getString()<<" "<<ones;
    return 0;
}