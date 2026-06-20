#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int x) {
    if (top == SIZE - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = x;
        printf("Pushed %d\n", x);
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        printf("Popped %d\n", stack[top]);
        top--;
    }
}

int main() {
    push(10);
    push(20);
    pop();
    pop();
    pop(); // shows underflow
    return 0;
}


