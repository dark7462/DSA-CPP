#include<iostream>
using namespace std;

//there are basically 2 types of functions
//void and any other that return any value

//to print any thing
void hello(){
    cout << "hello world\n";
}

//to take any return value 
int sum(int a,int b){   //the things to be entered are called parameters
    int sum=a+b;
    cout << "The sum of both numbers are : " << sum << endl;
    return sum;
}

//to find the min value amoung 2 numbers
int min(int a,int b){
    if(a>b){
        cout << a << " : is greater than : " << b << endl;
        return a;
    }else{
        cout << b << " : is greater than : " << a << endl;
        return b;
    }
}

//to find to sum to 1 to n
int sum1toN(int n){
    int count = 0;
    for(int i=1;i<=n;i++){
        count+=i;
    }
    cout << "The sum from 1 to : " << n <<" is : " << count << endl;
    return count;
}

//to find to sum to 1 to n
int factofN(int n){
    int count = 1;
    for(int i=1;i<=n;i++){
        count*=i;
    }
    cout << "the Factorial is : " << count << endl;
    return count;
}

//pass by value function
//in this the value you pass makes a copy of them selves to do the task and then return the function return value
// main data is not manupulated in this


//calculate the sum of digits of a number
int summall(int n){
    int digisum=0;
    while(n>0){
        int lastdig = n%10;
        n /= 10;
        digisum += lastdig;
    }
    cout << "sum : " << digisum << endl;
    return digisum;
}





int main(){

    hello();

    sum(10,2); //are numbers passed in the funtions are called arguments

    min(87,62);

    sum1toN(10);

    factofN(3);

    /*
        Fuctions in memory
        -There are mainly 2 type of memory in programing
            -stack
            -heep(dynamic)
        -in stack memory the main function gets stores in the stack frame as a layer.
        -then the other fuctions which are being called by our self are stored above it as another layer.
        -and when the function called by us and when the value is returned 
        -the value is stored in the main function and the layer created by it is erased.
        -the current or the latest function which we called will be on top on the stack flow list
    */

    summall(165);




    return 0;
}