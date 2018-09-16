#include <stdio.h>
#include <math.h>

int main() {
    float a,b,s;

    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);

    s = (pow((a+b),3) - pow(a,3)) / (3 * a * b * b + (pow(b,3) + 3 * a *a *b));
    printf("%f",s);
    printf("\n");
    return 0;
}