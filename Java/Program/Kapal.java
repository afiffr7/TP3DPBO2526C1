package Program;

import java.util.List;

// Membuat class Kapal
public class Kapal {
    private String id;
    private String nama;
    private String jenis;
    private MesinKapal mesin; // berkomposisi dengan mesin
    private List<Weaponery> listWeapon; // beragregasi dengan weaponery

    // constructor
    public Kapal(String id, String nama, String jenis, String idMesin, String namaMesin, String tipeMesin, List<Weaponery> listWeapon) {
        this.id = id;
        this.nama = nama;
        this.jenis = jenis;
        this.mesin = new MesinKapal(idMesin, namaMesin, tipeMesin);
        this.listWeapon = listWeapon;
    }

    // getter dan setter tiap attribut
    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getJenis() {
        return jenis;
    }

    public void setJenis(String jenis) {
        this.jenis = jenis;
    }

    // Khusus mesin tidak memiliki setter karena merupakan komposisi atau bagian dari instance
    public MesinKapal getMesin() {
        return mesin;
    }

    public List<Weaponery> getListWeapon() {
        return listWeapon;
    }

    public void setListWeapon(List<Weaponery> listWeapon) {
        this.listWeapon = listWeapon;
    }

    // method untuk menambahkan weapon ke listWeapon
    public void addWeapon(Weaponery weapon) {
        listWeapon.add(weapon);
    }
}
