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
    vector <pair<int , int>> n = {{1,2},{34,23},{34,2},{35,6},{43,5}};
    // vector <pair<int , int>> n(5);
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
    v.pop_back();   // this will delet the last element in the vector
    v.erase(v.begin()); // will erase the 1st element
    v.erase(v.begin()+1,v.begin()+2); // to erase multiple values we can pass start and end address it will also destroy the indexes but capacity will be the same
    v.insert(v.begin(),100);//will insert a element and shift others towards right
    v.clear();// will clear all the element but size and the capacity remains the same
    v.empty(); // will give o or 1 as true or false when cheaking if the vector is empty or not
    cout << v.front() << " " << v.back() << endl; // to point the 1st and the last element in the vector
    for(auto it : v){
        cout << it << "\t";
    }cout << endl;

    //access the elements it the vector 
    v.begin();//will locate at the first element address
    v.end();//will locate at the one element after end element's address : use predecrement operator (--i) to get the end element;
    v.rbegin(); // this points at the address of last element of the vector and when incremented it trevers the vector in reverse manner (from last to first)
    v.rend();// it points at the address of index -1 and it goes in from 1st to last


    vector<int> :: iterator it = v.begin();//iterator point at first address of vector
    vector<int> :: iterator ite = v.end();//iterator point at element after the last element (may be garbage value)
    vector<int> :: reverse_iterator rit = v.rbegin();//pointes at the last location
    vector<int> :: reverse_iterator rite = v.rend();//pointes at -1 index in the vector
    cout << *(it) << " " << *(--ite) << endl; // first element and last element
    cout << *(rit) << " " << *(--rite) << endl; // last element and the first element
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
void List(){
    list<int> l ;
    //same as vector but here you can do operation from back and front
    // kind of a double linked list

    l.push_back(3);// push a element in the last of the list
    l.emplace_back(4);// push a element in the last of the list but takes less resorce
    l.push_front(2);// push a element in the front of the list
    l.emplace_front(1);// push a element in the front of the list but takes less resorce

    list<int> li = {8,1,2,3,4,5,6,7} ;
    li.pop_front(); // delet the first element form the list
    li.pop_back(); // delet the last element from the list

    //to print all the values in the list we can use the same auto loop
    for(auto val : li){ // auto or data type then name of the variable then the name of the list of=r the vector
        cout << val << " ";
    }
    //the funtions like (size, erase, clear, begin, end, rbeign, rend, insert, front, back) are applicable in list as same as in vectors
}
void Deque(){
    deque<int> d ;
    //same as vector but here you can do operation from back and forth
    // kind of a double ened queue

    d.push_back(3);// push a element in the last of the deque
    d.emplace_back(4);// push a element in the last of the deque but takes less resorce
    d.push_front(2);// push a element in the front of the deque
    d.emplace_front(1);// push a element in the front of the deque but takes less resorce

    list<int> dq = {8,1,2,3,4,5,6,7} ;
    dq.pop_front(); // delet the first element form the deque
    dq.pop_back(); // delet the last element from the deque

    //to print all the values in the list we can use the same auto loop
    for(auto val : dq){ // auto or data type then name of the variable then the name of the list of=r the vector
        cout << val << " ";
    }
    //the funtions like (size, erase, clear, begin, end, rbeign, rend, insert, front, back) are applicable in list as same as in vectors
}
int main(){
    // pairs();
    // print_space();
    // vectors();
    List();
    Deque();
    return 0;
}