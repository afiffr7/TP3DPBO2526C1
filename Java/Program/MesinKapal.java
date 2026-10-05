package Program;

// Membuat class MesinKapal
public class MesinKapal {
    private String id;
    private String nama;
    private String tipe;

    // constructor
    public MesinKapal(String id, String nama, String tipe) {
        this.id = id;
        this.nama = nama;
        this.tipe = tipe;
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

    public String getTipe() {
        return tipe;
    }

    public void setTipe(String tipe) {
        this.tipe = tipe;
    }
}
