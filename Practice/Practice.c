#include <stdio.h>

int main() {
    int age = 25;
    float height = 180;
    char grade = 'A';

    printf("Age: %d, Height: %.@2f, Grade: %c\n", age, height, grade);
    return 0;
}