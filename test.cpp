#include <iostream>
#include <cstring>
#include <string>
using namespace std;

const int KIND_OF_WARRIOR = 5;

class Headquarter;
class Warrior {
    private :
        char name[KIND_OF_WARRIOR][10] = { "dragon", "ninja", "iceman", "lion", "wolf" };
        int strength[KIND_OF_WARRIOR];
    public :
        friend class Headquarter;
        void InitWarrior() {
            for(int i = 0; i < KIND_OF_WARRIOR; i++) {
                scanf("%d", &strength[i]);
            }
        }
        int GetMinStrength() {
            int tmp = 10001;
            for(int i = 0; i < KIND_OF_WARRIOR; i++)
                tmp = min(tmp, strength[i]);
            return tmp;
        }
};

class Headquarter {
    private :
        int source;                                 //生命元
        char color[10];                             //司令部的颜色
        int Number_of_Warrior[KIND_OF_WARRIOR];     //武士的数量
        int TotalNumber;
        int kindNumber;
        Warrior * pwarrior;

    public :
        static int time;
        static int kind[2][KIND_OF_WARRIOR];
        Headquarter(int source_, int color_, Warrior & warrior) {
            source = source_;
            switch(color_) {
                case 1 :
                    strcpy(color, "red");
                    break;
                case 2 :
                    strcpy(color, "blue");
                    break;
            }
            memset(Number_of_Warrior, 0, sizeof(Number_of_Warrior));
            TotalNumber = 0;
            kindNumber = 0;
            pwarrior = &warrior;
        }
        ~Headquarter() {
            printf("%03d %s headquarter stops making warriors\n", time, color);
        }

        bool Create(int Min_strength, int color_) {
            if(source < Min_strength)
                return false;
            bool isSuccess = false;
            do {
                int tmp = kind[color_][kindNumber];
                if(source >= pwarrior->strength[tmp]) {
                    source -= pwarrior->strength[tmp];
                    isSuccess = true;
                    TotalNumber++;
                    Number_of_Warrior[tmp]++;
                    printf("%03d %s %s %d born with strength %d,%d %s in %s headquarter\n", 
                        time, color, pwarrior->name[tmp], TotalNumber, pwarrior->strength[tmp], 
                        Number_of_Warrior[tmp], pwarrior->name[tmp], color);
                    kindNumber = (kindNumber + 1) % KIND_OF_WARRIOR;
                }
                else kindNumber = (kindNumber + 1) % KIND_OF_WARRIOR;
            } while(!isSuccess);
            return true;
        }
};

int Headquarter::time = -1;
int Headquarter::kind[2][KIND_OF_WARRIOR] = { {2, 3, 4, 1, 0}, {3, 0, 1, 2, 4} };

int main() {
    int n, M;
    scanf("%d", &n);
    Warrior warriors;
    for(int i = 0; i < n; i++) {
        scanf("%d", &M);
        warriors.InitWarrior();
        int Min_strength = warriors.GetMinStrength();
        cout << "Case:" << i + 1 << endl;
        Headquarter * red = new Headquarter(M, 1, warriors);
        Headquarter * blue = new Headquarter(M, 2, warriors);
        bool flagred = false, flagblue = false;
        do {
            Headquarter::time++;
            if(!flagred && !red->Create(Min_strength, 0)) {
                delete red;
                flagred = true;
            }
            if(!flagblue && !blue->Create(Min_strength, 1)) {
                delete blue;
                flagblue = true;
            }
            if(flagred && flagblue)
                break;
        } while(true);
        Headquarter::time = -1;
    }
    return 0;
}