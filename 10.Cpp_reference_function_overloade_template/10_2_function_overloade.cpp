#include <iostream> // for c++
#include <stdlib.h>

using namespace std;

void input(int& a){
    scanf("%d", &a);
}

void input(float& a){
    scanf("%f", &a);
}

void print(int value){
    printf("int : %d\n", value);
}

void print(float value){
    printf("Floating Point: %f\n", value);
}



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