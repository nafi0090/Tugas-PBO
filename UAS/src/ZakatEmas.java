import java.util.Scanner;

abstract class data{
  String nama;
  int harganow;
  int hartamiliki;
  int zakat;

}

class emas extends data{

  emas(String nama,int harga, int harta){
    this.nama = nama;
    this.harganow = harga;
    this.hartamiliki = harta;
  }

  public void setzakat(int zakat){
    this.zakat = zakat;
  }

  public int getzakat(){
    return this.zakat = this.harganow * this.hartamiliki * 25 /1000;
  }

  public void display(){
    System.out.println("======================================");
    System.out.println("           ZAKAT EMAS ANDA");
    System.out.println("======================================\n");
    System.out.println("======================================");
    System.out.println("Nama A A " + this.nama);
    System.out.println("Harta yang anda miliki adalah " + this.hartamiliki + " gram");
    System.out.println("Harga emas saat ini sebesar RP " + this.harganow);
    System.out.println("zakat yang harus anda bayar sebesar " + getzakat() );
    System.out.println("======================================");
  }
 
}
 
public class ZakatEmas {
  public static void main(String args[]){
      
    String nama;
    int a,b;

    Scanner input= new Scanner(System.in);
    System.out.println("======================================");
    System.out.println("           ZAKAT EMAS ANDA");
    System.out.println("======================================\n");
    System.out.println("========================================");
    System.out.print("Masukkan Nama Anda : ");
    nama = input.nextLine();  
    System.out.print("Masukkan Berat Emas yang Anda Miliki : ");
    b = input.nextInt();
    System.out.print("Masukkan Harga Emas saat : ");
    a = input.nextInt();
    System.out.println("========================================");
    input.close();

    System.out.print("\033\143");

    emas aEmas = new emas(nama, a, b);
    aEmas.display();

  }   
}