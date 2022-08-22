#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[100];
    int age;
    int blood;
    int chineseScore;
    int mathScore;
    int englishScore;

};



void printStudent(struct Student student){
    char bloodTable[4][5]={"A", "B", "O", "AB"};
    printf("student %s (%d)\n", student.name, student.age);
    printf("blood type: %s \n", bloodTable[student.blood]);
    printf("chinese score: %d \nmathScore: %d \nenglishScore: %d \n", student.chineseScore, student.mathScore, student.mathScore);
}


int main(){

    struct Student students[2] = {
        {
            "Sonic", 30, 1, 80, 50, 95
        },
        {
            "Tails", 28, 2, 75, 98, 92
        },
    };

    printStudent(students[0]);
    printStudent(students[1]);

    system("pause");

    return 0;
}