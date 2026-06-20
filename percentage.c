#include <stdio.h>
int main()
{
  float a, b, c, percentage, sgpa;

  // marks of Maths
  printf("Enter the marks of Maths: ");
  scanf("%f", &a);

  // marks of Chemistry
  printf("Enter the marks of Chemistry: ");
  scanf("%f", &b);

  // marks of Mechanics
  printf("Enter the marks of Mechanics: ");
  scanf("%f", &c);

  //   // marks of EEE
  // printf("\nEnter the marks of EEE: ");
  // scanf("%f", &d);

  //   // marks of C lang
  // printf("\nEnter the marks of C lang: ");
  // scanf("%f", &e);

  //   // marks of IKS
  // printf("\nEnter the marks of IKS: ");
  // scanf("%f", &f);

  printf("\n");

  // percentage calculation
  percentage = (a + b + c) / 3;
  printf("Your percentage: %.2f%\n", percentage);

  // grade calculation
  if (percentage >= 90)
    printf("Your Grade is : O\n");

  else if (70 <= percentage && percentage <= 89.99)
    printf("Your Grade is : A\n");

  else if (55 <= percentage && percentage <= 69.99)
    printf("Your Grade is : B\n");

  else if (50 <= percentage && percentage <= 54.99)
    printf("Your Grade is : C\n");

  else if (40 <= percentage && percentage <= 49.99)
    printf("Your Grade is : D\n");

  else if (percentage < 40)
    printf("Your Grade : Haiyyaa You idiot...You FAILED!! (EMOTIONAL DAMAGE)\n");

  // // sgpa calculation

  // if (percentage < 40)
  //   printf("Your SGPA: Laiki ahe ka?\n ");
  // else
  // {
  //   sgpa = (percentage + 7.5) / 10;
  //   printf("Your SGPA: %.2f\n", sgpa);
  // }

  return 0;
}