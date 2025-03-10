#include <stdio.h>

#define N 7
int stack[N], top = -1;

void push() {
    if (top == (N - 1)) {
        printf("Stack overflow!\n");
    } else {
        top++;
        printf("Enter data: ");
        scanf("%d", &stack[top]);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nChoose operation:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n>>> ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0;  // Exit the program
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
