#include<bits/stdc++.h>
using namespace std;

class Weaponery{
    private:
    string id;
    string nama;
    int damage;

    public:
    Weaponery(){}

    Weaponery(string id, string nama, int damage){
        this->id = id;
        this->nama = nama;
        this->damage = damage;
    }

    string getId(){
        return id;
    }
    void setId(string id){
        this->id = id;
    }

    string getNama(){
        return nama;
    }
    void setNama(string nama){
        this->nama = nama;
    }

    int getDamage(){
        return damage;
    }
    void setDamage(int damage){
        this->damage = damage;
    }

    virtual ~Weaponery(){}
};