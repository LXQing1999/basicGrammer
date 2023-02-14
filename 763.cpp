#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    string s1, s2;
    for (int i = 0; i < t; i++)
    {
        cin >> s1 >> s2;
        // getline(cin, s1);
        // getline(cin, s2);
        if (s1 == "Hunter")
        {
            if (s2 == "Gun")
            {
                cout << "Player1" << endl;
            }
            else if (s2 == "Bear")
            {
                cout << "Player2" << endl;
            }
            else
            {
                cout << "Tie" << endl;
            }
        }
        else if (s1 == "Bear")
        {
            if (s2 == "Hunter")
            {
                cout << "Player1" << endl;
            }
            else if (s2 == "Gun")
            {
                cout << "Player2" << endl;
            }
            else
            {
                cout << "Tie" << endl;
            }
        }
        else // s1出枪
        {
            if (s2 == "Hunter")
            {
                cout << "Player2" << endl;
            }
            else if (s2 == "Bear")
            {
                cout << "Player1" << endl;
            }
            else
            {
                cout << "Tie" << endl;
            }
        }
    }
    return 0;
}
