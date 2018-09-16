#include <stdio.h>

int main() {
    int rez1,rez2,rez3;
    int m,n;

    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);

    rez1 = n++*m;
    rez2 = n++<m;
    rez3 = m-- >m;

    printf("\nResult 1 : %d",rez1);
    printf("\nResult 2 : %d",rez2);
    printf("\nResult 3 : %d\n",rez3);



    return 0;
}