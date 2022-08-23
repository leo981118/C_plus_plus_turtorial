#include <stdlib.h>
#include "Student.h"

int main(){
    Student students[2] = {
        {
            "Sonic", 30, 1, 80, 50, 95
        },
        {
            "Tails", 28, 2, 75, 98, 92
        },
    };

    for (int i = 0; i < 2; i++){
        students[i].print();
    }

    system("pause");

    return 0;
}