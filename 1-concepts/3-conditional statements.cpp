#include <iostream>
using namespace std;
int main(){

    // loops there are 3 types of loops if-else, do-while , for,while


    // write a code to find the person is eligible to vote or not
    int age;
    cout << "enter your age : ";
    cin >> age;
    if(age>=18){
        cout << "YES...!! you can vote" <<endl;
    }else{
        cout << "SORRY...!! you are a minor you can't vote" << endl;
    }


    //write a code to check the number enterd is even or odd
    int n;
    cout << "enter any number to check it is odd or even : " ;
    cin >> n;

    if((n%2)==0){
        cout << "the number is even" << endl;
    }else{
        cout << "the number is odd" << endl;
    }



    //this has one more thing else if so you can check multiple conditions
    //write a code to assign grade to marks obtained by students
    int marks;
    cout << "enter your marks for the grading system (out of hundred) : ";
    cin >> marks;
    if(marks>=95){
        cout << "CONGO..!!, You have got A++ grade\n";
    }else if(marks>=90){
        cout << "CONGO..!!, you have got A+ grade\n";
    }else if(marks>=80){
        cout << "CONGO..!!, you have got A grade\n";
    }else if(marks>=70){
        cout << "You have got B+ grade\n";
    }else if(marks>=60){
        cout << "You have got B grade\n";
    }else if(marks>=50){
        cout << "You have got C grade\n";
    }else if(marks>=40){
        cout << "you have just passed with D grade\n";
    }else if(marks<40){
        cout << "you have failed in the exam\n";
    }else{
        cout << "invalid input";
    }


    //write a code to find the alphabet is capital or small
    char x;
    cout << "Enter any alphabet charcerter->";
    cin >> x;
    if((x<=90) && (x>=65)){   //A to Z , 65 to 90
        cout << "the alphabet is capital\n";
    }else if((x<=122) && (x>=97)){     //a to z , 97 to 122
        cout << "the alphabet is small\n";
    }


    //ternary statement - single line statement (you can convert simple if else statement in one line)

    int g=10;
    
    cout << (g >= 0 ? "positive" : "negative") << endl;


    // loops-while loop, do while loop, for loop
    // while loop

    int count=1;
    while(count<=10){  //condition
        cout << count << endl;
        count ++;      //what to be done
    }

    // //for loop
    for (int i=0;i<=10;i++){
        cout << i << "\n";
    }

    // do while loop
    int k=0;
    do{
        cout << "Hello\t" << k+1 << endl;   //block of code
        k++;
    }while(k<5);    // condition (atleast one time it will run)

    //sum of i to n
    int n=3;
    int k = 0;
    for(int i=0;i<=n;i++){  // initial point , condition, increment or decreament
        k+=i;
    }
    cout << k << endl;
    
    //odd number from 0 to n

    int count=0;
    int i=0;
    for (int i=0;i<=10;i++){
        if ((i%2)!=0){
            count +=i;
        }else{
            count += 0;
        }
    }  
    cout << count << endl;


    int count=0;
    int i=0;
    while(i<10){  //kam phele hota h, condition bad me check hota h
        i++;
        if((i%2) != 0){
            count = count+i;
        }
    }
    cout << count << endl;


    //given number is prime or not
    //1
    int n;
    cout << "enter the number you want to check it's prime or not : ";
    cin >> n;

    for(int i=2;i<=n-1;i++){
        if (n%i == 0){
            cout << "it's non prime number\n";
            break;
        }else{
            cout << "it's prime number\n";
            break;
        }
    }


    //2
    int n;
    cout << "enter the number you want to check it's prime or not : ";
    cin >> n;
    bool isprime=true;
    for(int i=2;i<=n-1;i++){
        if (n%i == 0){
            isprime = false;
            break;
        }
    }
    if(isprime==true){
        cout << n <<" is a prime number\n";
    }else{
        cout << n <<" is non prime number\n";
    }


    //nested loop
    int n=5;
    for(int i=1;i<=n;i++){  //number of lines 
        for (int j=1;j<=5;j++){ // number things to be printed in each line
            cout << "*";
        }
        cout << "\n";
    }


    //question - find sum of all numbers divisiable by 3 from 0 tp n

    int n=6;
    int count = 0;
    for (int i=0;i<=n;i++){
        if(i%3 == 0){
            count += i;
        }else{
            count += 0;
        }
    }
    cout << count << endl;
    

    //question - find the factorial of n
    int n=5;
    int fact = 1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    cout << fact << endl;

    return 0;
}