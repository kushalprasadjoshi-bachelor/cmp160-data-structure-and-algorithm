#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 // Define macro

// Function prototype/declaration
int isFull();
int isEmpty();

void push(int);
int pop();
void peek();
void display();

// Stack
int stack[SIZE]; // Only constants and macros can be used in array index
int top = -1;

int main(int argc, char const *argv[])
{
    int choice, data, poppedValue;

    do
    {
        printf("\n\nEnter:\n\t1 for Push\n\t2 for Pop\n\t3 for Peek\n\t4 for display\n\t5 for Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            poppedValue = pop();
            printf("%d is popped successfully.", poppedValue);
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            exit(0);

        default:
            printf("INVALID CHOICE.");
            break;
        }

    } while (1);

    return 0;
}

// Function to check whether the stack is full
int isFull()
{
    if (top == SIZE - 1)
    {
        return 1; // Full
    }
    return 0; // Not full
}

// Function to check whether the stack is empty
int isEmpty()
{
    if (top == -1)
    {
        return 1; // Empty
    }
    return 0; // Not empty
}

// Function to push element to stack
void push(int value)
{
    if (isFull())
    {
        printf("STACK OVERFLOW!");
        return;
    }
    stack[++top] = value; // Increase top by one and store the value at index
    printf("%d is pushed successfully.", value);
}

// Function to pop out element from stack
int pop()
{
    int poppedElement;

    if (isEmpty())
    {
        printf("STACK UNDERFLOW!");
        // return; // Returns a garbage value after STACK UNDERFLOW
        exit(0);
    }
    return stack[top--];
}

// Function to peek in stack
void peek()
{
    if (isEmpty())
    {
        printf("STACK IS EMPTY!");
        return;
    }
    printf("%d is at top of the stack", stack[top]);
}

// Function to display elements in stack
void display()
{
    if (isEmpty())
    {
        printf("STACK IS EMPTY!");
        return;
    }
    printf("The elements in stack are: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d\t", stack[i]);
    }
}