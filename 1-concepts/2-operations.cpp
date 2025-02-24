#include<iostream>
using namespace std;

int main(){
    

    //arithmetic operators
    // also know as base maths

    int a,b;
    cout << "enter the value of 1st number : ";
    cin >> a;
    cout << "enter the value of 2nd number : ";
    cin >> b;
    
    cout << "the sum is : " << (a+b) << endl;
    cout << "the diffrence is : " << (a-b) << endl;
    cout << "the product is : " << (a*b) << endl;
    cout << "the division is : " << (a/b) << endl;//quotiant
    cout << "the modulo is : " << (a%b) << endl;//reminder
    
    //to get the exact value after division then ethier one of the data type should be float 
    //the best thing to do here is use type casting
    cout << "the excat value is : " << (5/(double)2) << endl;
    //it should be only done in the direct path not when we are declaring another varibale

//-----------------------------------------------------------------------------------

    // now comes the reational operators 
    // Reational operators only returns either ture or false as 0 or 1
    
    
    /*
        <,>,<=,=>,==,!=  these are few Relational operators

    */

   if (a>b){
        cout << "true" << endl;
   }
   else{
    cout << "false" << endl;
   }

   if (a<b){
        cout << "true" << endl;
   }
   else{
    cout << "false" << endl;
   } 

   if (a<=b){
        cout << "true" << endl;
   }
   else{
    cout << "false" << endl;
   } 

   if (a>=b){
        cout << "true" << endl;
   }
   else{
    cout << "false" << endl;
   } 

   if (a==b){
        cout << "true" << endl;
   }
   else{
    cout << "false" << endl;
   } if (!(a==b)){
        cout << "true" << endl;
   }
   else{
    cout << "false" << endl;
   } 

   //Now comes the logical operator
    /* 
    && and (both should be ture in order to the answer to be true)
    || or (either one of them should be ture for final value to be true) 
    ! not (it i'll change the true to false and false to true)
    */


   if ((a>b) && (a==b)){
        cout << "true" << endl;
   }
   else{
    cout << "false" << endl;
   }
   if ((a<b) || (b==a)){
        cout << "true" << endl;
   }
   else{
    cout << "false" << endl;
   }
   if (!(a==b)){
        cout << "true" << endl;
   }
   else{
    cout << "false" << endl;
   }

     //also there are 2 type of other operators
     //under unary operators
     //Increment and derement operator

     ++a; // if you write a++ then first a will run normally and then value will increase by 1
     cout << "the increment value of a is :" << a << endl;
     
     //same goes for decrement operators

    return 0;
}