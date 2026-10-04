#include"Rudal.cpp"
using namespace std;

class MesinKapal{
    private:
    string id;
    string nama;
    string tipe;

    public:
    MesinKapal(){}

    MesinKapal(string id, string nama, string tipe){
        this->id = id;
        this->nama = nama;
        this->tipe = tipe;
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

    string getTipe(){
        return tipe;
    }
    void setTipe(string tipe){
        this->tipe = tipe;
    }

    ~MesinKapal(){}
};