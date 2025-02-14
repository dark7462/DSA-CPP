#include<bits/stdc++.h>
using namespace std;
void count_sort(int n,int arr[]){
    int k = *max_element(arr, arr + n) + 1; // Find max element
    int count[10]={0};
    int sorted[n];
    for(int i = 0 ; i < n ; i++){
        count[arr[i]]++;
    }
    for(int i = 0 ; i < k ; i++){
        count[i] = count[i]+count[i-1];
    }
    for(int i = n-1; i >=0 ; i--){
        sorted[--count[arr[i]]] = arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        arr[i]=sorted[i];
    }cout << endl;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }
    count_sort(n,arr);
    for(int i =0 ; i < n ; i++){
        cout << arr[i] << "\t";
    }cout << endl;
    return 0;
}