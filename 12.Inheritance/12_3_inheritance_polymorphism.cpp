#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <cmath>

using namespace std;

class Person {
    public:
        // constructor destructor
        void virtual input(){
            cout << "input name: ";
            cin >> _name;
            cout << "blood type: ";
            cin >> _blood_type;
        }
        void virtual output(){
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
    const int peopleAmount = 3;
    Person* people[peopleAmount] = {
        new Person(),
        new Student(),
        new Teacher()
    };

    for (int i = 0; i < peopleAmount; i++){
        cout << "people + " << i << " = " << people + i << endl;
        cout << "people["<< i << "] = *(people + "<< i << ") = " <<  people[i] << endl;
 
    }

    for (int i = 0; i < peopleAmount; i++){
        cout << "input " << i+1 << "-th  data " << endl;
        (*people[i]).input(); // same as peoplr[i] -> input()
    }

    for (int i = 0; i < peopleAmount; i++){
        (*people[i]).output();
    }
    
    for (int i = 0; i < peopleAmount; i++){
        delete people[i];
    }

    system("pause");

    return 0;
}