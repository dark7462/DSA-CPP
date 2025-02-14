#include<bits/stdc++.h>
using namespace std;
void print_space(){
    cout << "--------------------------------------------------------\n";
}
void pairs(){
    //pairs is a linear data structure that store 2 similar data types can be used in a nested form too
    // how to declear a pair
    pair<int , int> p = {23,21};
    cout << p.first << " " << p.second << endl;

    //nested pair
    pair<int , pair<int ,int>> pair2 = {11,{45,28}};
    cout << pair2.first << " " << pair2.second.first << " " << pair2.second.second << endl;

    // array of pair
    pair <int , int> ar[2];
    ar[0] = {23,76};
    ar[1] = {87,872};
    
    cout << ar[0].first << " " << ar[0].second << endl;
    cout << ar[1].first << " " << ar[1].second << endl;

    int n= 5;
    pair<int, int> arr[n];
    for(int i=0;i<n;i++){
        cout << "enter fist element of the pair : " << i+1 << " : ";
        cin >> arr[i].first;
        cout << "enter second element of the pair : " << i+1 << " : ";
        cin >> arr[i].second;
    }cout << endl;
    for(int i=0;i<n;i++){
        cout << arr[i].first<< " " << arr[i].second << endl;
    }
}
void vectors(){
    //vectors is a dynamic array that can be resize according to our needs
    vector <int> v;
    v = {11,22,33,44,55};
    
    //can be used as array
    cout << v[0] << endl;

    //you can also initalize all the elements 
    vector <int> v1(5,0);//created a array with size 5 and all elements are zero
    for(int i=0;i<5;i++){
        cout << v1[i] << "\t";
    }cout << endl;

    //can be also done with pairs
    // vector <pair<int , int>> n(5);
    vector <pair<int , int>> n = {{1,2},{34,23},{34,2},{35,6},{43,5}};
    // for(int i=0;i<5;i++){
    //     cin >> n[i].first >> n[i].second ;
    //     cout << endl;
    // }
    for(int i=0;i<5;i++){
        cout << n[i].first<< "\t" << n[i].second ;
        cout << endl;
    }

    //you can also add add any element 
    v.push_back(1); //now 1 will be added in the end of the vector
    v.emplace_back(2);//will work same as push_back but is faster than it
    for(int i=0;i<7;i++){
        cout << v[i] << "\t";
    }cout << endl;

    //access the elements it the vector 
    vector <int> :: iterator it = v.begin();//will locate at the first element 
    vector <int> :: iterator ite = v.end();//will locate at the one element after end element  use predecrement operator (--i) to get the end element;
    cout << *(it) << " " << *(--ite) << endl;
    cout << v.back() << endl; //to fetch the end element
    //loop using iterator
    for(vector <int> :: iterator it = v.begin(); it != v.end();it++){
        cout << *(it) << "\t";
    }cout << endl;

    //auto -  used to replace the data type from every thing
    // auto name ;  this won't because auto will do it work befor running it
    auto name = "anurag"; // no need for the data type it will automatically take it
    cout << name << endl;

    //auto to replace iterator
    for(auto it = v.begin();it != v.end();it++){
        cout << *(it) << "\t";
    }cout << endl;
    //more shot
    for(auto it : v){
        cout << it << "\t";
    }cout << endl;
}
int main(){
    // pairs();
    // print_space();
    vectors();
    
    return 0;
}