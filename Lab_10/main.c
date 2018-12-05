#include <stdio.h>
#include <stdlib.h>
int **make_mas(int rows,int columns)
{
    int **mas;
    mas=(int**)malloc(rows*sizeof(int*));
    for(int i=0;i<rows;i++){
        mas[i]=(int*)malloc(columns*sizeof(int));
    }
    for(int i=0;i<rows;i++){
        for(int j=0; j<columns;j++){
            mas[i][j]=rand()%200;
        }
    }
    return mas;
}
int main()
{
    int max=0;
    int max_r,max_c;
    int rows,columns;
    printf("Enter rows:\n");
    scanf("%d",&rows);
    printf("Enter columns:\n");
    scanf("%d",&columns);
    int **array;
    array=make_mas(rows, columns);

    for(int i=0;i<rows;i++){
        for(int j=0; j<columns;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0; j<columns;j++){
            if(max<array[i][j]) {
                max=array[i][j];
                max_r = i;
                max_c = j;
            }
        }
    }
    printf("%d\n",max);
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(max_r==i||max_c==j){
                array[i][j]=-1;
            }
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0; j<columns-1;j++){
            if(array[i][j]==-1){
                array[i][j]= array[i][j+1];
                array[i][j+1] = -1;
            }
        }
    }

    for(int i=0;i<rows-1;i++){
        for(int j=0; j<columns;j++){
            if(array[i][j]==-1){
                array[i][j]= array[i+1][j];
                array[i+1][j] = -1;
            }
        }
    }
    printf("\n");
    for(int i=0;i<rows;i++){
        for(int j=0; j<columns;j++){
            if(array[i][j] != -1){
                printf("%d\t",array[i][j]);
            }

        }
        printf("\n");
    }
    for (int i = 0; i < rows; ++i) {
        free(array[i]);
    }
    free(array);
    return 0;
}
