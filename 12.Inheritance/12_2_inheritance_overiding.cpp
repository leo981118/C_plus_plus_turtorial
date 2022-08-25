#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <cmath>

using namespace std;

class Person {
    public:
        // constructor destructor
        void input(){
            cout << "input name: ";
            cin >> _name;
            cout << "blood type: ";
            cin >> _blood_type;
        }
        void output(){
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
        void input(){
            Person :: input();
            cout << "input studentID: ";
            cin >> _studentID;
        }
        void output(){
            Person :: output();
            cout << "studentID: " << _studentID << endl;
        }

    private:
        // data (attribute, varaiable)
        string _studentID;
};

class Teacher : public Person{
    public:
        // constructor destructor
        void input(){
            Person :: input();
            cout << "input title: ";
            cin >> _title;
        }
        void output(){
            Person :: output();
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

    sonic.input();
    tails.input();
    amy.input();

    sonic.output();
    tails.output();
    amy.output();



    system("pause");

    return 0;
}