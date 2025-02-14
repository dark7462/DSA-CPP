#include<bits/stdc++.h>
using namespace std;
/*
7) Problem Statement-7: Boundary vs Interior Elements
Program to differentiate between boundary and interior elements of a 2D array.
Example: int arr[4][4].
*//*
10)Program to find the Multiplication of two 2-D arrays
*/

int main(){
    const int rows=4,cols=4;
    int arr[rows][cols]={0};    // all element be 0


    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }


    for(int i=0;i<rows;i++){    //changing all border elements to highlight
        for(int j=0;j<cols;j++){
            if(((i)==0)){
                arr[i][j]=1;
            }
            if(((i)==rows-1)){
                arr[i][j]=1;
            }
            if(((j)==0)){
                arr[i][j]=1;
            }
            if(((j)==rows-1)){
                arr[i][j]=1;
            }

        }
        cout << endl;
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}