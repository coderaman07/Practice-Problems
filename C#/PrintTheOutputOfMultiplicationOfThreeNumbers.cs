using System;

namespace C_
{
    class PrintTheOutputMultiplicationOfThreeNumbers
    {
        public static void MainQuestion6(String[] args){
            Console.Write("Enter the First Number : ");
            int firstNumber = int.Parse(Console.ReadLine());
            Console.Write("Enter the Second Number : ");
            int secondNumber = int.Parse(Console.ReadLine());
            Console.Write("Enter the Third Number : ");
            int thirdNumber = int.Parse(Console.ReadLine());
            int product = firstNumber * secondNumber * thirdNumber;
            Console.WriteLine("The sum of three Numbers you Entered is : " + product);
        }
    }
}