#include<bits/stdc++.h>
using namespace std;
void printSubSeq(int A[], int index, int n, int B[]){
    //base case
    if(index >= n){
        for(int i = 0 ; i < n ; i++){
            if(B[i] != 0) cout << B[i] <<" ";
        }cout << endl;
        return ;
    }

    //if we pick
    B[index] = A[index];
    printSubSeq(A,index+1,n,B);
    B[index] = 0;

    //don't pick 
    printSubSeq(A,index+1,n,B);
}
int sumSubSeq(int A[], int index, int n, int k, int sum){
    //base case
    if(index >= n){
        if(sum == k) return 1;
        else return 0;
    }
    if(sum == k) return 1;
    
    //pick call
    int left = 0 , right = 0;
    left += sumSubSeq(A,index+1,n,k,sum+A[index]);
    //non pick
    right += sumSubSeq(A,index+1,n,k,sum);
    //sum
    return left+right;

}
void printSumSubSeq(int A[], int index, int n, int B[], int target, int sum){
    //base case
    if(index >= n){
        if(sum == target){
            for(int i = 0 ; i < n ; i++){
                if(B[i] != 0){
                    cout << B[i] << "\t";// only print picked elements not zero
                    
                }  
            }cout << endl;
        }
        return ;
    }

    //pick
    B[index] = A[index];
    printSumSubSeq(A, index+1, n, B, target, sum + A[index]);
    B[index] = 0;

    //non pick
    printSumSubSeq(A, index+1, n, B, target, sum);
}
int main(){
    int n;
    cin >> n;
    int A[n];
    int B[n];
    for(int i = 0 ; i < n ; i++){
        cin >> A[i];
    }
    // printSubSeq(A,0,n,B);
    int target;
    cin >> target;
    // cout << sumSubSeq(A,0,n,target,0) << endl;
    printSumSubSeq(A,0,n,B,target,0);
    return 0;
}