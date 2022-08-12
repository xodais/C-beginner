#include <iostream>
using namespace std;

void prime(int n)
{
    cout << "-----------------" << endl;
    int cntr , x;
    for(int i{1}; i <= n; i++)
    {
        x = n % i;
        if(x == 0)
        {
            cntr++;
        }
        //cout<< cntr <<endl;
    }
    if(cntr == 2)
    cout << n << " is prime \n";
    else
    cout << n << " is not prime "; 
    
}
int main()
{
    //13
    int num{}; 
    cout << "Enter a number ";
    cin >> num;
    prime(num);


    return 0;
}