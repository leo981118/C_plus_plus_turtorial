
#include <iostream> // for c++
#include <stdlib.h>

using namespace std;

namespace Leo {
    int sum(int a, int b){
    return a + b;
    }
}

namespace Ado {
    int sum(int a, int b){
    return a + b + 10;
    }
}

int main(){
    int a,b;

    //printf("please input two number: ");
    //scanf("%d%d", &a, &b);
    //printf("a + b = %d\n",sum(a, b));

    cout << "please input two number: ";
    cin  >> a >> b;
    cout << "Leo namespace a + b = " << Leo::sum(a, b) << endl;
    cout << "Ado namespace a + b = " << Ado::sum(a, b) << endl;
    
    system("pause");

    return 0;
}