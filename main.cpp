#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

#include "hero.h"
#include "mob.h"
#include "Dado.h"

void CharacterCreation(Hero *You, CDado *Random){
    cout<<"Whats your name? ";
    string Name;
    cin>>Name;
    system("cls");
    int Skills[4];
    int select = 1;
    while (true){
        cout<<endl<<"Whats your style? "<<endl;
        if (select == 1){
            cout<<"Strenght              <<---"<<endl;
            cout<<"Inteligence                "<<endl;
            cout<<"Perception                 "<<endl;
            cout<<"Charisma                   "<<endl;
            Skills[0] = 9;
            Skills[1] = 6;
            Skills[2] = 4;
            Skills[3] = 6;
            cout<<endl<<"Skills: "<<"Strenght:     "<<Skills[0]<<endl;
            cout<<"        Perception:   "<<Skills[1]<<endl;
            cout<<"        Charisma:     "<<Skills[2]<<endl;
            cout<<"        Intelligence: "<<Skills[3]<<endl;
        } else if(select == 2){
            cout<<"Strenght                   "<<endl;
            cout<<"Inteligence           <<---"<<endl;
            cout<<"Perception                 "<<endl;
            cout<<"Charisma                   "<<endl;
            Skills[0] = 4;
            Skills[1] = 7;
            Skills[2] = 5;
            Skills[3] = 9;
            cout<<endl<<"Skills: "<<"Strenght:     "<<Skills[0]<<endl;
            cout<<"        Perception:   "<<Skills[1]<<endl;
            cout<<"        Charisma:     "<<Skills[2]<<endl;
            cout<<"        Intelligence: "<<Skills[3]<<endl;
        } else if(select == 3){
            cout<<"Strenght                   "<<endl;
            cout<<"Inteligence                "<<endl;
            cout<<"Perception            <<---"<<endl;
            cout<<"Charisma                   "<<endl;
            Skills[0] = 5;
            Skills[1] = 9;
            Skills[2] = 5;
            Skills[3] = 6;
            cout<<endl<<"Skills: "<<"Strenght:     "<<Skills[0]<<endl;
            cout<<"        Perception:   "<<Skills[1]<<endl;
            cout<<"        Charisma:     "<<Skills[2]<<endl;
            cout<<"        Intelligence: "<<Skills[3]<<endl;
        } else if(select == 4){
            cout<<"Strenght                   "<<endl;
            cout<<"Inteligence                "<<endl;
            cout<<"Perception                 "<<endl;
            cout<<"Charisma              <<---"<<endl;
            Skills[0] = 4;
            Skills[1] = 6;
            Skills[2] = 9;
            Skills[3] = 6;
            cout<<endl<<"Skills: "<<"Strenght:     "<<Skills[0]<<endl;
            cout<<"        Perception:   "<<Skills[1]<<endl;
            cout<<"        Charisma:     "<<Skills[2]<<endl;
            cout<<"        Intelligence: "<<Skills[3]<<endl;
        } else if(select == 5){
            select = 1;
            cout<<"Strenght              <<---"<<endl;
            cout<<"Inteligence                "<<endl;
            cout<<"Perception                 "<<endl;
            cout<<"Charisma                   "<<endl;
            Skills[0] = 9;
            Skills[1] = 6;
            Skills[2] = 4;
            Skills[3] = 6;
            cout<<endl<<"Skills: "<<"Strenght:     "<<Skills[0]<<endl;
            cout<<"        Perception:   "<<Skills[1]<<endl;
            cout<<"        Charisma:     "<<Skills[2]<<endl;
            cout<<"        Intelligence: "<<Skills[3]<<endl;
        } else if(select == 0){
            select = 4;
            cout<<"Strenght                   "<<endl;
            cout<<"Inteligence                "<<endl;
            cout<<"Perception                 "<<endl;
            cout<<"Charisma              <<---"<<endl;
            Skills[0] = 4;
            Skills[1] = 6;
            Skills[2] = 9;
            Skills[3] = 6;
            cout<<endl<<"Skills: "<<"Strenght:     "<<Skills[0]<<endl;
            cout<<"        Perception:   "<<Skills[1]<<endl;
            cout<<"        Charisma:     "<<Skills[2]<<endl;
            cout<<"        Intelligence: "<<Skills[3]<<endl;
        };
        
        char Key = _getch();
        if (Key == 'w'){
            select = select - 1;
        } else if (Key == 's'){
            select = select + 1;
        } else if(Key != 'w' and Key != 's' and Key != ' '){
            select = select;
        }else if (Key == ' ' ){
            break;
        };
        system("cls");
    };
    system("cls");
    select = 1;
    string Difficulty;
    while (true){
        cout<<endl<<"Who are you? "<<endl;
        if (select == 1){
            cout<<"Hobo                               <<---"<<endl;
            cout<<"Wanderer                                "<<endl;
            cout<<"Lost Hero                               "<<endl;
            cout<<"Heir                                    "<<endl;
            cout<<endl<<"Difficulty: Easy                        "<<endl;
            Difficulty="Hobo";
        } else if(select == 2){
            cout<<"Hobo                                    "<<endl;
            cout<<"Wanderer                           <<---"<<endl;
            cout<<"Lost Hero                               "<<endl;
            cout<<"Heir                                    "<<endl;
            cout<<endl<<"Difficulty: Medium                      "<<endl;
            Difficulty="Wanderer";
        } else if(select == 3){
            cout<<"Hobo                                    "<<endl;
            cout<<"Wanderer                                "<<endl;
            cout<<"Lost Hero                          <<---"<<endl;
            cout<<"Heir                                    "<<endl;
            cout<<endl<<"Difficulty: Hard                        "<<endl;
            Difficulty="Lost Hero";
        } else if(select == 4){
            cout<<"Hobo                                    "<<endl;
            cout<<"Wanderer                                "<<endl;
            cout<<"Lost Hero                               "<<endl;
            cout<<"Heir                               <<---"<<endl;
            cout<<endl<<"Difficulty: Impossible                  "<<endl;
            Difficulty="Heir";
        } else if(select == 5){
            select = 1;
            cout<<"Hobo                               <<---"<<endl;
            cout<<"Wanderer                                "<<endl;
            cout<<"Lost Hero                               "<<endl;
            cout<<"Heir                                    "<<endl;
            cout<<endl<<"Difficulty: Easy                        "<<endl;
            Difficulty="Hobo";
        } else if(select == 0){
            select = 4;
            cout<<"Hobo                                    "<<endl;
            cout<<"Wanderer                                "<<endl;
            cout<<"Lost Hero                               "<<endl;
            cout<<"Heir                               <<---"<<endl;
            cout<<endl<<"Difficulty: Impossible                  "<<endl;
            Difficulty="Heir";
        };
        char Key = _getch();
        if (Key == 'w'){
            select = select - 1;
        } else if (Key == 's'){
            select = select + 1;
        } else if(Key != 'w' and Key != 's' and Key != ' '){
            select = select;
        }else if (Key == ' '){
            break;
        };
        system("cls");
    };
    system("cls");
    You->setName(Name);
    You->setSkills(Skills);
    You->setDifficulty(Difficulty);
    You->setGold(Random->GetValorDado(70));
    You->setInventory("Fist");

};

string BarXP(Hero *You){
    int CurrentXP = You->getXp();
    int MissingXP = You->getNextLvl();
    double j = (CurrentXP / MissingXP)*50;
    double k = 50 - j;
    string Bar;
    string Load="#";
    string Space="/";
    for (int i = 0; i < j+1; i++){
        Bar=Bar+Load;
    };
    for (int i = 0; i < k; i++){
        Bar=Bar+Space;
    };
    return Bar;
};

string BarHP(LivingBeing *You){
    int CurrentHP = You->getHP();
    int MissingHP = You->getMaxHP();
    double j = (CurrentHP / MissingHP)*50;
    double k = 50 - j;
    string Bar;
    string Load="#";
    string Space="/";
    for (int i = 0; i < j+1; i++){
        Bar=Bar+Load;
    };
    for (int i = 0; i < k; i++){
        Bar=Bar+Space;
    };
    return Bar;
};

void DisplayStats(Hero *You){
    cout<<"HP: "<<You->getHP()<<"/"<<You->getMaxHP()<<" ["<<BarHP(You)<<"]"<<endl;
    cout<<"Sir "<<You->getName()<<" The "<<You->getDifficulty()<<", You currently are in "<<You->getArea()<<endl;
    cout<<"Lvl: "<<You->getLvl()<<"/ In hand: "<<You->getInventory()[0]<<"/ Gold: "<<You->getGold()<<endl;
    cout<<"XP: "<<You->getXp()<<"/"<<You->getNextLvl()<<" ["<<BarXP(You)<<"]"<<endl;
    int* Skills{You->getSkills()};
    cout<<"Skills: "<<"Strenght:     "<<Skills[0]<<endl;
    cout<<"        Perception:   "<<Skills[1]<<endl;
    cout<<"        Charisma:     "<<Skills[2]<<endl;
    cout<<"        Intelligence: "<<Skills[3]<<endl;
};

void DisplayBattleStats(Hero *You){
    cout<<You->getName()<<"/ Damage: "<<You->getDmg()<<"/ Defense: "<<You->getDef()<<endl;
    cout<<"HP: "<<You->getHP()<<"/"<<You->getMaxHP()<<" ["<<BarHP(You)<<"]"<<endl;
    cout<<"Lvl: "<<You->getLvl()<<"/ In hand: "<<You->getInventory()[0]<<"/ Gold: "<<You->getGold()<<endl;
    cout<<"XP: "<<You->getXp()<<"/"<<You->getNextLvl()<<" ["<<BarXP(You)<<"]"<<endl;
};

void DisplayBattleStats(Mob *Beast){
    cout<<Beast->getName()<<" / Damage: "<<Beast->getDmg()<<"/ Defense: "<<Beast->getDef()<<endl;
    cout<<"HP: "<<Beast->getHP()<<"/"<<Beast->getMaxHP()<<" ["<<BarHP(Beast)<<"]"<<endl;
    cout<<"Stage: "<<Beast->getStage()<<" / In hand: "<<Beast->getInHand()<<endl;
    cout<<endl;
};

void CreateMobs(Mob **Beast, Hero *You, CDado *Random, string location, int& numfBeasts){
    int level = You->getLvl();
    int difficulty;
    if(You->getDifficulty() == "Hobo"){
        difficulty = 0;
    } else if(You->getDifficulty() == "Wanderer"){
        difficulty = 1;
    } else if(You->getDifficulty() == "Lost Hero"){
        difficulty = 2;
    } else if(You->getDifficulty() == "Heir"){
        difficulty = 3;
    };

    string Name[4] = {"Slime", "Bug", "Knight", "Dragon"};
    string Area = location;
    int MaxHP[4] = {10, 30, 100, 500};
    int HP = MaxHP[0];
    int Xp[4] = {20, 50, 100, 300};
    int Dmg[4] = {8, 12, 25, 40};
    int Def[4] = {1, 8, 30, 30};
    int Gold[4] = {15, 50, 200, 1000};
    string Efect[4] = {"Regenerate", "None", "None", "Asleep"};
    string Attack = "Attack";
    string Abilitie[4] = {"Hug", "Bite", "Block", "Burn"};
    string knightDrop[3] = {"Helmet", "Big Sword", "Big Shield"};
    string Drops[4] = {"Green stuff", "Insect plates", knightDrop[Random->GetValorDado(3)], "Dragon plates"};
    string InHand[4] = {"Slime", "Claws", "Big Sword", "Tail"};
    int Stage = (level*100)/4;
    if (Stage <= 25){
        Stage = 1;
    } else if(Stage <= 50 and Stage > 25){
        Stage = 2;
    } else if(Stage > 50 and Stage <=75){
        Stage = 3;
    } else if(Stage <= 100 and Stage > 75){
        Stage = 4;
    };
    numfBeasts = Random->GetValorDado(3);
    for (int i = 0; i < numfBeasts; i++){
        Beast[i] = new Mob(Name[difficulty], Area, MaxHP[difficulty], Xp[difficulty], Dmg[difficulty], Def[difficulty], Gold[difficulty], Abilitie[difficulty], InHand[difficulty], Stage);
        Beast[i]->setAbilities(Attack);
        };
};

void Arena(Hero *You){
    system("cls");
    You->setArea("Arena");
    DisplayStats(You);
    int select  = 1;
    string Desicion;
    cout<<"Sand feels like fire at your tired feet, you hate sand..."<<endl;

    cout<<"Press [SPACE] to continue";
    while(true){
        char Key = _getch();
        if (Key == ' '){
            break;
        };
    };
    system("cls");
    DisplayStats(You);
    while(true){
        cout<<"A crowd is watching, cheering, thirsty for combat. "<<endl;
        cout<<"Are you here to satisfy them?"<<endl;
        if (select == 1){
                cout<<"Yes                               <<---"<<endl;
                cout<<"Yesn´t                                 "<<endl;
                Desicion = "Fight";
                cout<<endl<<"Desicion: "<<Desicion<<endl;
            } else if(select == 2){
                cout<<"Yes                                    "<<endl;
                cout<<"Yesn´t                            <<---"<<endl;
                Desicion = "Go back to armory";
                cout<<endl<<"Desicion: "<<Desicion<<endl;
            } else if(select == 3){
                select = 1;
                cout<<"Yes                               <<---"<<endl;
                cout<<"Yesn´t                                 "<<endl;
                Desicion = "Fight";
                cout<<endl<<"Desicion: "<<Desicion<<endl;
            } else if(select == 0){
                select = 4;
                cout<<"Yes                                    "<<endl;
                cout<<"Yesn´t                            <<---"<<endl;
                Desicion = "Go back to armory";
                cout<<endl<<"Desicion: "<<Desicion<<endl;
            };
            char Key = _getch();
            if (Key == 'w'){
                select = select - 1;
            } else if (Key == 's'){
                select = select + 1;
            } else if(Key != 'w' and Key != 's' and Key != ' '){
                select = select;
            }else if (Key == ' '){
                break;
            };
        system("cls");
        DisplayStats(You);
    };
    if (Desicion == "Go back to armory"){
        cout<<"As you turn around the exit is closed"<<endl;
    };
    cout<<"Combat is about to start"<<endl;
    cout<<"Press [SPACE] to continue";
    while(true){
        char Key = _getch();
        if (Key == ' '){
            break;
        };
    };
};

void Armory(Hero *You){
    system("cls");
    You->setArea("Armory");
    DisplayStats(You);
    int select  = 1;
    string Desicion;
    cout<<"The room is hot, just hot enough to make you feel uncomfortable."<<endl;
    cout<<"You can hear the constant and rhythmicsound of metal against metal, the sound of armor and weponds being created."<<endl;
    cout<<"An odly young man is working the steel, as you look at him his eyes don´t even boder to meet yours, "<<endl;
    cout<<"but some way you feel welcome to the place."<<endl;
    cout<<"At the other side of the room there is another man serving at the bar, a muscullar well aged man," <<endl;
    cout<<" his eyes land in you, inspecting you."<<endl;
    cout<<"Now you have the feeling you are out of place, like the thought of even interupting him will get you killed."<<endl;
    cout<<"Maybe they should consider change places."<<endl;

    cout<<"Press [SPACE] to continue";
    while(true){
        char Key = _getch();
        if (Key == ' '){
            break;
        };
    };
    system("cls");
    DisplayStats(You);
    while(true){
    cout<<"The place smells like burned coal and warm beer..."<<endl;
        cout<<""<<endl;
        if (select == 1){
                cout<<"Exit to Arena                     <<---"<<endl;
                cout<<"Talk to the shopkeeper                 "<<endl;
                Desicion = "Exit to Arena";
            } else if(select == 2){
                cout<<"Exit to Arena                          "<<endl;
                cout<<"Talk to the shopkeeper            <<---"<<endl;
                Desicion = "Talk to the shopkeeper";
            } else if(select == 3){
                select = 1;
                cout<<"Exit to Arena                     <<---"<<endl;
                cout<<"Talk to the shopkeeper                 "<<endl;
                Desicion = "Exit to Arena";
            } else if(select == 0){
                select = 4;
                cout<<"Exit to Arena                          "<<endl;
                cout<<"Talk to the shopkeeper            <<---"<<endl;
                Desicion = "Talk to the shopkeeper";
            };
            char Key = _getch();
            if (Key == 'w'){
                select = select - 1;
            } else if (Key == 's'){
                select = select + 1;
            } else if(Key != 'w' and Key != 's' and Key != ' '){
                select = select;
            }else if (Key == ' '){
                break;
            };
        system("cls");
        DisplayStats(You);
    };
    if (Desicion == "Talk to the shopkeeper"){
        cout<<"Go fight dude, the shopkeeper says"<<endl;
        You->setInventory("Sword");
        cout<<"He hands you an old sword"<<endl;
        You->setDmg(20);
    };
    cout<<"Press [SPACE] to go outside";
    while(true){
        char Key = _getch();
        if (Key == ' '){
            break;
        };
    };
    Arena(You);
};

void Battle(Hero *You, Mob **Beast, int& numfbeasts){
    while (true){
        system("cls");
        DisplayBattleStats(You);
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        for (int i = 0; i<numfbeasts;i++){
            DisplayBattleStats(Beast[i]);
        };
        cout<<endl<<"Press [SPACE] to Attack"<<endl;
        while(true){
            char Key = _getch();
            if (Key == ' '){
                break;
            };
        };
        break;
    };
};

int main(){
    CDado *Random = new CDado();
    Hero *You = new Hero();
    CharacterCreation(You, Random);
    DisplayStats(You);


    cout<<endl<<"Press [SPACE] to start"<<endl;
    while(true){
        char Key = _getch();
        if (Key == ' '){
            break;
        };
    };
    system("cls");
    Armory(You);
    int numfBeasts = 3;
    Mob *Beast[numfBeasts];
    string location = "Arena";
    CreateMobs(Beast, You, Random, location, numfBeasts);
    Battle(You, Beast, numfBeasts);


    return 0;
};