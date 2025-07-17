#ifndef STACK_H
#define STACK_H

#include <bits/stdc++.h>
using namespace std;

struct st{
    vector<int> s;
    int top ;
    st(){
        top = -1;
    }
    bool isempty(){
        if(top <= -1) return true;
        else return false;
    }
    bool isfull(){
        if(top >= INT_MAX) return true;
        else return false;
    }
    void push(int val){
        if(isfull()){
            cout << "Stack OverFlow\n";
            return;
        }
        s.push_back(val);
        top++;
    }
    void pop(){
        if(isempty()){
            cout << "Stack UnderFlow\n";
            return;
        }
        top--;
    }
    int peek(){
        if(isempty()){
            cout << "Stack Empty\n";
            return -1;
        }
        // cout << s[top];
        return s[top];
    }
    // int top(){
    //     if(isempty()) return -1;
    //     else return s[top];
    // }
};


#endif