#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int start, int mid, int end) {
    int i = start, j = mid + 1, k = 0;
    int B[end - start + 1]; // new sorted array

    while (i <= mid && j <= end) (A[i] < A[j]) ? B[k++] = A[i++] : B[k++] = A[j++]; // merging array in sorted maner
    while (i <= mid) B[k++] = A[i++]; // placeing left over elements
    while (j <= end) B[k++] = A[j++]; // placeing left over elements

    for (int i = start, k = 0; i <= end; i++, k++) // transfering elements to orignal array
        A[i] = B[k];
}

void merge_sort(int A[], int start, int end) {
    if (start >= end) return;   // base case
    
    int mid = (start + end) / 2;
    
    merge_sort(A, start, mid);  // first part of array
    merge_sort(A, mid + 1, end);  // second part of array
    
    merge(A, start, mid, end);  // merging both parts 
}

int main() {
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++) cin >> A[i];

    merge_sort(A, 0, n - 1);//time complexity O(n log n)
    //space complexity O(n)
    for (int i = 0; i < n; i++) cout << A[i] << "\t";
    cout << endl;

    return 0;
}
