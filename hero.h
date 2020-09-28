#include "livingbeing.h"

class Hero: public LivingBeing{
    private:
        int m_Skills[4]; //Strength, Perception, Charisma, Inteligence
        int m_SlotsInv;
        vector<string> m_Inventory;
        int m_Lvl;
        int m_NextLvl;
        string m_Dfclt;
    public:
        Hero();
        Hero(string, string, int, int, int, int, int, string, int, int, int);
        void setSkills(int*);
        void setSlotsInv(int);
        void setSlotsPow(int);
        void setInventory(string);
        void setDifficulty(string);
        void setLvl(int);
        void setNextLvl(int);
        string getDifficulty();
        int* getSkills();
        int getSlotsInv();
        int getSlotsPow();
        vector<string> getInventory();
        int getLvl();
        int getNextLvl();
        void displayBattleStats();
};

Hero::Hero():LivingBeing(){
    m_SlotsInv = 3;
    m_Inventory.push_back("Fist");
    m_Lvl = 1;
    m_NextLvl = 100;
    m_Dfclt = "Lost Hero";
};
Hero::Hero(string Name, string Area, int MaxHP, int Xp, int Dmg, int Def, int Gold, string Ability, int SlotsInv, int Lvl, int NextLvl):LivingBeing(Name, Area, MaxHP, Xp, Dmg, Def, Gold, Ability){ 
            setSlotsInv(SlotsInv);
            setLvl(Lvl);
            setNextLvl(NextLvl);
};
void Hero::setSkills(int* Skills){ 
    m_Skills[0] = Skills[0];
    m_Skills[1] = Skills[1];
    m_Skills[2] = Skills[2];
    m_Skills[3] = Skills[3];
};
void Hero::setSlotsInv(int SlotsInv){
    m_SlotsInv = SlotsInv;
};
void Hero::setInventory(string ItemInHand){
    m_Inventory.emplace(m_Inventory.begin(), ItemInHand);
};
void Hero::setDifficulty(string Dfclt){
    m_Dfclt = Dfclt;
};
void Hero::setLvl(int Lvl){
    m_Lvl = Lvl;
};
void Hero::setNextLvl(int NextLvl){
    m_NextLvl = NextLvl;
};
string Hero::getDifficulty(){
    return m_Dfclt;
};
int* Hero::getSkills(){
    return m_Skills;
};
int Hero::getSlotsInv(){
    return m_SlotsInv;
};
vector<string> Hero::getInventory(){
    return m_Inventory;
};
int Hero::getLvl(){
    return m_Lvl;
};
int Hero::getNextLvl(){
    return m_NextLvl;
};
