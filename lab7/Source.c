#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
task_one();
task_two();
homework_or_individual_assignment();
int main(){
    task_one();
    task_two();
    homework_or_individual_assignment();
}
int task_one() {
    puts("TASK ONE----------------------------------------------------------------------------------------------------------------");
    char c;
    printf("Enter the number or symbol:\n");
    scanf_s("%c", &c, 1);
    switch (c) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("This number\n");
        break;
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
        printf("This symbol\n");
        break;

    default:
        printf("Unknown symbol (Not number and not symbol)\n");
        break;
    }
    return 0;
}
int task_two(){
    puts("TASK TWO----------------------------------------------------------------------------------------------------------------");
    double x, y;
    double z;
    char c;
    printf("Enter the numbers and operation:");
    scanf_s("%lf %c %lf", &x, &c, 1, &y);
    switch (c) {
    case '+':
       z = x + y;
        break;
    case '-':
       z = x - y;
        break;
    case '*':
       z = x * y;
        break;
    case '/':
       z = x / y;
        break;
    default:
        printf("Please enter mathematical symbol, not another\n");
    }
    printf("%lf %c %lf = %lf\n", x, c, y, z);

    }
int homework_or_individual_assignment() {
    puts("HOMEWORK----------------------------------------------------------------------------------------------------------------");
    char c = 0;
    printf("Enter a math symbol:\n");
    scanf_s(" %c", &c, 1);
    switch (c) {
       case '+':
           printf("This is addition\n");
           break;
       case '-':
           printf("This is subtraction\n");
           break;
       case '*':
           printf("This is multiplication\n");
           break;
        case '/':
           printf("This is division\n");
           break;
        default: 
            printf("Enter another symbol\n");
            break;
    }
    return 0;
}