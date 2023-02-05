#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double n1;
    double n2;
    double n3;
    double n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double x = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    printf("Media:%.1lf\n", x);
    if (x >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (x < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else
    {
        cout << "Aluno em exame." << endl;
        double y;
        cin >> y;
        printf("Nota do exame:%.1lf\n", y);
        double z;
        z = (x + y) / 2;
        if (z >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }

        printf("Media final: %.1lf\n", z);
    }

    return 0;
}