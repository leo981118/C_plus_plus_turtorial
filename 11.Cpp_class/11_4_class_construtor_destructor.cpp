#include <iostream>
#include <stdlib.h>

using namespace std;

class Square {
    public:
        // data (attribute, varaiable)

        // constructor destructor
        Square(){ 
            len = 3;
        }
        ~Square(){
            cout << "square byebye" << endl;
            system("pause");
        }
        // manipulation (method, function)
        void setLen(int n){
            if (n > 0){
                len = n;
            }
            else{
                cout << "error" << endl;
            }
        }

        int getLen(){
            return len; 
        }

        int area(){
            return len*len;
        }
    private:
        // data (attribute, varaiable)
        int len;
};


int main(){
    Square a;
    Square b;

    //a.setLen(10);
    b.setLen(20);

    cout << "length of square a = "<< a.getLen() <<  " area of square a = "<< a.area() << endl;
    cout << "length of square b = "<< b.getLen() <<  " area of square b = "<< b.area() << endl;

    system("pause");

    return 0;
}