#include <bits/stdc++.h>
using namespace std;

void print_arr(int n, int A[]){
    for(int i = 0 ; i < n ; i++){
        cout << A[i] << "\t";
    }
    cout << endl;
}

int partition(int A[], int low, int high) { // selecting a pivot element and arrangeing array accordingly
    int pivot = A[low];
    int start = low + 1;
    int end = high;

    while (start <= end) {
        while (start <= end && A[start] <= pivot) start++;  // stoping when we have same value or less 
        while (start <= end && A[end] > pivot) end--;   //stopping when we have greater value 
        if (start < end) swap(A[start], A[end]);    //swaping them
    }
    swap(A[low], A[end]);  // if start and end crossed then swap the pivot element with end
    return end;
}

void quicksort(int A[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(A, low, high);   // breaking array
        quicksort(A, low, pivotIndex - 1);  // 1st part call
        quicksort(A, pivotIndex + 1, high); //2nd part call
    }
}

int main() {
    int n;
    cin >> n;
    int A[n];  
    for(int i = 0 ; i < n ; i++){
        cin >> A[i];
    }

    cout << "Before Sorting:\n";
    print_arr(n, A);

    quicksort(A, 0, n - 1);

    cout << "After Sorting:\n";
    print_arr(n, A);

    return 0;
}
