// Write a C program to check whether a number is even or odd.
#include <stdio.h>
#include <conio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf(" %d", &num);

    (num%2 == 0)? printf("The number is even"): printf("The number is odd");

    return 0;
}