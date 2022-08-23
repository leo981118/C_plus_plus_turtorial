// #include <stdio.h>  // for c 
#include <iostream> // for c++
#include <stdlib.h>

using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){
    int a,b;

    //printf("please input two number: ");
    //scanf("%d%d", &a, &b);
    //printf("a + b = %d\n",sum(a, b));

    cout << "please input two number: ";
    cin  >> a >> b;
    cout << "a + b = " << sum(a, b) << endl;
    
    system("pause");

    return 0;
}