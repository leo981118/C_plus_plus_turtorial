#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <cmath>

using namespace std;

class Vector {
    public:
        // constructor destructor
        Vector(){
            x = 0;
            y = 0;
        }
        Vector(float newx, float newy){
            x = newx;
            y = newy;
        }
        // manipulation (method, function)
        float getLength(){
            return sqrt(x*x + y*y);
        }
        Vector operator+(Vector other){
            Vector result(x + other.x, y + other.y);
            return result;
        }
        Vector operator*(float value){
            Vector result(x * value, y * value);
            return result;
        }


    private:
        // data (attribute, varaiable)
        float x;
        float y;
};


int main(){
    Vector v1 = {2, 3};
    Vector v2 = {1, 1};
    Vector SumVector;
    SumVector = (v1 +v2) * 3.0f;
    cout << "SumVector length is " << SumVector.getLength() << endl;

    system("pause");

    return 0;
}