#include <iostream>
using namespace std;

void hello(string n){
    cout << "hello MR " << n;
}
int main()
{
    string name{};
    cout <<"whats your name "<<endl;
    cin >> name;
    hello(name);

    return 0;
}

