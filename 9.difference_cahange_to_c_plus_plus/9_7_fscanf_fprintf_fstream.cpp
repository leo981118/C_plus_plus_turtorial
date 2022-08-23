#include <iostream> 
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(){
    fstream in("data.txt", ios::in);
    fstream out("output.txt", ios::out);
    char str[100];
    int a, b, c;
    while(in >> str >> a >> b >> c){
        out << str <<" "<< a << " " << b << " " << c << endl;
    }
    
    in.close();
    out.close();
    
    system("pause");

    return 0;
}