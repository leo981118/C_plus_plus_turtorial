#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <cmath>

using namespace std;

class Person {
    public:
        // constructor destructor
        void InputPerson(){
            cout << "input name: ";
            cin >> _name;
            cout << "blood type: ";
            cin >> _blood_type;
        }
        void OutputPerson(){
            cout << "name: " << _name << endl;
            cout << "blood_type: " << _blood_type << endl;
        }

    private:
        // data (attribute, varaiable)
        string _name;
        string _blood_type;

};

class Student : public Person { //child class: permission : parent class
    public:
        // constructor destructor
        void InputStudent(){
            InputPerson();
            cout << "input studentID: ";
            cin >> _studentID;
        }
        void OutputStudent(){
            OutputPerson();
            cout << "studentID: " << _studentID << endl;
        }

    private:
        // data (attribute, varaiable)
        string _studentID;
};

class Teacher : public Person{
    public:
        // constructor destructor
        void InputTeacher(){
            InputPerson();
            cout << "input title: ";
            cin >> _title;
        }
        void OutputTeacher(){
            OutputPerson();
            cout << "title: " << _title << endl;
        }

    private:
        // data (attribute, varaiable)
 
        string _title;
};







int main(){
    Person sonic;
    Student tails;
    Teacher amy;

    sonic.InputPerson();
    tails.InputStudent();
    amy.InputTeacher();

    sonic.OutputPerson();
    tails.OutputStudent();
    amy.OutputTeacher();



    system("pause");

    return 0;
}