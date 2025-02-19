#include <iostream>
#include <cmath>

using namespace std;

double Diak (double a,double b,double c);

void Check (double d,double a,double b);

int main ()
{
    double a,b,c;

    cout << "Give a = ";

    cin >> a;

    cout << "Give b = ";

    cin >> b;

    cout << "Give c = ";

    cin >> c;

    double d = Diak(a,b,c);

    Check (d,a,b);

    return 0;
}

double Diak(double a,double b,double c) {
    double d = 0;
    d = (b*b)-4*a*c;
    return d;
}

void Check (double d,double a,double b)
{
    double x1,x2,x;
    if (d<0)
    {
        cout << "Impossible equation";
    }
    else if (d==0)
    {
        x = pow(b,2)/(2*a);
        cout << "The answer is " << x;
    }
    else
    {
        x1 = (pow(b,2)-pow(d,1/2))/(2*a);
        x2 = (pow(b,2)+pow(d,1/2))/(2*a);
        cout << "The answers are " << x1 << endl << x2;
    }
}