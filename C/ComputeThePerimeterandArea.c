#include<stdio.h>
int main(){
    int height;
    int width;
    printf("\nEnter the height of the Rectangle : ");
    scanf("%d",&height);
    printf("\nEnter the width of the Rectangle : ");
    scanf("%d",&width);
    int area = width*height;
    int perimeter = 2 * (height+width);
    printf("\nThe Area of Reactangle : %d",area);
    printf("\nThe Perimeter of the Reactangle is : %d",perimeter);
}