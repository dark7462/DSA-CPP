#include <bits/stdc++.h>
using namespace std;

void count_sort(int n, int arr[]) { //only works if all elemets are having single digit 
    int k = *max_element(arr, arr + n) + 1; // Find max element
    vector<int> count(k, 0), sorted(n); //sorted arr and a array to store the elements

    for (int i = 0; i < n; i++) count[arr[i]]++;    //number of elemets of same index values

    for (int i = 1; i < k; i++) count[i] += count[i - 1]; // updating the array accoding to index so we can replace the values in the sorted array

    for (int i = n - 1; i >= 0; i--) sorted[--count[arr[i]]] = arr[i];  //to place values in the sorted array

    for (int i = 0; i < n; i++) arr[i] = sorted[i]; // replacing the values in the main array
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    count_sort(n, arr);//time complexity is O(n+k)
    //space complexity is O(n+k)

    for (int i = 0; i < n; i++) cout << arr[i] << "\t";
    cout << endl;

    return 0;
}