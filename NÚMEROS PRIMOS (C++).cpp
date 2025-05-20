#include <iostream>
using namespace std;

int main() {
    int num;
    bool esPrimo = true;

    cout << "Ingrese un número: ";
    cin >> num;

    if (num <= 1) {
        cout << "No es un número primo." << endl;
    }
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            cout << "Es un número primo." << endl;
        }
        else {
            cout << "No es un número primo." << endl;
        }
    }

    return 0;
}

