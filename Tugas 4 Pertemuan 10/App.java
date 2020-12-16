
class member{
    String nama;
    int umur;

    member (String nama, int umur){
        this.nama = nama;
        this.umur = umur;
    }

    void display(){
        System.out.println("Nama : " + this.nama);
        System.out.println("umur : " + this.umur);
    }
}

class tim extends member{
    String namatim;

    tim (String nama, int umur,String namatim){
        super(nama, umur);
        this.namatim = namatim;
    }

    void displayfullmember(){
        System.out.println("Nama : " + super.nama);
    }

    void displaytrainee(){
        System.out.println("Nama : " + super.nama);
    }
}

class trainee extends member {
    int waktu;

    trainee (String nama, int umur, int waktu){
        super(nama, umur);
        this.waktu = waktu;
    }

    void display(){
        System.out.println("\nNama : " + this.nama);
        System.out.println("umur : " + this.umur);
        System.out.println("Lama : " + this.waktu + " hari");
    }
}

public class App {
    public static void main(String[] args) throws Exception {
        member member1 = new member("tono", 19);
        member1.display();
          
        trainee member2 = new trainee("andi", 18, 30);
        member2.display();

        tim tim1 = new tim("OOP", 123, "testing");
        tim1.display();
    }    
}