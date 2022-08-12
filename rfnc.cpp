#include <iostream> 
using namespace std;

int rec_fun(int x);

int main()
{
    int n = 0;
    cout<<"Enter number uto which you want to find the sum " << endl;
    cin>>n;
    int result = rec_fun(n);
    cout<< "The sum of first " <<  n << " natural number is " <<result;

    return 0;
}

int rec_fun(int x)
{
    if(x<=1)
    return x;
    else
    return x + rec_fun(x - 1);
}