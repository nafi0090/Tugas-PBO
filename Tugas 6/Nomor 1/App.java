abstract class robot {

    protected String nama;
    protected String pemilik;
    protected int tahun;

    public void settahunpembuatan (int tahun){
        this.tahun = tahun;
    }
    public abstract void setnama ( String nama);
    public abstract void displaydata ();

}

 class Doramini extends robot{

    public Doramini(String nama, String pemilik, int tahun){
        this.nama = nama;
        this.pemilik = pemilik;
        this.tahun = tahun;
    }

    public void saydora (){
        System.out.println("Halo, Saya Dora Mini");
    }

    public void setnama (String nama){
        this.nama = nama;
    }

    public void settahunpembuatan (int tahun){
        this.tahun = tahun ;
    }

    public void displaydata() {
        saydora();
        System.out.println("nama saya adalah : " + this.nama);
        System.out.println("Pemilik saya adalah : " + this.pemilik);
        System.out.println("tahun saya dibuat adalah : " + this.tahun);
    }
}

class App {
    public static void main(String[] args) {
        Doramini b = new Doramini("haris", "Nobita", 2001);
        b.displaydata();
    }
}