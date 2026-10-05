#include"Meriam.cpp"
using namespace std;

// membuat class Rudal sebagai child dari Weaponery
class Rudal : public Weaponery{
    private:
    string tipePemandu;
    string sasaran;

    public:
    Rudal(){} // constructor kosong

    // constructor
    Rudal(string id, string nama, int damage, string tipePemandu, string sasaran){
        this->setId(id);
        this->setNama(nama);
        this->setDamage(damage);
        this->tipePemandu = tipePemandu;
        this->sasaran = sasaran;
    }

    // getter dan setter tiap attribut
    string getTipePemandu(){
        return tipePemandu;
    }
    void setTipePemandu(string tipePemandu){
        this->tipePemandu = tipePemandu;
    }

    string getSasaran(){
        return sasaran;
    }
    void setSasaran(string sasaran){
        this->sasaran = sasaran;
    }

    ~Rudal(){}
};