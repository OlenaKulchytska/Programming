#include <iostream>
#include <math.h>
#include <string>
#include <cstdio>
#include <string.h>

using namespace std;

int del(int *M,int n){
    for (int i = 0; i < n; i++) {
        if(M[i]%2!=0) {
            cout << M[i] << " ";
        }
    }
    cout<<endl;
}
char del(char *str[100],int n) {
    int number=0;

    for (int i = 1; i <= n; i++) {

        if (i % 2 != 0) {
            cout << str[i] << endl;
        }
    }

}

int main()
{
    int n;
    string string1;
    cout<<"Enter the amount of elements:"<<endl;
    cin>>n;
    int M[n];
    for (int i = 0; i < n; ++i) {


        cout << "Enter the number:" << endl;
        cin >> M[i];
    }
    int num;
    cout<<"Enter the amount of words:";
    cin>>num;
    char *str[20];
    char token[20];

    for (int i = 1; i <= num; i++) {
        cout << "\nEnter word: ";
        scanf("%s",token);
        str[i] = strdup(token);
    }

    del(M,n);
    del(str,num);


    return 0;
}
