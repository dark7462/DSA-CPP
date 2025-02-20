#include<bits/stdc++.h>
using namespace std;
/*
OOP (Object Oriented Programing)

    objects are the entites in the real world
    class is like a blueprint of these entities
    or
    basically class are the parent and object is the child 

*/
//making a class to store the data of teachers
class teacher{
//Access Modifiers - where the data and methods can be used (kind of scope of the variable but here few things are diffrent)
public:         // you have to manually assign the Access Modifiers (public, private (defult in cpp), protected)
    //properties or attributes
    string name;
    string dept;
    string subject;
    int salary;

    //methods or function or member funtions
    // basically funtions used to make changes 
    void change_dept(string newDept){
        dept = newDept;
    }
    void update_sal(int newSal){
        salary = newSal;
    }

};
class prof{
private :
    double salary;

public :
    string name;
    string dept;
    string id_no;

    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};

void basics(){
    //basics
    // to create a object 
    teacher t1;
    // to assign values use dot operator
    t1.name = "M.Ashok";
    t1.dept  = "Computer Science";
    t1.subject = "C++";
    t1.salary = 250000;
    // to get values
    cout << "name : " << t1.name << endl;
    cout << "dept : " << t1.dept << endl;
    cout << "subject : " << t1.subject << endl;
    cout << "salary : " << t1.salary << endl;
}
void setter_and_getter(){
    //use of setter and getter
    prof p1;
    p1.name = "Pawan";
    p1.dept = "AI/ML";
    p1.id_no = "24B11PO104";
    //here you can't assecc the salary cuz it's Access modifier is private
    // so for that you can use setter and getter funtions to access those thing just make sure to declare them in public
    // calling setter funtion
    p1.setSalary(25000);
    //calling getter
    cout << p1.getSalary() << endl;
}
void encapulasion(){
    //encapulasion is wapping up the data and the member funtion in a single unit called class
    //basically a creating a class and having member funtions and propertiese in is called encapsulasion
    // can be also used in data hideing (basically means hiding data in private Access modifier) 
}
void constructor(){
    //it's a specail method invoke automatically at the time of object creation
    /*
        -> it's same as class but it doesn't have any return type nor argument and it's in public
        -> only calles once at object creation
        -> memory allocation happens when constructor is called
    */

    class con{
    public :
        //there are 3 types of constructors (non-parameterised, parameterised, copy)
        //there can be multiple constructor function 
        //there can be multiple constructors but the catch is they need to have diffrent parameters

        //non-parameterised
        con(){  // here we can initialize what the values will every object contain 
            cout << "hi i m constructor" << endl;
            age = 18;
        }
        //parameterised
        con(string n, int a, int rn){
            name = n;
            age = a;
            roll_no = rn;
        }
        string name;
        int age;
        int roll_no;


        void getInfo(){
            cout << "name : " << name << endl << "age : " << age << endl << "roll_no : " << roll_no << endl;
        }
    };
    
    con c1; // our consturctor will be called as we created the object
    c1.name = "Anurag";
    cout << "Name : " << c1.name << endl << "age : " << c1.age << endl;
    //notice age is not inisialised but still the value is given because we have inisialised every age with 18
    con c2;//out constructor will be called here
    cout << "another age : " << c2.age << endl;

    prof p3; //automatically cpp made a constuctor and called it and with that help we created a object

    con c3("anurag",18,14); // can be given direct input
    c3.getInfo();

}
int main(){
    // basics();
    // setter_and_getter();
    // encapulasion();
    constructor();
    return 0;
}