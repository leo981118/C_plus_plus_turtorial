#include <iostream> 
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
    string a,b;

    a = "Hello";
    cout << "please input b string: ";
    cin >> b;

    if (a == b){
        cout << "string a and b the same" << endl;
    }
    else{
        cout << "string a and b not the same" << endl;
    }

    a = a + b;
    cout << "string a and b concat: " << a << endl;

    a = b;
    cout << "string a copy b : " << a << endl;

    system("pause");

    return 0;
}