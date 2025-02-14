#include<bits/stdc++.h>
using namespace std;
int lieaner_serch(int n, int A[],int key){
    for(int i = 0 ; i < n ; i++){   // trever though the array
        if(key == A[i]){    // as we find the target
            return i;   // stop the treversing and return the index
        }
    }
    return -1;  // if the target is not present the give -1
}
int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i = 0 ; i < n ; i++){
        cin >> A[i];
    }
    int key;
    cout << "Enter the target : ";
    cin >> key;
    int index = lieaner_serch(n,A,key);
    if(index == -1){
        cout << "Element not found";
    }else{
        cout << "Element found in : " << index << " index";
    }
    return 0;
}