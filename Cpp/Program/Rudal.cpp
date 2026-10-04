#include"Meriam.cpp"
using namespace std;

class Rudal : public Weaponery{
    private:
    string tipePemandu;
    string sasaran;

    public:
    Rudal(){}

    Rudal(string id, string nama, int damage, string tipePemandu, string sasaran){
        this->setId(id);
        this->setNama(nama);
        this->setDamage(damage);
        this->tipePemandu = tipePemandu;
        this->sasaran = sasaran;
    }

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