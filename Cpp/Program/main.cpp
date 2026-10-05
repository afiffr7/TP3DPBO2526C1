#include"Kapal.cpp" // akhir dari rangkaian include
using namespace std;

int main(){
    // inisialiasi list of object
    vector<Meriam> listMeriam;
    vector<Rudal> listRudal;
    vector<Kapal> listKapal;

    // menambahkan data secara hardcode
    listMeriam.emplace_back("WEP-001", "5-inch/38 caliber Dual Purpose Gun", 250, 127.0);
    listMeriam.emplace_back("WEP-002", "38 cm/52 SK C/34 Naval Gun", 850, 380.0);
    listMeriam.emplace_back("WEP-003", "BL 6-inch Mk XXIII Gun", 450, 152.4);

    listRudal.emplace_back("WEP-101", "RIM-7 Sea Sparrow", 500, "Semi-Active Radar", "Udara");
    listRudal.emplace_back("WEP-102", "Hs 293 Guided Missile", 750, "Radio Command", "Kapal Permukaan");
    listRudal.emplace_back("WEP-103", "Sea Cat Missile", 400, "Optical Line-of-Sight", "Udara");

    listKapal.emplace_back("SHP-001", "USS Enterprise", "Aircraft Carrier", "ENG-001", "Westinghouse Geared Steam Turbines", "Turbin Uap", vector<Weaponery*>{&listMeriam[0]});
    listKapal.emplace_back("SHP-002", "KMS Bismarck", "BattleShip", "ENG-002", "Blohm & Voss Geared Steam Turbines", "Turbin Uap", vector<Weaponery*>{&listMeriam[1]});
    listKapal.emplace_back("SHP-003", "HMS Belfast", "Light Cruiser", "ENG-003", "Parsons Geared Steam Turbines", "Turbin Uap", vector<Weaponery*>{&listMeriam[2]});

    // list of Weaponery dapat berisi Rudal dan Meriam sebagai child dari Weaponery
    listKapal[0].addWeapon(&listRudal[0]);
    listKapal[1].addWeapon(&listRudal[1]);
    listKapal[2].addWeapon(&listRudal[2]);

    cout<<"<=== List kapal ===>\n\n";
    // output data kapal
    for(Kapal kapal : listKapal){
        cout<<kapal.getId()<<" - "<<kapal.getNama()<<endl;
        cout<<"Jenis: "<<kapal.getJenis()<<endl;
        cout<<"Mesin Kapal\n";
        cout<<"    IdMesin: "<<kapal.getMesin().getId()<<endl;
        cout<<"    NamaMesin: "<<kapal.getMesin().getNama()<<endl;
        cout<<"    TipeMesin: "<<kapal.getMesin().getTipe()<<endl;
        cout<<"Persenjataan\n";

        for(Weaponery* weapon : kapal.getListWeapon()){ // output list weapon
            cout<<"- IdWeapon: "<<weapon->getId()<<endl;
            cout<<"    Nama: "<<weapon->getNama()<<endl;
            cout<<"    Damage: "<<weapon->getDamage()<<endl;
            // menggunakan dynamic_cas pada instance weapon untuk cek class apa
            if(Meriam* meriam = dynamic_cast<Meriam*>(weapon)){
                cout<<"    Kaliber: ";
                cout<<fixed<<setprecision(1)<<meriam->getKaliber();
                cout<<endl;
            }else if(Rudal* rudal = dynamic_cast<Rudal*>(weapon)){
                cout<<"    Tipe Pemandu: "<<rudal->getTipePemandu()<<endl;
                cout<<"    Sasaran: "<<rudal->getSasaran()<<endl;
            }
        }
        cout<<endl;
    }

    return 0;
}
