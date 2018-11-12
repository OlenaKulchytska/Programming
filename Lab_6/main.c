#include <stdio.h>
#include <string.h>

int main() {
    char text[255];
    int num=0;

/*    printf("Enter string: \n");
    scanf("%s",text);
    printf("%s",text);*/

    printf("Enter string: ");
    gets(text);
    char *token = strtok(text," ");

    while (token != NULL)
    {

        for (int i = 0; i <strlen(token) ;i++) {


            if (token[i] == '1'||token[i] == '2'||token[i] == '3'||token[i] == '4'||token[i] == '5'||token[i] == '6'||token[i] == '7'||token[i] == '8'||token[i] == '9'||token[i] == '0'){
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