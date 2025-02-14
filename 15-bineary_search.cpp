#include<bits/stdc++.h>
using namespace std;
int binary_search(int n, int A[], int key) {    //array must be sorted before
    int low = 0, high = n - 1;
    while (low <= high) {  
        int mid = (low + high) / 2;
        if (key == A[mid]) return mid;  // return index if key found
        (key < A[mid]) ? high = mid - 1 : low = mid + 1; //if mid value is greater so change high , else change low to get new area to search
    }
    return -1;  // return  -1 if target don't exists
}

int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n ; i++) cin >> A[i];
    int key;
    cout << "Enter the target : ";
    cin >> key;
    int index = binary_search(n,A,key);
    (index == -1)? cout << "Element don't exists": cout << "elemet found in : " << index << " index";
    return 0;
}