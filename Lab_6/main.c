#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[255];
    int num=0;
    printf("Enter string: ");
    gets(text);
    char *token = strtok(text," ");

    while (token != NULL)
    {

        for (int i = 0; i <strlen(token) ;i++) {


            if (isdigit(token[i])){
                num+=1;
           }
        }
        if(num==1)
        {
            printf("%s\n", token);
        }
        num=0;
        token = strtok(NULL, " ");
    }

    return 0;
}