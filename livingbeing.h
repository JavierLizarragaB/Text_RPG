#ifndef livingbeing_h
#define livingbeing_h

class LivingBeing{
    protected:
        string m_Name;
        string m_Area;
        double m_HP;
        int m_MaxHP;
        int m_Xp;
        int m_Dmg;
        int m_Def;
        int m_Gold;
        string m_Efect;
        vector <string> m_Abilities;
    public:
        LivingBeing();
        LivingBeing(string, string, int, int, int, int, int, string);
        virtual void setName(string);
        virtual void setArea(string);
        virtual void setHP(double);
        virtual void setMaxHP(int);
        virtual void setXp(int);
        virtual void setDmg(int);
        virtual void setDef(int);
        virtual void setGold(int);
        virtual void setEfect(string);
        virtual void setAbilities(string);
        virtual string getName();
        virtual string getArea();
        virtual double getHP();
        virtual int getMaxHP();
        virtual int getXp();
        virtual int getDmg();
        virtual int getDef();
        virtual int getGold();
        virtual string getEfect();
        virtual vector<string> getAbilities();
};
LivingBeing::LivingBeing(){
    m_Name = "Jhon Doe";
    m_Area = "The Limbo";
    m_MaxHP = 100;
    m_HP=m_MaxHP;
    m_Xp = 1;
    m_Dmg = 8;
    m_Def = 10;
    m_Gold = 0;
    m_Efect = "None";
    m_Abilities.push_back("Hug");
};
LivingBeing::LivingBeing(string Name, string Area, int MaxHP, int Xp, int Dmg, int Def, int Gold, string Ability){
    setName(Name);
    setArea(Area);
    setMaxHP(MaxHP);
    double HP = MaxHP;
    setHP(HP);
    setXp(Xp);
    setDmg(Dmg);
    setDef(Def);
    setGold(Gold);
    setAbilities(Ability);
};

void LivingBeing::setName(string Name){
    m_Name = Name;
};
void LivingBeing::setArea(string Area){
    m_Area = Area;
};
void LivingBeing:: setHP(double HP){
    m_HP = HP;
};
void LivingBeing::setMaxHP(int MaxHP){
    m_MaxHP = MaxHP;
};
void LivingBeing::setXp(int Xp){
    m_Xp = Xp;
};
void LivingBeing::setDmg(int Dmg){
    m_Dmg = Dmg;
};
void LivingBeing::setDef(int Def){
    m_Def = Def;
};
void LivingBeing::setGold(int Gold){
    m_Gold = Gold;
};
void LivingBeing::setEfect(string Efect){
    m_Efect = Efect;
};
void LivingBeing::setAbilities(string Ability){
    m_Abilities.push_back(Ability);
};
string LivingBeing::getName(){
    return m_Name;
};
string LivingBeing::getArea(){
    return m_Area;
};
double LivingBeing::getHP(){
    return m_HP;
};
int LivingBeing::getMaxHP(){
    return m_MaxHP;
};
int LivingBeing::getXp(){
    return m_Xp;
};
int LivingBeing::getDmg(){
    return m_Dmg;
};
int LivingBeing::getDef(){
    return m_Def;
};
int LivingBeing::getGold(){
    return m_Gold;
};
string LivingBeing::getEfect(){
    return m_Efect;
};
vector<string> LivingBeing::getAbilities(){
    return m_Abilities;
};

#endif