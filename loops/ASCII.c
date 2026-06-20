#include <stdio.h>
int main () {


    for (int i = 0 ; i<= 255 ; i++){
        char ch = (char)i;  // Typecasting
        printf ("%c --> ", ch);
        printf("%d\n", i );
    }
    return 0;
}