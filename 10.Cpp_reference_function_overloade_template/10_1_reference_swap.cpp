#include <iostream> // for c++
#include <stdlib.h>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a=5, b=9;
    int c = 100;
    int& d = c; // it means that we take a nickname as d of c
                // so we use c in other block without using pointer
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    d = 200;
    cout << "after d = 200, c = " << c << endl;


    cout << "a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "after swap" << endl;
    cout << "a = " << a << " b = " << b << endl;
 
    system("pause");

    return 0;
}