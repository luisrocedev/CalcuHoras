#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> horas(5);
    double salarioPorHora;
    double totalHoras = 0;
    double totalGanado = 0;

    cout << "Calculadora de Horas Trabajadas y Salario (5 días)" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Introduce las horas trabajadas en el día " << (i+1) << ": ";
        cin >> horas[i];
        totalHoras += horas[i];
    }
    cout << "Introduce el salario por hora: ";
    cin >> salarioPorHora;

    totalGanado = totalHoras * salarioPorHora;

    cout << "\nResumen semanal:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Día " << (i+1) << ": " << horas[i] << " horas" << endl;
    }
    cout << "Total de horas trabajadas: " << totalHoras << endl;
    cout << "Salario por hora: " << salarioPorHora << endl;
    cout << "Total ganado en la semana: " << totalGanado << endl;

    return 0;
}
