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
void Multi_map(){   // here we can create a map with multiple keys

    multimap<string,int> mm;
    mm.emplace("tv",10);
    mm.emplace("tv",3);
    mm.emplace("tv",1);
    mm.emplace("tv",14); // here we have to use emplace cuz we can't use square bracket notation
    for( auto i : mm){
        cout << i.first << " " << i.second << endl;
    }
    print_space();

    //erase
    // erase the every element 
    // mm.erase("tv"); // it'll remove every element with the key tv

    // use find and erase insted
    mm.erase(mm.find("tv")); //it'll remove the iteraror element only
    for( auto i : mm){
        cout << i.first << " " << i.second << endl;
    }

    //rest maximum things are same as others
}
void Unordered_map(){   // same as map but it dosen't sort the elements it's in random order
    // time complexity of this is O(1) in every uses 
    //while mpa is having O(log n) because it's self balencing tree
    unordered_map<string,int> um;
    um.emplace("anu",23);
    um.emplace("piyush",23);
    um.emplace("vivek",33);
    um.emplace("renu",78);

    for(auto i : um){
        cout << i.first << " " << i.second << endl;
    }
    //similar function as ther can be used
}
void Set(){ // stores only the unique values in sorted other
    // since this also uses a self Balancing tree 
    //time complexity is O(log n) fro every funtions in it (insert, emplace, erase, find, size, empty, count)
    set<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    
    for (auto i : s){
        cout << i << "\t";
    }cout << endl;

    //since it only takes uniques elements
    s.insert(2);
    s.insert(1);
    s.insert(3);

    //these will not have any effect 
    cout << s.size() << endl;// size will be the same as before the element will not be added
    for (auto i : s){
        cout << i << "\t";
    }cout << endl;

    //rest function are same as others

    //lower_bound
    // it return either the same value if found or the nearest greater value's iterator that exist it not then it'll return the end iterator
    // you have to derefrence the iterator to fetch the value
    cout << *(s.lower_bound(3)) << endl; //will return 4
    // but if
    s.erase(5);
    cout << *(s.lower_bound(5))<< "-lower" << endl; //will return end iterator (no value)
    //it's like give me value that should not be less than what i asked for

    s.insert(5);
    //upper bound
    //it'll return the iterator of the value greater than the value passed
    cout << *(s.upper_bound(4)) << endl;// return 4

    //just like multimap and ordered map 
    //multiset also exists  (sorted values but can be duplicate values)
    // unordered_set also exists (unique values in random order)
}
void algorithm(){

    //sort in array
    cout << "in array :" << endl;
    int n = 5;
    int arr[n] = {1,5,3,2,4};
    sort(arr,arr+n); // start value and end value arr+(n-1) will be the end value but the real end value is arr+n
    for( auto i : arr) cout << i << " ";
    cout << endl;


    //same can be done in a vetor
    cout << "in vector :" << endl;
    vector<int> vec = {1,5,3,2,4};
    sort(vec.begin(),vec.end());
    for(auto i : vec)cout << i << " ";
    cout << endl;


    //sorting in decending order
    //we pass a greater<int>() functor/comparetor in the sort funtion
    cout << "decending order in vector :" << endl;
    vector<int> v = {1,5,3,2,4};
    sort(v.begin(),v.end(),greater<int>());
    for(auto i : v)cout << i << " ";
    cout << endl;

}
//for customCoparetor
bool coparetor(pair <int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false; //logoc rfor 2nd element

    // if we want that if 2nd element is same then sort on the basis of first element
    if(p1.first < p2.first) return true;
    else return false;
    
}
void customCoparetor(){

    //sorting can be done in pairs also but by defult it sorts the pair with respect the first element of the pair
    cout << "normal pair : " << endl;
    vector<pair<int,int>> pv = {{3,6},{7,3},{4,2},{9,2},{8,2}};
    for(auto i : pv){
        cout << i.first << "\t" << i.second << endl;
    }

    //sorted pair by defult
    cout << "sorted pair : " << endl;
    sort(pv.begin(),pv.end());
    for(auto i : pv){
        cout << i.first << "\t" << i.second << endl;
    }

    vector<pair<int,int>> pv2(pv);
    //but if we want to sort the pair with respect to 2nd element 
    // then we create a custom comparitor (a boolean function that returns true or false based on a condition)
    // then pass the custom comparitor with in the sort funtion
    cout << "sorted pair with 2nd element : " << endl;
    sort(pv2.begin(),pv2.end(),coparetor);
    for(auto i : pv2){
        cout << i.first << "\t" << i.second << endl;
    }
}
void otheralgorithm(){


    //reverse 
    //it's used to reverse the whole array
    vector<int> vec = {1,2,3,4,5};
    reverse(vec.begin(),vec.end());
    for(auto i : vec)cout << i << " ";
    cout << endl;

    //Next premutation
    //it can give out the next possible combination of elements
    string s = "abc";
    next_permutation(s.begin(),s.end());
    cout << s << endl;
    // can be in revese too
    prev_permutation(s.begin(),s.end());
    cout << s << endl;

    // minimun between 2 values
    cout << min(5,4) << endl;
    //maximum between 2 values
    cout << max(5,4) << endl;
    //swap of values in 2 variables
    int a = 1 , b = 2;
    swap(a,b);
    cout << "a : " << a << "\tb : " << b << endl;

    // to get maximum & minimun element in the array
    //max
    vector<int> v = {3,6,2,47,3,6,2};
    int MAX = *(max_element(v.begin(),v.end())); // returns the iterator
    cout << MAX << endl;
    //min
    int MINI = *(min_element(v.begin(),v.end())); // returns the iterator
    cout << MINI << endl;


    // to count the bits
    int n = 15;
    long int n2 = 15;
    long long int n3 = 15;

    cout << __builtin_popcount(n) << endl; //4
    cout << __builtin_popcountl(n2) << endl; //4 
    cout << __builtin_popcountll(n3) << endl; //4
    //last l or ll will depend in data type in __bulitin_popcount() , __builtin_popcountl() , __bulitin_popcountll()


    // all main STL's completed

}
int main(){
    // pairs();
    // print_space();
    // vectors();
    // List();
    // Deque();
    // Queue();
    // Priorty_queue();
    // Map();
    // Multi_map();
    // Unordered_map();
    // Set();
    // algorithm();
    // customCoparetor();
    otheralgorithm();
    return 0;
}