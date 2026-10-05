package Program;

// Membuat class Meriam sebagai child dari Weaponery
public class Meriam extends Weaponery {
    private double kaliber;

    // constructor
    public Meriam(String id, String nama, int damage, double kaliber) {
        super(id, nama, damage);
        this.kaliber = kaliber;
    }

    // getter dan setter attribut
    public double getKaliber() {
        return kaliber;
    }

    public void setKaliber(double kaliber) {
        this.kaliber = kaliber;
    }
}
