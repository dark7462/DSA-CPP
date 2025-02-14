#include<bits/stdc++.h>
using namespace std;

void print_space(){
    cout << "------------------------------------------------------------------------------" << endl;
}
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print3(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print4(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}
void print5(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout << j <<" ";
        }
        cout << endl;
    }
}
void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout << " ";
        }
        for(int j=1;j<=2*i+1;j++){
            cout << "*";
        }
        for(int j=1;j<=n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout << " 0 ";
        }
        //stars
        for(int j=0;j<(2*n)-(2*i+1);j++){
            cout << " * ";
        }
        //space
        for(int j=0;j<i;j++){
            cout << " 0 ";
        }
        cout << endl;
    }
}
void print9(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout << " ";
        }
        for(int j=1;j<=2*i+1;j++){
            cout << "*";
        }
        for(int j=1;j<=n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout << " ";
        }
        //stars
        for(int j=0;j<(2*n)-(2*i+1);j++){
            cout << "*";
        }
        //space
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print10(int n){
    //upper triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    //lower triangle
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print11(int n){
    int num = 1;
    for(int i=0;i<n;i++){
        (i%2==0 || i == 0)?num=1:num=0;
        for(int j=0;j<=i;j++){
            cout << num;
            (num == 1)?num=0:num=1;
        }
        cout << endl;
    }
}
void print12(int n){
    for(int i=0;i<n;i++){
        //numbers
        for(int j=0;j<=i;j++){
            cout << j+1 << " ";
        }
        //spaces
        for(int j=0;j<(2*n)-(2*i+2);j++){
            cout << "* ";
        }
        //numbers
        for(int j=i;j>=0;j--){
            cout << j+1 << " ";
        } cout << endl;
    }
}
void print13(int n){
    int num =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << num << " ";
            num++;
        }cout << endl;
    }
}
void print14(int n){
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<=i;j++){
            cout << ch << " ";
            ch++;
        }cout << endl;
    }
}
void print15(int n){
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<=n-i-1;j++){
            cout << ch << " ";
            ch++;
        }cout << endl;
    }
}
void print16(int n){
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}
void print17(int n){
    for(int i=0;i<n;i++){
        char ch='A';
        //space
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        //char1
        for(int j=i;j>=0;j--){
            cout << ch;
            ch++;
        }
        ch='A';
        //char 2
        for(int j=0;j<i;j++){
            cout << ch;
            ch++;
        }cout << endl;
    }
}
void print18(int n){
    for(int i=0;i<n;i++){
        char ch = 'A';
        char p = ch+(n-i-1);
        for(int j=0;j<=i;j++){ 
            cout << p << " ";
            p++;
        }
        cout << endl;
    }
}
void print19(int n){
    for(int i=0;i<n;i++){
        //star 1
        for(int j=0;j<=n-i-1;j++){
            cout << "* ";
        }
        //spaces
        for(int j=0;j<2*i;j++){
            cout << "  ";
        }
        //star 2
        for(int j=0;j<=n-i-1;j++){
            cout << "* ";
        }cout << endl;
    }
    for(int i=0;i<n;i++){
        //star 1
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        //spaces
        for(int j=0;j<(2*n)-(2*i+2);j++){
            cout << "  ";
        }
        //star 2
        for(int j=0;j<=i;j++){
            cout << "* ";
        }cout << endl;
    }
}
void print20(int n){
    //loop 1
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        //spaces
        for(int j=0;j<(2*n)-(2*i+2);j++){
            cout << "  ";
        }
        //star
        for(int j=0;j<=i;j++){
            cout << "* ";
        }cout << endl;
    }
    //loop 2
    for(int i=0;i<n-1;i++){
        //star
        for(int j=0;j<n-1-i;j++){
            cout << "* ";
        }
        //spaces
        for(int j=0;j<2*i+2;j++){
            cout << "  ";
        }
        //star
        for(int j=0;j<n-1-i;j++){
            cout << "* ";
        }cout << endl;
    }
}
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }cout << endl;
    }
}
int mini(int a,int b){
    return (a>b)? b : a;
}
void print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int bottom = (2*n-2)-i;
            int left = j;
            int right = (2*n-2)-j;
            cout << (n - mini(mini(top, bottom), mini(left, right)));
        }cout << endl;
    }
}

int main(){

    /*
        outer loop =  number of rows
        inner loop = number of columns (connet them somehow to the rows)
        print * inside the inner loops
        observe the symmtry (optional)
    */
    int n;
    cout << "Enter the value of n that is to be set in every pattren : ";
    cin >> n;
    print1(n);
    print_space();
    print2(n);
    print_space();
    print3(n);
    print_space();
    print4(n);
    print_space();
    print5(n);
    print_space();
    print6(n);
    print_space();
    print7(n);
    print_space();
    print8(n);
    print_space();
    print9(n);
    print_space();
    print10(n);
    print_space();
    print11(n);
    print_space();
    print12(n);
    print_space();
    print13(n);
    print_space();
    print14(n);
    print_space();
    print15(n);
    print_space();
    print16(n);
    print_space();
    print17(n);
    print_space();
    print18(n);
    print_space();
    print19(n);
    print_space();
    print20(n);
    print_space();
    print21(n);
    print_space();
    print22(n);
    print_space();
    return 0;
}