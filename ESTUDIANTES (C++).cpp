#include <iostream>
using namespace std;

int main() {
    int N, edad, contador = 0;
    float peso, sumaEdades = 0, sumaPesos = 0;
    float promedioEdad, promedioPeso;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;

    while (contador < N) {
        cout << "Ingrese la edad del estudiante " << contador + 1 << ": ";
        cin >> edad;

        cout << "Ingrese el peso del estudiante " << contador + 1 << ": ";
        cin >> peso;

        sumaEdades += edad;
        sumaPesos += peso;
        contador++;
    }

    promedioEdad = sumaEdades / N;
    promedioPeso = sumaPesos / N;

    cout << "La edad promedio es: " << promedioEdad << endl;
    cout << "El peso promedio es: " << promedioPeso << endl;

    return 0;
}
