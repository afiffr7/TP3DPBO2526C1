import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Meriam> listMeriam = new ArrayList<>();
        List<Rudal> listRudal = new ArrayList<>();
        List<Kapal> listKapal = new ArrayList<>();

        listMeriam.add(new Meriam("WEP-001", "5-inch/38 caliber Dual Purpose Gun", 250, 127.0));
        listMeriam.add(new Meriam("WEP-002", "38 cm/52 SK C/34 Naval Gun", 850, 380.0));
        listMeriam.add(new Meriam("WEP-003", "BL 6-inch Mk XXIII Gun", 450, 152.4));

        listRudal.add(new Rudal("WEP-101", "RIM-7 Sea Sparrow", 500, "Semi-Active Radar", "Udara"));
        listRudal.add(new Rudal("WEP-102", "Hs 293 Guided Missile", 750, "Radio Command", "Kapal Permukaan"));
        listRudal.add(new Rudal("WEP-103", "Sea Cat Missile", 400, "Optical Line-of-Sight", "Udara"));

        listKapal.add(new Kapal("SHP-001", "USS Enterprise", "Aircraft Carrier", "ENG-001", "Westinghouse Geared Steam Turbines", "Turbin Uap", new ArrayList<Weaponery>(Arrays.<Weaponery>asList(listMeriam.get(0)))));
        listKapal.add(new Kapal("SHP-002", "KMS Bismarck", "BattleShip", "ENG-002", "Blohm & Voss Geared Steam Turbines", "Turbin Uap", new ArrayList<Weaponery>(Arrays.<Weaponery>asList(listMeriam.get(1)))));
        listKapal.add(new Kapal("SHP-003", "HMS Belfast", "Light Cruiser", "ENG-003", "Parsons Geared Steam Turbines", "Turbin Uap", new ArrayList<Weaponery>(Arrays.<Weaponery>asList(listMeriam.get(2)))));

        listKapal.get(0).addWeapon(listRudal.get(0));
        listKapal.get(1).addWeapon(listRudal.get(1));
        listKapal.get(2).addWeapon(listRudal.get(2));

        System.out.println("<=== List kapal ===>\n");
        for (Kapal kapal : listKapal) {
            System.out.println(kapal.getId() + " - " + kapal.getNama());
            System.out.println("Jenis: " + kapal.getJenis());
            System.out.println("Mesin Kapal");
            System.out.println("    IdMesin: " + kapal.getMesin().getId());
            System.out.println("    NamaMesin: " + kapal.getMesin().getNama());
            System.out.println("    TipeMesin: " + kapal.getMesin().getTipe());
            System.out.println("Persenjataan");

            for (Weaponery weapon : kapal.getListWeapon()) {
                System.out.println("- IdWeapon: " + weapon.getId());
                System.out.println("    Nama: " + weapon.getNama());
                System.out.println("    Damage: " + weapon.getDamage());
                if (weapon instanceof Meriam) {
                    System.out.println("    Kaliber: " + ((Meriam) weapon).getKaliber());
                } else if (weapon instanceof Rudal) {
                    Rudal rudal = (Rudal) weapon;
                    System.out.println("    Tipe Pemandu: " + rudal.getTipePemandu());
                    System.out.println("    Sasaran: " + rudal.getSasaran());
                }
            }
            System.out.println();
        }
    }
}
