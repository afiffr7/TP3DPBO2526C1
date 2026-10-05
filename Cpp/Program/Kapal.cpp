#include"MesinKapal.cpp"
using namespace std;

// Membuat class Kapal
class Kapal{
    private:
    string id;
    string nama;
    string jenis;
    MesinKapal mesin; // komposisi dengan mesin
    vector<Weaponery*> listWeapon; // aggregasi dengan weapon

    public:
    Kapal(){}; // constructor kosong

    // constructor
    Kapal(string id, string nama, string jenis, string idMesin, string namaMesin, string tipeMesin, vector<Weaponery*> listWeapon){
        this->id = id;
        this->nama = nama;
        this->jenis = jenis;
        this->mesin = MesinKapal(idMesin, namaMesin, tipeMesin);
        this->listWeapon = listWeapon;
    }

    // getter dan setter masing-masing attribut
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

    // khusus mesin tidak memiliki setter karena merupakan komposisi dari kapal
    MesinKapal getMesin(){
        return mesin;
    }

    vector<Weaponery*> getListWeapon(){
        return listWeapon;
    }
    void setListWeapon(vector<Weaponery*> listWeapon){
        this->listWeapon = listWeapon;
    }
    // method untuk menambahkan weapon ke list
    void addWeapon(Weaponery* weapon){
        listWeapon.push_back(weapon);
    }

    ~Kapal(){} // destructor
};
