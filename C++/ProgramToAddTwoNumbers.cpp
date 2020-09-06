#include<iostream>
int main(){
    int firstNumber;
    int SecondNumber;
    std::cout<<"\nEnter the First Number : ";
    std::cin>>firstNumber;
    std::cout<<"\nEnter the Second Number : ";
    std::cin>>SecondNumber;
    int sum = firstNumber + SecondNumber;
    std::cout<<"\nThe Sum of "<<firstNumber<<" and "<<SecondNumber<<" is : "<<sum;
    return 0;
}