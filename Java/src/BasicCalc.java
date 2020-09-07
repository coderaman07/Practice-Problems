import java.util.Scanner;

public class BasicCalc {
    public static void main(String[] args){
        System.out.println("Enter the First Number : ");
        Scanner input = new Scanner(System.in);
        int firstNumber = input.nextInt();
        System.out.println("Enter the Second Number : ");
        int secondNumber = input.nextInt();
        int sum = firstNumber + secondNumber;
        int difference = secondNumber - firstNumber;
        int product = firstNumber * secondNumber;
        int divide = firstNumber / secondNumber;
        System.out.println("Sum of " + firstNumber + " and " + secondNumber + " is : " + sum);
        System.out.println("Difference of " + firstNumber + " and " + secondNumber + " is : " + difference);
        System.out.println("Product of " + firstNumber + " and " + secondNumber + " is : " + product);
        System.out.println("Quotient of " + firstNumber + " and " + secondNumber + " is : " + divide);
    }
}
