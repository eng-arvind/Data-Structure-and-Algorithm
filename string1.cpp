#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a, d;
    int b;
    getline(cin,a);
    cin>>b;
    cin.ignore();
    getline(cin,d);
    cout << a << endl;
    cout << b << endl;
    cout << d << endl;
    return 0;
}
