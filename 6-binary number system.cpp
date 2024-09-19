#include <iostream>
using namespace std;

int DecToBi(int n){
    

    cout << "binary number for the number : " << n << " is ->";

    int binary=0;           //in this we are going to store the binary digits we obtain
    int pow = 1;            // this will be used to make a order for the binary digits we'll obtain
    while(n>0){
        int rem = n%2;      // this will fetch out the o or 1 number as a remainder
        n /= 2;             // this will take out the quesitant 
        binary+=(rem*pow);  // this will update the value of the binary answer with the correct order
        pow *=10;
    }
    cout << binary << endl;
    return binary;
}

//=========================================================================

int BiToDec(int n){

    cout << "Decimal number for the number : " << n << " is ->";

    int Decimal = 0;
    int pow = 1; 

    while(n>0){
        int rem = n%10;
        Decimal += rem*pow;

        n /= 10;
        pow *= 2;
    }
    cout << Decimal << endl;
    return Decimal;
}

int main(){
/*
    in maths : we use decimal number system that as base of 10 digits 0-9

    in computer memory : it uses the binary number system base of 2 "o and 1"

    how to convert Decimal number to Binary number
        for this you have to divide the Decimal number with 2 till you get your final remainder 0

        for exampal convert 42 to binary number
            2/42-0
            2/21-1
            2/10-0
            2/5-1
            2/2-0
            2/1-1
            0
        
        now take numbers form down side to top
        101010 is the binary code for 42 

*/

//==================================================================

    int n;
    cout << "Enter the number you want to convert to binary form : " ;
    cin >> n;
    DecToBi(n);

    // for(int i=1;i<=10;i++){
    //     cout << DecToBi(i) << endl;
    // }


//====================================================================
    
    
    int m;
    cout << "Enter the number you want to convert to Decimal form : " ;
    cin >> m;
    BiToDec(m);
    

    return 0;
}