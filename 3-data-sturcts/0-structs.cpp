#include<bits/stdc++.h>
using namespace std;
void print_space(){
    cout << "-------------------------------------------------------------------------\n";
}
//as class
class car{
private :
    string model_no;
public:
    string engin;
    string fuel_type;
    int fuel_Tank_cap;
    int seating_cap;
    float mileage;

    void setModel_no(string s){
        model_no = s;
    }
    string getModel_no(){
        return model_no;
    }
};

int main(){
    //car1
    car lambo;
    lambo.engin = "V8";
    lambo.fuel_type = "Petol";
    lambo.fuel_Tank_cap = 60;
    lambo.seating_cap = 5;
    lambo.mileage = 67.5;

    cout << "Lambo's engin is : " << lambo.engin << endl;
    cout << "Lambo's fuel type is : " << lambo.fuel_type << endl;
    cout << "Lambo's Tank capacity is : " << lambo.fuel_Tank_cap << endl;
    cout << "Lambo's setaing capacity is : " << lambo.seating_cap << endl;
    cout << "Lambo's mileage is : " << lambo.mileage << endl;
    print_space();

    //car2 
    car farari;
    farari.engin = "v6";
    farari.fuel_type = "Petol";
    farari.fuel_Tank_cap = 50;
    farari.seating_cap = 2;
    farari.mileage = 12.2;

    cout << "farari's engin is : " << farari.engin << endl;
    cout << "farari's fuel type is : " << farari.fuel_type << endl;
    cout << "farari's Tank capacity is : " << farari.fuel_Tank_cap << endl;
    cout << "farari's setaing capacity is : " << farari.seating_cap << endl;
    cout << "farari's mileage is : " << farari.mileage << endl;
   
    print_space();

    int n = 1;
    car c[n];
    for(int i = 0 ; i < n ; i++){
        cout << "Enter the engin type : \n";
        cin >> c[i].engin ;
        cout << "Enter the fuel type : \n";
        cin >> c[i].fuel_type;
        cout << "Enter the tank capacity : \n";
        cin >> c[i].fuel_Tank_cap;
        cout << "Enter the setaing capacity : \n";
        cin >> c[i].seating_cap;
        cout << "Enter the mileage : \n";
        cin >> c[i].mileage;
    }
    for(int i = 0 ; i < n ; i++){
        cout << "engin is : " << c[i].engin << endl;
        cout << "fuel type is : " << c[i].fuel_type << endl;
        cout << "tank capacity : " << c[i].fuel_Tank_cap << endl;
        cout << "setaing capacity is : " << c[i].seating_cap << endl;
        cout << "mileage is : " << c[i].mileage << endl;
    }
    return 0;
}