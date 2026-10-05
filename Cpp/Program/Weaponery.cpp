#include<bits/stdc++.h>
using namespace std;

// Membuat class Weaponery
class Weaponery{
    private:
    string id;
    string nama;
    int damage;

    public:
    Weaponery(){} // constructor kosong

    // constructor
    Weaponery(string id, string nama, int damage){
        this->id = id;
        this->nama = nama;
        this->damage = damage;
    }

    // getter dan setter tiap attribut
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

    // menggunakan virtual destructor agar dapat memindahkan pointer ke child nya (gatau katanya suruh gini)
    virtual ~Weaponery(){}
};