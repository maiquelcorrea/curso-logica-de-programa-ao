public class main{
    public char nome = new char[100];
   public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        double tempoantigo = System.currentTimeMillis();
        String s = scanner.nextline();
        
        if(Main.convertTime(System.currentTimeMillis() - tempoantigo) >= 2){
            System.out.println(s);
        }
   }

   public static double convertTime(double tempo){
        return tempo/1000;
   }
}