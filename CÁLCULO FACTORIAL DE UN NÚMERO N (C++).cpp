#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;

    cout << "Ingrese un número: ";
    cin >> n;

    if (n < 0) {
        cout << "No se puede calcular el factorial de un número negativo." << endl;
    }
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "El factorial de " << n << " es: " << factorial << endl;
    }

    return 0;
}

