#include<stdio.h>
int main() { 
  int x , y, p;
  printf("Enter the COST price of the laptop : ");
  scanf("%d", &x);

  printf("Enter the SELLING price of the laptop : ");
  scanf("%d", &y);

  if (x<y) {
    printf("Bhai party pahije ata , %d cha profit zala !!! ", y-x);
  }

  if (x==y) {
    printf("Na nafa na totta... Fakt dhaavpal!!");
  }

  else if ( x-y > 0) {
    printf("%d Itka loss zala ahe. Jiv de ja jaun....Dhanda karaychi akkal ny tujhyat ", x-y);
  }
   return 0;
}
