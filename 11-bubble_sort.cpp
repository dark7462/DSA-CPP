#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int n, int arr[]){
    for(int i = 0; i < n-1 ; i++){  //no of passes 0 to n-1 cuz last element will automatically be sorted if every element is sorted
        for(int j=0 ; j <n-i ; j++){    //to pick elemets 
            if(arr[j]>arr[j+i]){    // checking if the right element is greater if yes then swap them
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cout << "size if the array: ";
    cin >> n;
    int A[n];
    cout << n << " number of elements : ";
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    bubble_sort(n,A);   //time complexity is O(n^2)
                        //space complexity is O(1)
    for(int i=0;i<n;i++){
        cout << A[i] << "\t";
    }cout << endl;
    return 0;
}