#include"Weaponery.cpp"
using namespace std;

class Meriam : public Weaponery{
    private:
    double kaliber;

    public:
    Meriam(){}

    Meriam(string id, string nama, int damage, double kaliber){
        this->setId(id);
        this->setNama(nama);
        this->setDamage(damage);
        this->kaliber = kaliber;
    }

    double getKaliber(){
        return kaliber;
    }
    void setKaliber(double kaliber){
        this->kaliber = kaliber;
    }

    ~Meriam(){}
};