#include <iostream> 
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){
    int** ptr;
    int m,n;

    cout << "input size m * n: "<< endl;
    cin >> m >> n;

    ptr = new int*[m];
    for (int i =0; i<m; i++){
        ptr[i] = new int(n);
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            ptr[i][j] = rand() % 100;
            cout << setw(2) << ptr[i][j] << "; ";
        }
        cout << endl;
    }

    for(int i = 0; i < m; i++) {
        delete ptr[i];
    }
    delete ptr;

    system("pause");

    return 0;
}
