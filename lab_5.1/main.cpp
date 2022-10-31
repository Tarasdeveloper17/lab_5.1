
#include <iostream>
#include <cmath>
using namespace std;
double g(const double a, const double b, const double c);
int main(void)
{
 double x, y;

 cout << "x = "; cin >> x;
 cout << "y = "; cin >> y;
 double result = g(x*x,1,y) - g(y*y,x,1) / 1 + ((x*x)*(y*y));
 cout << "result = " << result << endl;
 return 0;
}
double g(const double a, const double b, const double c)
{
    return (pow(a, 2) + sin(b) + 1)  / 1 + pow(c, 2);
}

