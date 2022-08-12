#include <iostream>
using namespace std;

int main()
{
   int num=0;
   int first=0,second=1,next;
   cout<<"Enter number "<<endl;
   cin >> num;
   cout<< "series is "<<endl;

   for(int i =0;i<num;i++)
   {
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
   }


    return 0;
}