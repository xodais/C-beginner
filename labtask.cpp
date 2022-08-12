#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char a[]="hello!.";
    char x[]="how are you";
    char c[15];
    cout<<"size of char a "<<strlen(a)<<endl;
    strcpy(c, x);
    cout <<"strncpy " << c << endl;
    strncat(a,c,11);
    cout<< "strncat "<<a<<endl;
    int result = strcmp(a,x);
    cout<< result;

    return 0; 
}



