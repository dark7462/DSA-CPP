#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int n,int arr[]){
    for(int i = 1 ; i < n ; i++){
        //from 1 to last element is the unsorted arr
        int j = i - 1; // start of sorted array 
        int temp = arr[i];  // storing the element in a temp variable
        while(j >= 0 && arr[j] > temp){ 
            arr[j+1] = arr[j];  //shifting elements
            j--;
        }
        arr[j+1] = temp;    // after shifitng change the element 
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
    insertion_sort(n,A);
    for(int i=0;i<n;i++){
        cout << A[i] << "\t";
    }cout << endl;
    return 0;
}