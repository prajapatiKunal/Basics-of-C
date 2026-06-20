#include<stdio.h>
void england (){
    printf("you're in England\n");
    return;
}

void australia(){
    printf("you're in Australia\n");
    england();
    return;
}

void india (){
    printf("you're in India\n");
    australia();
    return;
}

int main() {
    india();
    return 0;
}