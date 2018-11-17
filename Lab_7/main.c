#include <stdio.h>
#include <stdarg.h>
#include <math.h>

double Find_Leangth(int n,...)
{
    int M[n];
    int ro = (n/4);
    double L[ro];
    va_list list;
    int k=0;
    int j = 0;
    va_start(list,n);
    for (j = 0; j < n; ++j) {
        M[j] = va_arg(list, int);
    }
    for (int i = 0; i < n;i+=4) {
        L[k] = sqrt(M[i]*M[i+2]+M[i+1]*M[i+3]);
        printf("\n%lf\n",L[k]);
        k++;

    }
    return 0;
}

double Square(int x1,int y1,int x2,int y2,int x3,int y3)
{
    double p=0;
    double sq=0;
    double l1=sqrt(x1*x2+y1*y2);
    double l2=sqrt(x3*x2+y3*y2);
    double l3=sqrt(x1*x3+y1*y3);
    p=(l1+l2+l3)/2;
    sq=sqrt(p*(p-l1)*(p-l2)*(p-l3));
    printf("\n%lf\n",sq);
    return 0;
}

double Square_en(int n,...)
{
    int M[n];
    double Sq=0;
    double ex=0;
    va_list list;
    int k=0;
    int j = 0;
    va_start(list,n);
    for (j = 0; j < n; ++j) {
        M[j] = va_arg(list, int);
    }

    for (int i = 0; i < n-3; ++i)
    {
        ex+=fabs((M[i]+M[i+2])*(M[i+1]-M[i+3]));
    }
    Sq=0.5*ex;
    printf("\n%lf\n",Sq);
    return 0;
}

int main() {
    Find_Leangth(8,1,2,3,4,2,3,4,5);
         //x1 y1 x2 y2 x3 y3
    Square(2, 3, 3, 4, 5, 6);

    Square_en(13,2,3,4,5,6,7,8,9,10,11,12,13,14);
    return 0;
}