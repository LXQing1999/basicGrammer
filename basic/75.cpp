#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[100];

    int n = 0;
    while (cin >> str[n]&& str[n].compare("EOF")) n++;

    for (int i = n - 1; i >= 0; i -- ) cout << str[i] << ' ';
    cout << endl;

    return 0;
}