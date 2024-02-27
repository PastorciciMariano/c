#include <stdio.h>

int main(){
    int x; //declaration
    x = 123; //initialization
    int y = 321; //declaration + initialization

    int age = 28; //integer
    float gpa = 2.05; // floating point number
    char grade = 'C'; //single character
    char name[] = "Bro"; //array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("You grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}