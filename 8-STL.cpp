#include<bits/stdc++.h>
using namespace std;
void print_space(){
    cout << "--------------------------------------------------------\n";
}
void pairs(){
    //pairs is a linear data structure that store 2  data type variable can be used in a nested form too

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
    //random access of memory is not possible

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
    // it's basically based on dynamic array so random access of elements are possible

    d.push_back(3);// push a element in the last of the deque
    d.emplace_back(4);// push a element in the last of the deque but takes less resorce
    d.push_front(2);// push a element in the front of the deque
    d.emplace_front(1);// push a element in the front of the deque but takes less resorce

    list<int> dq = {8,1,2,3,4,5,6,7} ;
    dq.pop_front(); // delet the first element form the deque
    dq.pop_back(); // delet the last element from the deque

    //to print all the values in the deque we can use the same auto loop
    for(auto val : dq){ // auto or data type then name of the variable then the name of the deque
        cout << val << " ";
    }
    //the funtions like (size, erase, clear, begin, end, rbeign, rend, insert, front, back) are applicable in deque as same as in vectors
}
void Stack(){   //works in LIFO  (last in first out)
    //can be visualised as a container where you can push the elements from the top
    // and assecc them from top only

    //push and emplace both worksin stack
    stack<int> s;
    s.push(1);  //push the element in bottom of the container
    s.push(2);
    s.emplace(3);

    while (!s.empty()){
        cout << s.top() <<" ";  //fetchs the top value of the stack
        s.pop();    // pop/delet the top element
    cout << endl;
    }


    s.push(1);
    s.push(2);
    s.emplace(3);

    stack<int> s2;
    s2.swap(s); // now the empty stack s2 will contain the values of s and now s will be empty

    cout << "size of s now : " << s.size() << endl;   // size of the stack 
    cout << "size of s2 now : " << s2.size() << endl;


}
void Queue(){   // works in FIFO (first in first out)
    //element are inserted from the back and comes from the first
    
    queue<int> q2;
    q2.push(1);  // elements pushed
    q2.push(2);
    q2.emplace(3);
    q2.emplace(4);

    queue <int> q1;
    q1.swap(q2); // all values of q2 will be now inside q1 and q2 is empty now
    cout << "size of q1 : " << q1.size() << endl;// size of the queue
    cout << "size of q2 : " <<q2.size() << endl;

    while(!q1.empty()){  //check if the queue is empty
        cout << q1.front() << " ";   //access the first element 
        q1.pop();//pops/delets the first element
    }cout << endl;
}
void Priorty_queue(){   //same as queue but gives priority to the elements in accesnding or decending order

    priority_queue<int> pq1;
    pq1.push(3);
    pq1.push(10);
    pq1.push(4);
    pq1.push(5); // auto matically the elements will be in decending order (greatest to smallest)

    while(!pq1.empty()){
        cout << pq1.top() << " ";
        pq1.pop();// first it'll pop the largest element then the 2nd largest then the 3rd largest and go'es on...
    }cout << endl;

    //for revese order / acesnding order 
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(3);    //time complexity of push and pop is O(log n) in priority_queue because it sorts the elemets
    pq2.push(10);
    pq2.push(4);
    pq2.push(5); // auto matically the elements will be in asending order (smallest to greatest)

    while(!pq2.empty()){
        cout << pq2.top() << " ";
        //time complexity of top is O(1)
        pq2.pop();// first it'll pop the smalles element then the 2nd smallest then the 3rd smallest and go'es on...
        //time complexity of push and pop is O(log n) in priority_queue because it sorts the elemets
    }cout << endl;


}  
void Map(){  // map is having a key (unique element)  and value (can be anything)

    // can be visualized as a table with vlaues as pair
    map <string,float> m; // map <data type of key, data type of value> name of map;

    //storing marks in the map 
    // it'll automatically be sorted acessending order if string the lexiographycally
    m["anurag"] = 9.6;
    m["piyush"] = 9.9;
    m["harsh"] = 8.2;
    m["vivek"] = 7.8;

    // you can also use insert and emplace
    m.insert({"rahul",7.9}); //pass the pair/object inside the funtion
    m.emplace("ritik",5.9); // no need to make it a object

    // you can print the value normally too
    cout << "value of piyush : " << m["piyush"] << endl;

    //count 
    // return the number of values/instances assiged to the key
    cout << "count = " << m.count("anurag") << endl;
    
    //erase
    //use this to erase any value assiged with the key
    m.erase("ritik");
    cout << "ritik : " << m["ritik"] << endl;

    //find
    //you serch for the key if it's found the you return the iterator if not the it return the end value
    if(m.find("anurag") != m.end()){ // should be a condition that gives 0/1 true/false
        cout << "found" << endl;
    }else{
        cout << "not found" << endl;
    }

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    

}
void Multi_map(){
    
}
int main(){
    // pairs();
    // print_space();
    // vectors();
    // List();
    // Deque();
    // Stack();
    // Queue();
    // Priorty_queue();
    // Map();
    Multi_map();
    return 0;
}