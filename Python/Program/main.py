from Rudal import Rudal
from Meriam import Meriam
from Kapal import Kapal

# inisialisasi list of object
listMeriam = []
listRudal = []
listKapal = []

# menambahkan data secara hardcode
listMeriam.append(Meriam("WEP-001", "5-inch/38 caliber Dual Purpose Gun", 250, 127.0))
listMeriam.append(Meriam("WEP-002", "38 cm/52 SK C/34 Naval Gun", 850, 380.0))
listMeriam.append(Meriam("WEP-003", "BL 6-inch Mk XXIII Gun", 450, 152.4))

listRudal.append(Rudal("WEP-101", "RIM-7 Sea Sparrow", 500, "Semi-Active Radar", "Udara"))
listRudal.append(Rudal("WEP-102", "Hs 293 Guided Missile", 750, "Radio Command", "Kapal Permukaan"))
listRudal.append(Rudal("WEP-103", "Sea Cat Missile", 400, "Optical Line-of-Sight", "Udara"))

listKapal.append(Kapal("SHP-001", "USS Enterprise", "Aircraft Carrier", "ENG-001", "Westinghouse Geared Steam Turbines", "Turbin Uap", [listMeriam[0]]))
listKapal.append(Kapal("SHP-002", "KMS Bismarck", "BattleShip", "ENG-002", "Blohm & Voss Geared Steam Turbines", "Turbin Uap", [listMeriam[1]]))
listKapal.append(Kapal("SHP-003", "HMS Belfast", "Light Cruiser", "ENG-003", "Parsons Geared Steam Turbines", "Turbin Uap", [listMeriam[2]]))

listKapal[0].addWeapon(listRudal[0])
listKapal[1].addWeapon(listRudal[1])
listKapal[2].addWeapon(listRudal[2])

print("<=== List kapal ===>\n")
for kapal in listKapal: # print list kapal
    print(f"{kapal.getId()} - {kapal.getNama()}")
    print(f"Jenis: {kapal.getJenis()}")
    print("Mesin Kapal")
    print(f"    IdMesin: {kapal.getMesin().getId()}")
    print(f"    NamaMesin: {kapal.getMesin().getNama()}")
    print(f"    TipeMesin: {kapal.getMesin().getTipe()}")
    print("Persenjataan")
    for weapon in kapal.getListWeapon():
        print(f"- IdWeapon: {weapon.getId()}")
        print(f"    Nama: {weapon.getNama()}")
        print(f"    Damage: {weapon.getDamage()}")
        if isinstance(weapon, Meriam): # cek instance child Weaponery untuk print sesuai attributnya
            print(f"    Kaliber: {weapon.getKaliber()}")
        elif isinstance(weapon, Rudal):
            print(f"    Tipe Pemandu: {weapon.getTipePemandu()}")
            print(f"    Sasaran: {weapon.getSasaran()}")
    print()