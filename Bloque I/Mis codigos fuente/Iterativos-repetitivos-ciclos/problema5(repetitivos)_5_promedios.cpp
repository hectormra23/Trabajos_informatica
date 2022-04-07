#include <iostream>

using namespace std;

int main()
{
    int calificacion = 0;
    int contador = 0;

    do {
        cout << "\nIntroduzca calificacion: ";
        cin >> calificacion;

        if (calificacion != 0) {
            if (calificacion >= 5 && calificacion <= 10) {
                //Calificación es válida
                contador++; //Contamos la calificación introducida
            }
            else
                cout << "Calificacion no es válida, solo valores entre 5 y 10\n";
        }
        else //Ha introducido 0, fin del bucle
            cout << "\nFin de lectura de calificaciones\n";
    } while (calificacion != 0);

    //Resultados
    cout << "\nCalificaciones introducidas: " << contador;

    cout << "\n\t\tFIN DE PROGRAMA";
}
