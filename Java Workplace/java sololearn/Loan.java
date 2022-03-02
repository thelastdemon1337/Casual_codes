import java.util.Scanner;

public class Loan
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int amount = scanner.nextInt();
		//your code goes here
        int pay;

        for(int i = 1; i <= 3; i++){
            pay = amount/10;
            amount -= pay;
        }
        System.out.println(amount);
	}
}