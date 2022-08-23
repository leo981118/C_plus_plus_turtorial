#include <stdio.h>
#include <stdlib.h>

class Student {
    public:
        // data (attribute, varaiable)
        char name[100];
        int age;
        int blood;
        int chineseScore;
        int mathScore;
        int englishScore;

        // manipulation (method, function)
        void print(){
            char bloodTable[4][5]={"A", "B", "O", "AB"};
            printf("student %s (%d)\n", name, age);
            printf("blood type: %s \n", bloodTable[blood]);
            printf("chinese score: %d \nmathScore: %d \nenglishScore: %d \n", chineseScore, mathScore, mathScore);
        }
};


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