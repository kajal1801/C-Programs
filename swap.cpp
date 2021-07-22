#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    cout << "Enter the 1st string" << endl;
    string s1,s2;
    cin >> s1;
    cout << "Enter the second number" << endl;
    cin >> s2;
    string t = s1;
    s1=s2;
    s2=t;
    cout << "the swaped numbers are: " << endl;
    cout << s1 <<","<<s2 << endl;
}