#include <iostream> 
#include <stdlib.h>

using namespace std;

int main(){
    int* ptr = new int(2);

    cout << "ptr: " << ptr << endl;
    cout << "ptr + 0: " << ptr + 0 << endl;
    cout << "ptr + 1: " << ptr + 1 << endl;
    cout << endl;
    cout << "&ptr: " << &ptr << endl;
    cout << "&ptr + 0: " << &ptr + 0 << endl;
    cout << "&ptr + 0: " << &ptr + 1 << endl;
    cout << endl;

    *ptr = 200;
    *(ptr + 1) = 300;

    cout << "after *ptr = 200, *(ptr + 1) = 300" << endl;

    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "*(ptr + 1): " << *(ptr + 1) << endl;

    delete [] ptr;

    system("pause");

    return 0;
}