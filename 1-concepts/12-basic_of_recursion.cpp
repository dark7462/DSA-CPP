#include<bits/stdc++.h>
using namespace std;
//simple
void printOneToTen(int n){
    if(n>10){
        return ;
    }
    cout << n << "\t";
    printOneToTen(n+1);
}
//backtraking
void TenToOne(int n){
    if(n<1){
        return ;
    }
    cout << n << "\t";
    TenToOne(n-1);
}
//factorial
int fact(int n){
    if(n ==1) return 1;
    return n * fact(n-1);
}
//fib
int fib(int n){
    if(n==1)return 0;
    if(n==2)return 1;
    return fib(n-1)+fib(n-2);
}
//count number
int count(int n, int digits){
    if(n==0) return digits;
    n/=10;
    digits++;
    return count(n,digits);
}
//reverseing a number
int rev(int orignal,int reversed){
    if(orignal == 0) return reversed;
    return rev((orignal/10) , (reversed*10)+(orignal%10));
}
//revesing an array
void rev_arr(int arr[],int index,int n){
    if(index >= (n/2)) return ;
    swap(arr[index],arr[n-index-1]);
    rev_arr(arr,index+1,n);
}
//revesing an string
void rev_string(string& s,int index,int n){
    if(index >= (n/2)) return ;
    swap(s[index],s[n-index-1]);
    rev_string(s,index+1,n);
}
//serching a key first occurance
int serch(int arr[],int index,int n,int key){
    if(arr[index] == key) return index;
    if(index>=n) return -1;
    return serch(arr,index+1,n,key);
}
//serching a key last occurance
int serch_last(int arr[],int index,int key){
    if(arr[index] == key) return index;
    if(index<0) return -1;
    return serch_last(arr,index-1,key);
}
int main(){

    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    printOneToTen(1);
    cout << endl;
    TenToOne(10);
    cout << endl;
    cout << fact(n) << endl;
    for(int i=1;i<=n;i++){
        cout << fib (i) << "\t";
    }cout << endl;
    cout << count (n,0) << endl;;
    cout << rev(n,0) << endl;

    rev_arr(arr,0,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << "\t";
    }cout << endl;

    string s;
    cin >>  s;
    int size = s.size();
    rev_string(s,0,size);
    cout << s;

    int key;
    cout << "key : ";
    cin >> key;
    int place = serch(arr,0,n,key);
    int place_last = serch_last(arr,n-1,key);
    cout << place << endl << place_last << endl;
    return 0;
}