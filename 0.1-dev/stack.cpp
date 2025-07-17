#include <bits/stdc++.h>
#include "stack.h"
using namespace std;
#define ll long long

int main(){
    // your code goes here
    st s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout << s1.peek() << endl;

    s1.pop();
    cout << s1.peek() << endl;

    s1.pop();
    s1.pop();
    s1.pop();

    return 0;
}