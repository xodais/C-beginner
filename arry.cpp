#include <iostream>
using namespace std;

int main()
{
    /*
    int arr[10] = {1,2,3,4,5,5,6,7,8,9};
    int n;
    cout<<"enter the number you want to search for "<< endl;
    cin>>n;

    int count;

    for(int i{0} ; i < 10 ; i++)
    {
        if(arr[i]==n)
        {
        count++;
        }
        else
        cout<< n << " is not presnt "<<endl; break;

    }
    if(count>1)
    cout<< n << " is present " << count << " times in the array" << endl;
*/
    
    int arr1 [25] {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int temp;
    for(int i = 0 ; i < 25 ; i+=2)
    {
        temp = arr1[i];
        arr1[i] = arr1[i+1];
        arr1[i+1]=temp;

    }
    for(int i=0; i<25 ; i++)
    {
        cout<<arr1[i];
    }
    

    return 0;
}