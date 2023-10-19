#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, S;
    int n, i;

    // Спосіб 1: while
    P = 1;
    n = 1;
    while (n <= 10) {
        S = 0;
        i = 1;
        while (i <= n) {
            S += pow(1. * i, 2);
            i++;
        }
        P *= S / n;
        n++;
    }
    cout << "Спосіб 1: " << P << endl;

    // Спосіб 2: do-while
    P = 1;
    n = 1;
    do {
        S = 0;
        i = 1;
        do {
            S += pow(1. * i, 2);
            i++;
        } while (i <= n);
        P *= S / n;
        n++;
    } while (n <= 10);
    cout << "Спосіб 2: " << P << endl;

    // Спосіб 3: for
    P = 1;
    for (n = 1; n <= 10; n++) {
        S = 0;
        for (i = 1; i <= n; i++) {
            S += pow(1. * i, 2);
        }
        P *= S / n;
    }
    cout << "Спосіб 3: " << P << endl;

    // Спосіб 4: for (зворотний)
    P = 1;
    for (n = 10; n >= 1; n--) {
        S = 0;
        for (i = n; i >= 1; i--) {
            S += pow(1. * i, 2);
        }
        P *= S / n;
    }
    cout << "Спосіб 4: " << P << endl;

    return 0;
}
