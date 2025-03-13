#include <iostream>
using namespace std;
            //this it the boilerplate code always writtin in cpp code
int main(){
    /*
        Primitive data type
        int - 4 byte
        char - 1 byte
        float - 4 byte
        bool - 1 byte
        double - 8 byte
    */
    cout << "Anurag Nayak\n";

    int age= 36;
    cout <<"my age is->" << age <<endl;

    char grade = 'A';
    cout << "i got "<< grade << " grade in my scholl test" << endl;

    float pi = 3.14;
    cout << "the value of PI is->" << pi << endl;

    bool issafe = true;
    cout << "is it raining today->" << issafe << endl; //true-> 1 false-> 0

    double price = 99.672452;
    cout << "the price of the item is->" << price << endl;

    int x;
    cout << "enter the value of X->";
    cin >> x; //cout for printing   
              //cin for entering variable

    cout << "the value of X you entered is->" << x << endl;

    // type casting
    //type casting means that you can convert big data type into small data type
    //example to convert int datatype into char 1 byte into 4 byte then the conversion is explicit and user have to forcefully do it even tho the complier don't allow it
    //implicit conversion - you are storing 1 byte data type value into 4 byte data type value so it is done by the complier

    // char grade ='A';
    cout << " the value of grade is->" << grade << endl;

    int newgrade = grade;
    cout << "noe the value of grade is->" << newgrade << endl; //ASCII value of A will be printed

    //explicit typecasting - you are storing a high data type value into low data type value like storing double into int

    // double price = 99.2223;
    cout << "current price is->" << price << endl;

    int newprice = (int)price;//value will be converted into int value so all the decimals will be removed
    cout << "new price is->" << newprice << endl;

    return 0;
}