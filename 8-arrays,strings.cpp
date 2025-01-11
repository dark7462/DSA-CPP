#include<bits/stdc++.h>
using namespace std;
int main(){
    //array is a linear type of datastucture that stores similar type of data in contigous memory location
    //when ou have to store multiple values of same data types you can use arrays
    //for Example


    int n;
    cin >> n;
    int arr[n]; 
    
    
    // datatype followed by name of the array followed by the size of the array
    //it follows 0th indexing
    //for takeing the input you can take mannually or use loops


    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << "The value at " << i << "th indexing is : " << arr[i] << endl;
    }


    //2D arrays
    // Basically it's a 2 diemensional array
    int _2darr[3][5];  // In the 1st [3] this indicates the number of arrays being created and the second[5] indicates the number of boxes created inside the array
    int rows,cols;
    int two_dem_arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> two_dem_arr[i][j];
        }
        cout << endl;
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << two_dem_arr[i][j] << "\t";
        }
        cout << endl;
    }


    string s="Anurag";
    cout << s << endl;
    //for lenght of the string 
    int len=s.size();   //6
    cout << len << endl;    //the last null charchter will be ignored

    return 0;
}