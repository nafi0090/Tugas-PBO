class conan{

    String judul;
    String nama_pengarang;
    int tahun;
    String sinopsis;
    int harga_beli;

    conan(String judul, String nama, int tahun, String sinopsis, int harga ){
        this.judul = judul;
        this.nama_pengarang = nama;
        this.tahun = tahun;
        this.sinopsis = sinopsis;
        this.harga_beli = harga;
    }

    int jual (){
        return this.harga_beli - this.harga_beli * 20 / 100;
    }
}

public class App {
    public static void main(String[] args) throws Exception {
        conan novel1 = new conan (
            "Bumi", 
            "Tere Liye", 
            2014, 
            "Raib adalah seorang remaja putri berusia 15th. Dia hidup bersama dengan kedua orangtuanya. Dia mempunyai 2 ekor kucing si putih dan si hitam. Dia juga bersekolah seperti remaja kebanyakan dan mempunyai seorang teman dekat bernama Seli.",
            88000);

            System.out.println("Judul Novel    : " + novel1.judul);
            System.out.println("Nama Pengarang : " + novel1.nama_pengarang);
            System.out.println("Tahun terbit   : " + novel1.tahun);
            System.out.println("Sinopsis : " +  novel1.sinopsis);
            System.out.println("Buku yang dibeli seharga      : " + novel1.harga_beli);
            System.out.println("Buku jika dijual akan seharga : " + novel1.jual());

        conan novel2 = new conan (
            "Bulan", 
            "Tere Liye", 
            2015, 
            "Buku Novel Bulan karya Tere Liye ini merupakan buku kedua dari serial novel Bumi. Jika di novel Bumi menceritakan petualangan di klan Bulan, maka novel Bulan ini menceritakan petualangan di klan Matahari.",
            95000);
            
            System.out.println("Judul Novel    : " + novel2.judul);
            System.out.println("Nama Pengarang : " + novel2.nama_pengarang);
            System.out.println("Tahun terbit   : " + novel2.tahun);
            System.out.println("Sinopsis : " +  novel2.sinopsis);
            System.out.println("Buku yang dibeli seharga      : " + novel2.harga_beli);
            System.out.println("Buku jika dijual akan seharga : " + novel2.jual());
             
        conan novel3 = new conan (
            "Matahari", 
            "Tere Liye", 
            2016, 
            "Raib, Ali, dan Seli dirundung duka atas tewasnya Ily, sahabat mereka, pada pertarungan di Klan Matahari. Tak hanya mereka, para kesatria Klan Bulan juga merasakan hal sama, sampai membuat Miss Selena tak bisa kembali ke Klan Bumi.",
            95000);

            System.out.println("Judul Novel    : " + novel3.judul);
            System.out.println("Nama Pengarang : " + novel3.nama_pengarang);
            System.out.println("Tahun terbit   : " + novel3.tahun);
            System.out.println("Sinopsis : " +  novel3.sinopsis);
            System.out.println("Buku yang dibeli seharga      : " + novel3.harga_beli);
            System.out.println("Buku jika dijual akan seharga : " + novel3.jual());
    }
}
