#include <stdio.h>
#include <math.h>
int main () {
    float r, volume;
    const float p = 3.14159265358979, s = 4.0/3.0;

    printf("Enter the Radius of sphere: ");
    scanf("%f", &r);

    volume = s*p*pow(r,3);
    printf("The volume of sphere is: %.2f\n", volume);

    return 0;
}
