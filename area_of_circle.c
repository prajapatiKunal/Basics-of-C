#include<stdio.h>
#include<math.h>
int main() { 
    float r, area;
    const float p = 3.14159265358979;

    printf("Enter the Radius of Circle in cm : ");
    scanf("%f", &r);

    area = p*pow(r,2);
    printf("The Area of Circle is: %.4f square cm", area);

    return 0;
}
