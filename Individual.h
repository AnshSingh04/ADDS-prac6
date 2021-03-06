#ifndef Individual_H
#define Individual_H
#include <iostream>
#include <vector>
using namespace std;

class Individual {
    
    private:
    string binaryString;

    public:
    string getString();     //: The function outputs a binary string representation of the bitstring list (e.g.“01010100”).
    int getBit(int pos);    //: The function returns the bit value at position pos. It should return -1 if pos is out of bound..
    void flipBit(int pos);  //: The function takes in the position of the certain bit and flip the bit value.
    int getMaxOnes();       //: The function returns the longest consecutive sequence of ‘1’ digits in the list (e.g. calling the function on “1001110” will obtain 3).
    int getLength();        //: The function returns the length of the list.
    Individual(int length); //A constructor that takes in the length of the binary DNA and creates the binary string. Each binary value in the list should be given a value of 0 by default.
    Individual(string s); //A constructor that takes in a binary string and creates a new Individual with an identical list. Note that this involves creating a new copy of the list.

};
#endif