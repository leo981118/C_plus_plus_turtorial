#include <iostream> // for c++
#include <stdlib.h>

using namespace std;

template <class T> // declare template
void print(T value){
    cout << "value: " << value << endl;
}

template <class T> // declare template
void input(T& a){
    cin >> a;
}
//according to input type, automatically generate (different type) function, like　below:
/* 
void print(int value){
    printf("int : %d\n", value);
}

void print(float value){
    printf("Floating Point: %f\n", value);
}
*/

int main(){
    int a = 1;
    float b = 1.5f;

    input(a);
    input(b);
    print(a);
    print(b);
   
 
    system("pause");

    return 0;
}