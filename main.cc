//  created by john shook on 9/14/21.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// to-do: cubic formula ?
// to-do: statistics calculator

void die() {
    cout << "invalid input\n";
    exit(1);
}

double zeros(double a, double b, double c) {
    double rootArgument = (b * b) - (4 * a * c);
    double rootTermR = sqrt(rootArgument);
    double rootTermI = sqrt(abs(rootArgument));
    double leadTerm = -1 * b;
    double denominator = 2 * a;
    double plusBranch = leadTerm + rootTermR;
    double minusBranch = leadTerm - rootTermR;
    double zero1 = minusBranch / denominator;
    double zero2 = plusBranch / denominator;
    
    cout << endl;
    // quadratic formatting (obesessive compulsive disorder as defined by the DSM IV)
    if (a == 0) {
        cout << "error: linear equation.\n";
    }
    // 1x² -> x²
    else if (a == 1) {
        // accounts for b <= 0 and c <= 0
        if (b == 0 && c == 0) {
            cout << "f(x) = x²" << endl;
        }
        else if (b == 0) {
            cout << "f(x) = x² + " << c << endl;
        }
        else if (c == 0) {
            cout << "f(x) = x² + " << b << "x" << endl;
        }
        else if (b < 0 && c < 0) {
            cout << "f(x) = x² - " << abs(b) << "x - " << abs(c) << endl;
        }
        else if (b < 0) {
            cout << "f(x) = x² - " << abs(b) << "x + " << c << endl;
        }
        else if (c < 0) {
            cout << "f(x) = x² + " << b << "x - " << abs(c) << endl;
        }
        else {
            cout << "f(x) = x² + " << b << "x + " << c << endl;
        }
    }
    // -1x² -> -x²
    else if (a == -1) {
        // accounts for b <= 0 and c <= 0
        if (b == 0 && c == 0) {
            cout << "f(x) = -x²" << endl;
        }
        else if (b == 0) {
            cout << "f(x) = -x² + " << c << endl;
        }
        else if (c == 0) {
            cout << "f(x) = -x² + " << b << "x" << endl;
        }
        else if (b < 0 && c < 0) {
            cout << "f(x) = -x² - " << abs(b) << "x - " << abs(c) << endl;
        }
        else if (b < 0) {
            cout << "f(x) = -x² - " << abs(b) << "x + " << c << endl;
        }
        else if (c < 0) {
            cout << "f(x) = -x² + " << b << "x - " << abs(c) << endl;
        }
        else {
            cout << "f(x) = -x² + " << b << "x + " << c << endl;
        }
    }
    else if ((a != 1) && (a != -1)) {
        // accounts for b <= 0 and c <= 0
        if (b == 0 && c == 0) {
            cout << "f(x) = " << a << "x²" << endl;
        }
        else if (b == 0) {
            cout << "f(x) = " << a << "x² + " << c << endl;
        }
        else if (c == 0) {
            cout << "f(x) = " << a << "x² + " << b << "x" << endl;
        }
        else if (b < 0 && c < 0) {
            cout << "f(x) = " << a << "x² - " << abs(b) << "x - " << abs(c) << endl;
        }
        else if (b < 0) {
            cout << "f(x) = " << a << "x² - " << abs(b) << "x + " << c << endl;
        }
        else if (c < 0) {
            cout << "f(x) = " << a << "x² + " << b << "x - " << abs(c) << endl;
        }
        else {
            cout << "f(x) = " << a << "x² + " << b << "x + " << c << endl;
        }
    }
    if (rootArgument < 0) {
        cout << "root 1 = " << fixed << setprecision(4) << leadTerm / denominator << " + "   << abs((rootTermI / denominator)) << "i" << endl;
        cout << "root 2 = " << fixed << setprecision(4) << leadTerm / denominator << " - " << abs((rootTermI / denominator)) << "i" << endl;
    }
    else {
        cout << "root 1 = " << fixed << setprecision(4) << zero1 << endl;
        cout << "root 2 = " << fixed << setprecision(4) << zero2 << endl;
    }
    cout << endl;
    
    return NULL;
} //roots end

int main() {
    double a = 0.0, b = 0.0, c = 0.0;
    cout << "enter the coefficients for a quadratic of the form f(x) = ax² + bx + c: \n";
    cout << "a = ";
    cin >> a;
    if (!cin) die();
    cout << "b = ";
    cin >> b;
    if (!cin) die();
    cout << "c = ";
    cin >> c;
    if (!cin) die();
    
    zeros(a, b, c);
    
    return 0;
}
