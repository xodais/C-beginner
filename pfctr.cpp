#include <iostream>
using namespace std;

int main()
{
    int num{};
    cout<<"Enter a number : "<<endl;
    cin>>num;
    cout<<"Prime factr of " << num << " is " <<endl;
    for(int i{2};i<=num;i++)
    {        
        while(num%i==0)
        {
            num=num/i;
            cout<<i<<endl;
            
        }

    } 
}

