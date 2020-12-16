class Pecahan{

    int pembilang,penyebut;
     
    Pecahan(){
        pembilang=0;penyebut=1;
    }
    Pecahan(int x,int y){
        pembilang=x;penyebut=y;
    }
     
    Pecahan tambah(Pecahan X){
        Pecahan T= new Pecahan();
         
        T.pembilang=(pembilang)*X.penyebut+penyebut*(X.pembilang);
        T.penyebut=penyebut*X.penyebut;

        return T;
    }

    String bentuk(){
        String T="";
        if(penyebut==1)
            if(pembilang==0)
                 T=T;
            else{
                 T=T+pembilang;
                 pembilang=0;
             }
        else 
            T=T+pembilang+"/"+penyebut;
        return (T);
    }
}

public class App {
    public static void main(String[] args) throws Exception {
        Pecahan p=new Pecahan (3,2);
        Pecahan p2=new Pecahan (5,6);

        System.out.println(p.bentuk()+" + "+p2.bentuk()+ " = " +p.tambah(p2).bentuk());
   }
        
}