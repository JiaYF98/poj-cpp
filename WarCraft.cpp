/*
There are two tribes in the world. The headquarter of Red tribe is in the west of the world and the Blue tribe’s is in the east.
There are n cities between these two headquarters, denoted as:

Red headquarter -City 1 - City 2 - City 3, …  - City n -Blue headquarter

Headquarters can create warriors. There are five types of warriorsin total.
They are dragon, ninja,iceman, lion, wolf. Every warrior has three properties: Number, strength, Attack.

In each headquarter, the Number of warriors starts from 1.
For example, The Number of the warrioris n, if he was the Nth to be made in Red headquarter.
Similarly, If the Blue headquarter made the Nth warrior, his Number is n.

Every warrior is born with a strength.

In every integral point, each headquarter will create a new warrior.

The order of warrior creation in Red headquarter: iceman, lion, wolf, ninja, dragon

The order of warrior creation in Blue headquarter: lion, dragon, ninja, iceman, wolf

The creation of a warrior will consume the strength of the headquarter.
For example, if the Blue headquarter made a warrior with m strength, then the strength of the Blue headquarter will reduce m.

If the headquarter doesn’t have the enough strength to create the present warrior,it will move to the warrior of next type.
When the headquarter cannot create any type of warriors, it stops.

Requirement:

When the time and the initial strength of two headquarters are given, you need to list every event of two headquarters after 0:00.

There are two types of events:

(1)  A warrior is born

Sample:  004 blue lion 5 bornwith strength 5,2 lion in red headquarter

It means in 4:00, a lion was born in red headquarter, his Number is 5 and strength is 5.
Now, there are 2 lions in the red headquarter.(notice: do not use plural form, for example it is 2 lionnot 2 lions)

(2)  headquarter stops making warriors

Sample: 010 red headquarter stops making warriors`

It means in 10:00, the red headquarter stops making warriors

When you list the events, it should output in chronological order. If some events happen at the same time, first output the event in the Red headquarter then Blue headquarter.
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int warriorTypeNumber = 5;
const int colorTypeNumber = 2;

enum colorNumber
{
    red,
    blue
};
enum warriorNumber
{
    dragon,
    ninja,
    iceman,
    lion,
    wolf
};

class Warrior
{
private:
    string type;
    int number;
    int strength;
    int attack;

public:
    Warrior() {}

    Warrior(string type, int number, int strength, int attack)
    {
        this->type = type;
        this->number = number;
        this->strength = strength;
        this->attack = attack;
    }

    int getNumber()
    {
        return this->number;
    }

    int getStrength()
    {
        return this->strength;
    }

    int getAttack()
    {
        return this->attack;
    }
};

class Dragon : public Warrior
{
public:
    Dragon() {}

    Dragon(int number, int strength, int attack) : Warrior("dragon", number, strength, attack) {}
};

class Ninja : public Warrior
{
public:
    Ninja() {}

    Ninja(int number, int strength, int attack) : Warrior("ninja", number, strength, attack) {}
};

class Iceman : public Warrior
{
public:
    Iceman() {}

    Iceman(int number, int strength, int attack) : Warrior("iceman", number, strength, attack) {}
};

class Lion : public Warrior
{
public:
    Lion() {}

    Lion(int number, int strength, int attack) : Warrior("lion", number, strength, attack) {}
};

class Wolf : public Warrior
{
public:
    Wolf() {}
    Wolf(int number, int strength, int attack) : Warrior("wolf", number, strength, attack) {}
};

class WarriorFactory
{
private:
    int number;

public:
    WarriorFactory()
    {
        number = 1;
    }

    Warrior *createWarrior(int type, int strength, int attack)
    {
        switch (type)
        {
        case dragon:
            return new Dragon(number++, strength, attack);
        case ninja:
            return new Ninja(number++, strength, attack);
        case iceman:
            return new Iceman(number++, strength, attack);
        case lion:
            return new Lion(number++, strength, attack);
        case wolf:
            return new Wolf(number++, strength, attack);
        }
        return nullptr;
    }
};

class HeadQuarter
{
private:
    static string colorName[colorTypeNumber]; // 司令部的颜色

    static string warriorName[warriorTypeNumber]; // 武士种类

    static int warriorCreateOrder[colorTypeNumber][warriorTypeNumber];

    string color;                           // 司令部颜色
    int strength;                           // 生命元
    int warriorStrength[warriorTypeNumber]; // 制造武士需要消耗的生命元
    int minStrength;                        // 制造武士所需最小生命元
    int warriorAmount[warriorTypeNumber];   // 各类武士分别有多少
    int order[warriorTypeNumber];           // 武士制造的顺序
    int count;                              // 要制造武士的序号
    WarriorFactory *factory;                // 武士工厂
    bool endFlag;                           // 停止制造标志

    bool beProduced()
    {
        return this->strength >= this->minStrength;
    }

public:
    HeadQuarter() {}

    HeadQuarter(int color, int strength, int warriorStrength[])
    {
        // 初始化
        this->color = colorName[color];
        this->count = 0;
        this->strength = strength;
        this->factory = new WarriorFactory();
        this->minStrength = INT8_MAX;
        this->endFlag = false;
        memcpy(this->warriorStrength, warriorStrength, sizeof(int) * warriorTypeNumber);
        memset(warriorAmount, 0, sizeof(warriorAmount));

        // 确定制造顺序
        memcpy(this->order, warriorCreateOrder[color], sizeof(int) * warriorTypeNumber);

        // 确定所需最小生命元
        for (int i = 0; i < warriorTypeNumber; i++)
        {
            if (warriorStrength[i] < minStrength)
                minStrength = warriorStrength[i];
        }
    }

    virtual ~HeadQuarter()
    {
        delete factory;
    }

    bool getEndFlag()
    {
        return this->endFlag;
    }

    void createWarrior(int time)
    {
        // 如果不能生产武士，则返回
        if (!beProduced())
        {
            // 判断是否已经输出停止信息
            if (!endFlag)
            {
                printf("%03d %s headquarter stops making warriors\n", time, this->color.c_str());
                endFlag = true;
            }
            return;
        }

        // 按照序号找到第一个能生产的武士
        while (true)
        {
            // 确定制造武士的类型
            int type = order[count];

            // 制造当前序号武士所需要的生命元
            int strengthNeed = warriorStrength[type];

            // 当前序号武士能制造
            if (strengthNeed <= this->strength)
            {
                Warrior *warrior = factory->createWarrior(type, strengthNeed, 0);
                warriorAmount[type]++;

                // 输出制造信息
                printf("%03d %s %s %d born with strength %d,%d %s in %s headquarter\n",
                       time, this->color.c_str(), warriorName[type].c_str(), warrior->getNumber(),
                       warrior->getStrength(), warriorAmount[type], warriorName[type].c_str(), this->color.c_str());

                this->strength -= strengthNeed;

                // 制造成功序号加一
                count = (count + 1) % warriorTypeNumber;

                // 释放内存
                delete warrior;

                break;
            }

            // 当前序号武士不能被制造，尝试制造下一个序号的武士
            else
            {
                count = (count + 1) % warriorTypeNumber;
            }
        }
    }
};

string HeadQuarter::colorName[colorTypeNumber] = {"red", "blue"};
string HeadQuarter::warriorName[warriorTypeNumber] = {"dragon", "ninja", "iceman", "lion", "wolf"};
int HeadQuarter::warriorCreateOrder[colorTypeNumber][warriorTypeNumber] = {{iceman, lion, wolf, ninja, dragon}, {lion, dragon, ninja, iceman, wolf}};

int main()
{
    int n;
    int strength;
    int warriorStrength[warriorTypeNumber];

    scanf("%d", &n);

    int count = n;

    while (count--)
    {
        scanf("%d", &strength);
        for (int i = 0; i < warriorTypeNumber; i++)
        {
            scanf("%d", &warriorStrength[i]);
        }

        int time = 0;
        HeadQuarter redHeadQuarter(red, strength, warriorStrength);
        HeadQuarter blueHeadQuarter(blue, strength, warriorStrength);

        printf("Case:%d\n", n - count);
        while (!redHeadQuarter.getEndFlag() || !blueHeadQuarter.getEndFlag())
        {
            redHeadQuarter.createWarrior(time);
            blueHeadQuarter.createWarrior(time);
            time++;
        }
    }

    return 0;
}