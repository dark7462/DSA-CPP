#include <iostream>
using namespace std;
int main(){

    //as we have the logical operator we also have the bitwise operator
    // as and (&), or ( | ), xor exclusive or (^)

    //they preform the calculation bitwise
    cout << (1 & 0) << endl;
    //you can understand it as true false.
    cout << (1 | 0) <<  endl;

    cout << (3^10) << endl;
    //xor deals with the bitwise values of the integer


    //then comes bitwise left shift operator and bitwise right shift operator

    //in left shift operator the number shift it self by the 2nd value given to the left and the blank space are filled with zeros

    cout << (4<<2) << endl;//16

    //you can also say that the number is performing a * 2^b

    //in the right shift operator the number shiftes it self by number of places to the right

    cout << (4>>1) << endl;//2b
    //right shift basically does this a / 2^b

    //SCOPES
        //varibales which we declear inside any loop,if esle , in any block of code it can't be accessed out it
        //but if we want to have a global varible that can be accessed though out the program then declare it before the int main and after the preprocessor directive
    
    

    return 0;
}
