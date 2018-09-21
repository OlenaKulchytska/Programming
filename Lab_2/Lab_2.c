#include <stdio.h>
#include <math.h>
int main() {


    double sum=0;

    for (int i = 0;  i<9 ; i++)
    {
        double a[9];
        a[i] = pow(M_E,-(pow(i,0.5)));
        sum = sum +a[i];
    }
    printf("%lf\n",sum);
    return 0;
}