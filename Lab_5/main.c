#include <stdio.h>
#include <stdlib.h>

void randMatrix(int rows,int columns,int matrix[20][20])
{

    for (int i = 0; i <rows ;i++) {
        for (int j = 0; j <columns ; j++) {
            matrix[i][j] = rand()%10;
        }
    }
}



int main() {
    int rows,columns;
    int number = 0;
    int max_number=0;
    printf("Enter an amount of rows: ");
    scanf("%d",&rows);
    printf("Enter an amount of columns: ");
    scanf("%d",&columns);
    if (rows>20 || columns>20)
    {
        printf("\nError\n");
        return main();
    }
    int matrix[20][20];

    randMatrix(rows,columns,matrix);

    for (int i = 0; i <rows ;i++) {
        printf("|");
        for (int j = 0; j <columns ; j++) {
            printf(" %d |", matrix[i][j]);
        }

        printf("\n");
    }

    for (int l = 0; l < rows;l++) {
        if (matrix[l][l] > max_number) {
            max_number = matrix[l][l];


        }
    }
        for (int k = 0; k <rows ; k++)
        {


            for (int j = 0; j < columns; j++)
            {
                    if (matrix[k][j] > max_number)
                    {
                        number += 1;
                    }


            }
        }

    printf("\nNumber: %d",number);
    printf("\n");
    return 0;
}