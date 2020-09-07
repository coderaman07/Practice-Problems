#include<stdio.h>
#include<math.h>
int main(){
    int radius;
    printf("\nEnter the Radius of the Circle : ");
    scanf("%d",&radius);
    int area = 3.14 * pow(radius, 2);
    int perimeter = 2 * 3.14 * radius;
    printf("\nThe Area of Circle is : %d",area);
    printf("\nThe Perimeter of Circle is : %d",perimeter);
}