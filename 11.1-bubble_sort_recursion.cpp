#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int A[],int n,int pass,int index){
    if(pass>=n) return;     // brealk of the passing loop
    if(index>=n) return;    // break of the swaping loop
    if(index < n-1 && A[index] > A[index+1]){
        swap(A[index],A[index+1]);
    }
    bubble_sort(A,n,pass,index+1); //start of the first loop for swaping
    bubble_sort(A,n,pass+1,index);  //start of the swaping loop
}
int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i = 0 ; i < n ; i++){
        cin >> A[i];
    }
    bubble_sort(A,n,0,0);
    for(int i = 0 ; i < n ; i++){
        cout << A[i] << "\t";
    }
    return 0;
}