#include <iostream>
#include <cmath>
using namespace std;

double f(double a)
{
    return cos(a) + (2 + cos(a) + (6 + cos(a) + (7 + cos(a))));
}

double сalс_integral(double a, double b, int n)
{
    double step = (b - a) / n;
    double S = 0.0;

    for (int i = 0; i < n - 1; i++)
    {
        S += step * abs(f(a + i * step));
    }

    return S;
}

int main()
{
    double a, b;
    int n;

    cout << "integral calculation" << endl << "Write a, b, n: " << endl;
    cin >> a >> b >> n;

    cout << "Result is:" << сalс_integral(a, b, n) << endl;
}
