import java.util.Scanner;

public class PrintTheProductOfTwoNumbers {
    public static void Main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter First Number : ");
        int firstNumber = input.nextInt();
        System.out.println("Enter Second Number : ");
        int secondNumber = input.nextInt();
        int Product = firstNumber * secondNumber;
        System.out.println("The Product of " + firstNumber + " and " + secondNumber + " is : " +Product);
    }
}
