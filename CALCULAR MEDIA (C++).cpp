#include <iostream>
using namespace std;

int main() {
    int N;
    float numero, suma = 0, media;

    cout << "¿Cuántos números vas a ingresar? ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Ingresa el número " << i << ": ";
        cin >> numero;
        suma += numero;
    }

    media = suma / N;

    cout << "La media es: " << media << endl;

    return 0;
}
