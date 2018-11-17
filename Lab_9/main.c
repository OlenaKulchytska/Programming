#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void formfile (FILE *f) {
    char buffer[255];
    printf("Enter 5 strings to fill f1.bin: \n");
    for (int i=0; i<5; i++) {
        fgets(buffer,255,stdin);
        fputs(buffer, f);
        if (ferror(f)) {
            printf("Error while writing!\n");
            exit(1);
        }
    }
    rewind(f);
};

void showfile (FILE *f) {
    char buffer[255];
    char buffer2[255];
    int i=0;
    if (f) {

        while (fscanf(f, "%s", buffer) != EOF)
            printf("%s\n", buffer);
    }
    rewind(f);
};
void copy(FILE *f, FILE *f2) {
    char *token;
    char *word;
    char *buffer[255];
    char *buffer3[255];
    char buffer2[255];
    int i = 0, counter = 0, n = 0, m = 0, word_numbeer = 0,checker=0;
    char *str[100];
    if (f) {
        while (fgets(buffer2,255,f)) {
            buffer[n] = strdup(buffer2);
            buffer3[n] = strdup(buffer2);
/*
            printf("%s",buffer[n]);
*/
            token = strtok(buffer2, " ");
            while (token != NULL) {
                str[i] = strdup(token);
/*
                printf("%s\n",str[i]);
*/
                token = strtok(NULL," ");
                i++;
                counter++;
            }
/*
            printf("%s\n",buffer[n]);
*/
            n++;
        }
        i=0;
        printf("\n\n\n");
/*        for (int j = 0; j < n; ++j) {
            printf("%s",buffer[j]);
            for (int k = 0; k < counter; ++k) {
                token = strtok(buffer[j]," ");
                while (token!=NULL)
                {
                    if(strcmp(token,str[k])==0)
                    {
                        m++;
                    }

                    printf("%d  -  %s  -  %s\n",m,token,str[k]);

                    if (m>=2)
                    {
                        printf("%s\n",buffer[j]);
                        checker=1;
                        break;
                    }
                    token=strtok(NULL," ");
                    if(token==NULL)
                    {
                        checker=1;
                    }

                }
                if (checker==1)
                {
                    break;
                }
                printf("%d-%d  %s\n",j,k,str[k]);
            }
            m=0;

        }*/
int number[n];
        for (int j = 0; j < counter; ++j) {
            for (int k = 0; k < n; ++k) {
                for (int l = 0; l < n; ++l) {
                    buffer[l] = strdup(buffer3[l]);
                }
                for (int l = 0; l < n; ++l) {
                    if(number[l]==1)
                    {
                        k++;
                    }
                }
                token=strtok(buffer[k]," ");
/*
                if (strcmp(word,str[j])==0) j++;
*/

                while (token!=NULL)
                {
/*
                    printf("%d - %d - %d - %s - %s\n",j,k,m,token,str[j]);
*/

                    if(strcmp(token,str[j])==0)
                    {
                        m++;
                    }

                    if(m>=2)
                    {
                        number[k]=1;
                        word = str[j];
                        printf("%s",buffer3[k]);
                        fputs(buffer3[k],f2);

                        checker=1;
                        break;
                    }
/*
                    printf("%d - %d - %s\n",j+1,k+1,token);
*/
                    token=strtok(NULL," ");
                }
                m=0;
                if (checker==1)
                {
                    checker=0;
                    break;
                }
            }


        }


    }
}
void find_A(FILE *f) {
    char *token;
    char buffer[255];
    int i=0,counter=0,n=0,max=0,word_numbeer=0;
    char *str[100];
    if (f) {
        while (fscanf(f, "%s", buffer) != EOF) {
            token = strtok(buffer, " ");
            while (token != NULL) {
                str[i] = strdup(token);
                counter++;

                for (int j = 0; j < strlen(token); ++j) {
                    if(token[j]=='a'||token[j]=='A')
                    {
                        n++;
                        if(max<n)
                        {
                            max=n;
                            word_numbeer=counter;
                        }
                    }

                }
                n=0;
                i++;
                token = strtok(NULL, " ");
/*                printf("%s\n", str[i]);*/
                i++;
            }

        }
        printf("%d - %d",max,word_numbeer);
    }
}
int main() {
    FILE *file1;
    FILE *file2;
    file1 = fopen("gg.txt","w");
    formfile(file1);
    fclose(file1);

    file1 = fopen("gg.txt","r");
    file2 = fopen("ggg.txt","w");

    showfile(file1);

    copy(file1,file2);
    fclose(file2);
    fopen("ggg.txt","r");
    showfile(file2);


    find_A(file2);
    fclose(file1);
    fclose(file2);

    return 0;
}