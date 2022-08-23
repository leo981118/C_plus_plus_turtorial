#include <iostream> 
#include <stdlib.h>

using namespace std;

int sum(int a, int b){
    return a + b;
}


float sum(float a, float b){
    return a + b;
}

int main(){
    int a,b;
    float c,d;

    cout << "please input two number: ";
    cin  >> a >> b;
    cout << "a + b = " << sum(a, b) << endl;

    cout << "please input two float number: ";
    cin  >> c >> d;
    cout << "c + d = " << sum(c, d) << endl;

    system("pause");

    return 0;
}