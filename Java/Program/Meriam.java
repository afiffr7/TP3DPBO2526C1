public class Meriam extends Weaponery {
    private double kaliber;

    public Meriam(String id, String nama, int damage, double kaliber) {
        super(id, nama, damage);
        this.kaliber = kaliber;
    }

    public double getKaliber() {
        return kaliber;
    }

    public void setKaliber(double kaliber) {
        this.kaliber = kaliber;
    }
}
