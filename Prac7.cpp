#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b)
{
    int t;
    while (1)
    {
        t = a % b;
        if (t == 0)
            return b;
        a = b;
        b = t;
    }
}
int main()
{

    double p;
    double q;
    cout << "Enter value of p : ";
    cin >> p;
    cout << "Enter value of q : ";
    cin >> q;
    double n = p * q;
    double track;
    double phi = (p - 1) * (q - 1);

    double e;
    cout << "Enter value of e : ";
    cin >> e;

    while (e < phi)
    {
        track = gcd(e, phi);
        if (track == 1)
            break;
        else
            e++;
    }

    double d1 = 1 / e;
    double d = fmod(d1, phi);
    double msg;
    cout << "Enter value of msg : ";
    cin >> msg;
    double c = pow(msg, e);
    double m = pow(c, d);
    c = fmod(c, n);
    m = fmod(m, n);
    cout << "Original Message = " << msg << endl;
    cout << "Encrypted message = " << c << endl;
    cout << "Decrypted message = " << m << endl;
    return 0;
}