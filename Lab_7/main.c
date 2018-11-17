#include <stdio.h>
#include <math.h>
void Input(int coord,...)
{
    printf("%d",coord);
    double l[coord];
    int da=coord;
    int *x=&coord;
    int i=0;
    while (da!=0){
        printf("Enter coordinates (x%d;y%d): \n",i+1,i+1);

        scanf("%d %d",&*x,&*y);

    i++;
    ++x;
    ++y;
    da--;

    }
}
double Find_Length(int coord,...)
{
    for (int i = 0; i < coord ; ++i) {
 //       l[i] = sqrt(x[i]*x[i]+y[i]*y[i]);
        return l[i];
    }
}
/*

double Find_Square(double p, double s, double l[10])
{
    p = (l[1] + l[2] + l[0]) / 2;
    s = sqrt(p * (p - l[1]) * (p - l[2]) * (p - l[0]));
    return s;
}

double Find_Square_En(int coord,double gg,int x[10],int y[10],double s)
{
    for (int i = 0; i < coord - 1; ++i) {
        gg += (x[i] * y[i + 1] - x[i + 1] * y[i]);
    }
    s = 0.5 * fabs(gg);
    return s;
}*/
void Output(int coord,...)
{
    for (int j = 0; j < coord; ++j)
    {

        printf("(%d;%d)",*x[j],y[j]);
    }
    printf("\n%lf\n",s);
}
int main() {
    int coord;
    double p=0,s=0;
    printf("Enter an amount of coordinates: ");
    scanf("%d",&coord);
    int x[coord],y[coord];
    double l[coord];
    Input(coord);
/*
    // INPUT
*/
/*    for (int i = 0; i < coord ; i++) {

        printf("Enter coordinates (x%d;y%d): \n",i+1,i+1);

        scanf("%d %d",&x[i],&y[i]);

    }*//*

    Input(coord,x,y);


    //LENGTH

*/
/*    for (int i = 0; i < coord ; ++i) {
        l[i] = sqrt(x[i]*x[i]+y[i]*y[i]);
    }*//*

Find_Length(coord,x,y,l);
    //SQUARE_TRIANGLE
    if (coord==3) {

        Find_Square(p,s,l);

    } else
    {
        s=0;
    }
    double gg=0;
    //SQUARE_EN
    if(coord>3) {
        Find_Square_En(coord,gg,x,y,s);
    }


    //OUTPUT

Output(coord,x,y,s);

*/

    return 0;
}