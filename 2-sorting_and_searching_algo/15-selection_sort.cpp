#include<bits/stdc++.h>
using namespace std;
void selection_sort(int n, int arr[]) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {   //form i+1 means next element from where we start to end
            if (arr[j] < arr[min_idx]) {
                min_idx = j;    //finding minium element
            }
        }
        // Swap the minimum element with the picked element element
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }
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
    selection_sort(n,A);//time complexity is O(n^2)
    //space complexity is O(1)

    for(int i=0;i<n;i++){
        cout << A[i] << "\t";
    }cout << endl;
    return 0;
}