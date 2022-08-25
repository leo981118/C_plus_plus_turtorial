#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player {
    public:
        // constructor destructor
        Player(string n, int h, int a){
            name = n;
            hp = h;
            atk = a;
        }
        // manipulation (method, function)
        void attack(Player& p2){
            p2.hp = p2.hp - atk;

            cout<< "--------------" << endl;
            cout<< name << " attack " << p2.name << endl;
            cout<< p2.name << " take  " << atk << " damage " << endl;
            cout<< p2.name << " remain  " << p2.hp << " hp " << endl;

        }

        int getHp(){
            return hp; 
        }

        string getName(){
            return name;
        }

        bool isAlive(){
            //return hp > 0; // false:0 true:1
            if (hp >0){
                return true;
            }
            else{
                return false;
            }
        }

    private:
        // data (attribute, varaiable)
        string name;
        int hp;
        int atk;
};


int main(){
    srand(time(NULL));
    Player p1("Hero", rand() % 1000 + 1, rand() % 1000 + 1);
    Player p2("Demon", rand() % 1000 + 1, rand() % 1000 + 1);

    while(p1.isAlive() && p2.isAlive()){
        p1.attack(p2);
        p2.attack(p1);
    }
   
    if(p1.isAlive()){
        cout << p1.getName() << " win !" << endl;
    }
    else if(p2.isAlive()){
        cout << p2.getName() << " win !" << endl;
    }
    else{
        cout << "Both Dead !" << endl;
    }
    
    system("pause");

    return 0;
}