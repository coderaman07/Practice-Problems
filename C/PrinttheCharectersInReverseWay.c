#include<stdio.h>
int main(){
    char a[5];
    printf("\nRunning 0");
    printf("\nEnter the String : ");
    scanf("%s",a);
    printf("\nThe Reversed form of the Expression is : ");
    for(int i=4;i>=0;i--){
        printf("%c",a[i]);
    }
}