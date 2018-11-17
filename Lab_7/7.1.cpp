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
char del() {
    int n,number=0;
    cout<<"Enter the amount of words:";
    cin>>n;
    char str[20];
    char str2[20][n/2];
    for (int i = 1; i <= n; i++) {
        cout<<"Enter word"<<endl;
        cin>>str;
        if(i%2!=0)
        {
            cout<<str<<endl;
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

    del(M,n);
    del();

    return 0;
}
