abstract class permainan{

    String namaPemain;
    int levelPemain;

    public void setnamaPemain (String namaPemain){
        this.namaPemain = namaPemain;
    }

    public String getnama (){
        return this.namaPemain;
    }

    public void setlevelpemain (int level){
       this.levelPemain = level;
    }

    public int getlevel (){
        return this.levelPemain;
    }

    public void jalankan(){
        System.out.println("Nama Pemain     : " + getnama());
        if (this.levelPemain <=20){
            System.out.println("Level Pemain    : Normal" );
        }
        else if(this.levelPemain <=80){
            System.out.println("Level Pemain    : Medium");
            }
            else if(this.levelPemain<=100){
                System.out.println("level Pemain    : hard");
                }
                else {
                    System.out.println("Maksimal Level = 100");
                }
    }

    public abstract int hitungskor(int hit, int miss);

}

class permainanArcade extends permainan{

    public int hitungskor(int hit, int miss){
        return hit * 3 - miss * 1;

    }
}

class permainanStrategy extends permainan{

    public int hitungskor(int hit, int miss){
        return hit * 5;

    }
}



class app {
    public static void main(String[] args) {

        System.out.println("Ini Arcade");
        permainan aPermainan = new permainanArcade();
        
        aPermainan.setnamaPemain("namaPemain");
        aPermainan.setlevelpemain(10);

        aPermainan.jalankan();
        System.out.println("Hit Pemain      : " + aPermainan.hitungskor(123, 123)) ;

        System.out.println("");

        System.out.println("Ini Strategy");
        permainan bPermainan = new permainanStrategy();

        bPermainan.setnamaPemain("Tono");
        bPermainan.setlevelpemain(70);

        bPermainan.jalankan();
        System.out.println("Hit Pemain      : " + bPermainan.hitungskor(123, 123)) ;

    }
}