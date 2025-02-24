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
void bubble_sort_recursion(int A[],int n,int pass,int index){
    if(pass>=n) return;     // brealk of the passing loop
    if(index>=n) return;    // break of the swaping loop
    if(index < n-1 && A[index] > A[index+1]){
        swap(A[index],A[index+1]);
    }
    bubble_sort_recursion(A,n,pass,index+1); //start of the first loop for swaping
    bubble_sort_recursion(A,n,pass+1,index);  //start of the swaping loop
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
    // bubble_sort(n,A);   //time complexity is O(n^2)
    //space complexity is O(1)

    bubble_sort_recursion(A,n,0,0);//time complexity is O(n^2)
    //space complexity is O(n)
    for(int i=0;i<n;i++){
        cout << A[i] << "\t";
    }cout << endl;
    return 0;
}