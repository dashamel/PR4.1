// 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i;
    double P, N;
    cout << "N = "; cin >> N;
    P = 1;
    i = N;
    while (i <= 16)
    {
        P *= (i * N) / (i * i + N * N);
        i++;
    }
    cout << P << endl;
    P = 1;
    i = N; 
    if (i <= 16)
    {
        do {
            P *= (i * N) / (i * i + N * N);
            i++;

        } while (i <= 16);
    }
    cout << P << endl;
    P = 1;
    for (i = N; i <= 16; i++)
    {
        P *= (i * N) / (i * i + N * N);
    }
    cout << P << endl;
    P = 1;
    for (i = 16; i >= N; i--)
    {
        P *= (i * N) / (i * i + N * N);
    }
    cout << P << endl;
    return 0;
}