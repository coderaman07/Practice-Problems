// Including the Current Headerfiles for Stdio Files
#include<stdio.h>

// Main Program which will be Executed
int main(){
    // Declaring Varibales with Information of the Developer.
    char name[] = "Aman Ojha";
    char website[] = "https://amanojha.me";
    char mobileNumber[] = "+91-7428569101";
    char temp;

    // Displaying the Developers Information
    printf("  Name of the Developer : %s\n",name);
    printf("  My website is : %s\n",website);
    printf("  My Contact Number : %s\n  Press a Key From Keyboard to continue : ",mobileNumber);

    // Added a Scanf to Hold the Program before Exiting
    scanf("%s",&temp);
}