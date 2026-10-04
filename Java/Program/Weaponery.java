public class Weaponery {
    private String id;
    private String nama;
    private int damage;

    public Weaponery(String id, String nama, int damage) {
        this.id = id;
        this.nama = nama;
        this.damage = damage;
    }

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

    public int getDamage() {
        return damage;
    }

    public void setDamage(int damage) {
        this.damage = damage;
    }
}
