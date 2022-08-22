#include <stdio.h> 
#include <stdlib.h>

// but use recrusion need to be aware of reduplicate computation
int f(int n){
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return 1;
    }
    
    return f(n - 1) + f(n - 2);

}
int main(){     
    
    int n;
    scanf("%d", &n);

    printf("f(n) = %d\n",f(n-1));

    system("pause");
    return 0;   
}