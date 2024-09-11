#include<iostream>
using namespace std;
int main(){


    //square pattren
    /*
    1234
    1234
    1234
    1234
    */
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << j ;
        }
        cout << "\n";
    }


    /*
    ABCD
    ABCD
    ABCD
    ABCD
    */
    int n=4;
    for(int i=1;i<=n;i++){
        for(char j='A';j<='D';j++){
            cout << j ;
        }
        cout << "\n";
    }

    /*
    ABCDEF
    ABCDEF
    ABCDEF
    ABCDEF
    */
    int n=6;
    for(int i=1;i<=n;i++){
        char ch='A';     //if you want that your value will be reseted then decleare the variable in the inner loops 
        for(int j=1;j<=n;j++){
            cout << ch;
            ch+=1;

        }
        cout << "\n";
    }



    /*
        123
        456
        789
    */
    int n=6;
    int num=1;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){   //make a 3*3 structure then ditermine what to print
                cout << num<< "\t";
                num++;
            }
            cout << endl;
    }

    int n=3;
    char ch='A';    //if you want that your value will not be reseted then decleare the variable before the loops 
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){   //make a 3*3 structure then ditermine what to print
                cout << ch<< "\t";
                ch++;
            }
            cout << endl;
    }


    // /*
    //     *
    //     **
    //     ***
    //     ****
    // */
    int n=4;    //4 lines so n=4
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){ //stars are of line is 0 then star is 1 so i+1
            cout << "*";
        }
        cout << endl;
    }


    /*
       1
       22
       333
       4444
    */
    int n=4;
    int num=1;    //4 lines so n=4
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){//stars are of line is 0 then number is 1 so i+1
            cout << num << "\t";
        }
        num++;      //number will reset after inner loop ends so the num++ is after inner loop
        cout << endl;
    }


    /*
       1
       22
       333
       4444
    */
    int n=4;   //4 lines so n=4
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){//stars are of line is 0 then number is 1 so i+1
            cout << (i+1) << "\t";
        }
        cout << endl;
    }

    /*
       A
       BB
       CCC
       DDDD
    */
    int n=6;
    char ch='A';    //4 lines so n=4
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){//stars are of line is 0 then number is 1 so i+1
            cout << ch << "\t";
        }
        ch++;      //number will reset after inner loop ends so the num++ is after inner loop
        cout << endl;
    }

    /*
        1
        12
        123
        1234
    */
    int n=4;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout << j << "\t";
        }
        cout << endl;
    }

    /*
        1
        21
        321
        4321
    */
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){     //for the reverse loop run the printing loop in reverse order so insted of j=0 go with j=(last value) and insted of ending j=(last statement so with j>0) also do j-- 
            cout << j << " ";
        }
        cout << endl;
    }




    /*
        A
        BA
        CBA
        DCBA
    */
    int n=4;
    for(int i=0;i<n;i++){
        char ch='A';
        char output=ch+i;
        for(int j=i+1;j>0;j--){
            cout << output << " ";
            output--;
        }
        cout << endl;
    }





    // /*   also known as "floyd's triangle"
    //     1
    //     2 3
    //     4 5 6
    //     7 8 9 10
    // */
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }



    /*   also known as "floyd's triangle"
       A
       B C
       D E F
       G H I J
    */
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }


    //inverted triangle pattern
    /*
        1111
         222
          33
           4
    */
    int n=4;
    for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout << " " ;       //first print the spaces from 0 to i
            }
            for(int j=0;j<n-i;j++){
                cout << i+1;        //then print the numbers i+1
            }
            cout << endl;
    }


    //inverted triangle pattern
    /*
        AAAA
         BBB
          CC
           D
    */
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
            //spaces
            for(int j=0;j<i;j++){
                cout << " " ;       
            }
            //what to print
            for(int j=0;j<n-i;j++){
                cout << ch; 
            }
            ch++;
            cout << endl;
    }


    /*
           1
          121
         12321
        1234321
    */
    int n=4;
    for(int i=0;i<n;i++){

        //loop 1 for space o to (n-i-1)
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }

        //loop 2 for 1st set of numbers (1 to i+1)
        for(int j=1;j<=i+1;j++){
            cout << j;
        }

        //lopp 3 for 2nd set of numbers (i to 0 or 1)
        for(int j=i;j>0;j--){
            cout << j;
        }
        cout << endl;
    }

    //hollow daimond pattern
    /*
           *
          * *
         *   *
        *     *
         *   *
          * *
           *
    */
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << "*";
        if(i!=0){
            for(int j=0;j<2*i-1;j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
        
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout << " ";
        }
        cout << "*";

        if(i != n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}