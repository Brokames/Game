#ifndef _ENTITY_H
#define _ENTITY_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Entity {
public:
    Entity(const string&);  //initializes name for character
    string GetName() const;
    int GetHP();
    int GetMP();
    int GetStr();
    int GetSpd();
    int GetIntel();
    int GetAccuracy();
    int GetDef();
protected:
    int MaxHP, MaxMP, Str, Def, Spd, Intel, Accuracy; //stats for characters
private:
    string Name;
};

class Playable: public Entity{
public:
    Playable(int, int, int, int, int, int, int, int, int, int, Item, Item, Item, const string&);  //initializes characters stats (HP, MP, Str (strength), Spd (speed), Intel(intelligence), Accuracy.
                                                                                // Also sets the Exp of the character along with their base inventory space
    Item GetArmor();
    Item GetOnHand();
    Item GetOffHand();
protected:
    Vector<Item*> Inventory(5); //heterogeneous list to point to items in characters inventory
    Item Armor, OnHand, OffHand;
    int AbilityList[4];
private:
    int CurrExp, MaxExp, InvSpace, Level;  //CurrExp stores how much exp the characrter currently has, MaxExp stores The exp needed to level up, 
                                           //,InvSpace stores the current inventory space and Level stores the characters current level
};

class Warrior: public Playable{
  public:
  private:
};

class Mage: public Playable{
  public:
  private:
};

class Rogue: public Playable{
  public:
  private:
};

class NonPlayable: public Entity{
public:
    NonPlayable(int, const string&);
protected:
private:
};

class NonHostile: public NonPlayable{
public:
private:
};

class Hostile: public NonPlayable{
public:
private:  
};

#endif
