#include"MesinKapal.cpp"
using namespace std;

class Kapal{
    private:
    string id;
    string nama;
    string jenis;
    MesinKapal mesin;
    vector<Weaponery*> listWeapon;

    public:
    Kapal(){};

    Kapal(string id, string nama, string jenis, string idMesin, string namaMesin, string tipeMesin, vector<Weaponery*> listWeapon){
        this->id = id;
        this->nama = nama;
        this->jenis = jenis;
        this->mesin = MesinKapal(idMesin, namaMesin, tipeMesin);
        this->listWeapon = listWeapon;
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

    string getJenis(){
        return jenis;
    }
    void setJenis(string jenis){
        this->jenis = jenis;
    }

    MesinKapal getMesin(){
        return mesin;
    }

    vector<Weaponery*> getListWeapon(){
        return listWeapon;
    }
    void setListWeapon(vector<Weaponery*> listWeapon){
        this->listWeapon = listWeapon;
    }
    void addWeapon(Weaponery* weapon){
        listWeapon.push_back(weapon);
    }

    ~Kapal(){}
};
