import java.util.Random;

public class random {
    public static void main(String[] args) {
        Random dice = new Random();
        
        int num;

        for(int i = 1; i <=10; i++){
            num = 1 + dice.nextInt(6);
            System.out.println(num);
        }
    }
    
}
