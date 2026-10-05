#include"Weaponery.cpp"
using namespace std;

// membuat class Meriam sebagai child dari Weaponery
class Meriam : public Weaponery{
    private:
    double kaliber;

    public:
    Meriam(){} // constructor kosong

    // constructor
    Meriam(string id, string nama, int damage, double kaliber){
        this->setId(id);
        this->setNama(nama);
        this->setDamage(damage);
        this->kaliber = kaliber;
    }

    // getter dan setter attribut
    double getKaliber(){
        return kaliber;
    }
    void setKaliber(double kaliber){
        this->kaliber = kaliber;
    }

    ~Meriam(){} // destructor
};