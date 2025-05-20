#include <iostream>
using namespace std;

int main() {
    int N, totalPacientes = 0;
    int cantidadHombres = 0, cantidadMujeres = 0;
    char sexo;
    float porcentajeHombres, porcentajeMujeres;

    cout << "Ingrese la cantidad de pacientes: ";
    cin >> N;

    while (totalPacientes < N) {
        cout << "Ingrese el sexo del paciente (M para masculino, F para femenino): ";
        cin >> sexo;

       
        if (sexo == 'M' || sexo == 'm') {
            cantidadHombres++;
        }
        else if (sexo == 'F' || sexo == 'f') {
            cantidadMujeres++;
        }
        else {
            cout << "Sexo no válido. Ingrese M o F." << endl;
            continue; // Repite este paciente sin aumentar el contador
        }

        totalPacientes++;
    }

    porcentajeHombres = (float)cantidadHombres / N * 100;
    porcentajeMujeres = (float)cantidadMujeres / N * 100;

    cout << "Porcentaje de hombres en el grupo: " << porcentajeHombres << "%" << endl;
    cout << "Porcentaje de mujeres en el grupo: " << porcentajeMujeres << "%" << endl;

    return 0;
}
