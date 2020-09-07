using System;

namespace C_
{
    class ProgramToSwapNumbers
    {
        public static void MainQuestion5(String[] args){
            Console.Write("Enter The First Number : ");
            int firstNumber = int.Parse(Console.ReadLine());
            Console.Write("Enter the Second Number : ");
            int secondNumber = int.Parse(Console.ReadLine());
            int temp;
            temp = firstNumber;
            firstNumber = secondNumber;
            secondNumber = temp;
            Console.WriteLine("The Swapped Numbers are : " + firstNumber + " and " + secondNumber);
        }
    }
}