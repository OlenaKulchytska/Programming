#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 255

char **makearray(int n) {
    char **mas;
    char buffer[MAX_LENGTH+1];
    mas=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++) {
        fgets(buffer, MAX_LENGTH, stdin);
        if (buffer[strlen(buffer)-1]=='\n')
            buffer[strlen(buffer)-1]='\0';
        mas[i]=(char*)malloc(strlen(buffer)*sizeof(char));
        strcpy(mas[i],buffer);
    }
    return mas;
};

void printarray(char **arr, int n) {
    for (int i=0; i<n; i++)
        printf("%s   ", arr[i]);
    printf("\n");
};

char **delete(char **arr,int n,int k)
{
    int j=k;
    int i = 0;
    char **mas2;
    char buffer[MAX_LENGTH+1];
    mas2=(char**)malloc((n-j)*sizeof(char*));

    for(;j<n;j++)
    {
        mas2[i]=(char*)malloc(strlen(arr[j])*sizeof(char*));

        strcpy(mas2[i],arr[j]);
        i++;
    }
    return mas2;
};
int main() {
    char **mas2;
    int n,rows;
    printf("Enter array length:");
    scanf("%d", &n);
    getchar();
    char **array = makearray(n);
    printarray(array,n);
    printf("Enter an amount of rows to delete: ");
    scanf("%d",&rows);
   mas2 = delete(array,n,rows);
   printarray(mas2,n-rows);
    return 0;
}