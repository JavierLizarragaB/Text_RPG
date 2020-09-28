#include "livingbeing.h"

class Mob: public LivingBeing{
    private:
        string m_InHand;
        int m_Stage;
    public:
        Mob();
        Mob(string, string, int, int, int, int, int, string, string, int);
        void setInHand(string);
        void setStage(int);
        string getInHand();
        int getStage();
};
Mob::Mob():LivingBeing(){
    m_InHand = "Hand";
    m_Stage = 1;
};
Mob::Mob(string Name, string Area, int MaxHP, int Xp, int Dmg, int Def, int Gold, string Ability, string InHand, int Stage):LivingBeing(Name, Area, MaxHP, Xp, Dmg, Def, Gold, Ability){ 
    setStage(Stage);
    setInHand(InHand);
};
void Mob::setInHand(string InHand){
    m_InHand = InHand;
};
void Mob::setStage(int Stage){
    m_Stage = Stage;
};
string Mob::getInHand(){
    return m_InHand;
};
int Mob::getStage(){
    return m_Stage;
};
