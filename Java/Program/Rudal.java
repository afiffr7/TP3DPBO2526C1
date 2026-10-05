package Program;

// membuat class Rudal sebagai child dari Weaponery
public class Rudal extends Weaponery {
    private String tipePemandu;
    private String sasaran;

    // constructor
    public Rudal(String id, String nama, int damage, String tipePemandu, String sasaran) {
        super(id, nama, damage);
        this.tipePemandu = tipePemandu;
        this.sasaran = sasaran;
    }

    // getter dan setter tiap attribut
    public String getTipePemandu() {
        return tipePemandu;
    }

    public void setTipePemandu(String tipePemandu) {
        this.tipePemandu = tipePemandu;
    }

    public String getSasaran() {
        return sasaran;
    }

    public void setSasaran(String sasaran) {
        this.sasaran = sasaran;
    }
}
