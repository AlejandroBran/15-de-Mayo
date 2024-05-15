#include <iostream>

using namespace std;

int main (){

    

    float corto1 = 0.00 ;
    float corto2 = 0.00;
    float parcial1 = 0.00;
    float parcial2 = 0.00;
    float laboratorio = 0.00;
    float proyecto = 0.00;
    float notapromedio = 0.00;

    cout << "Ingrese la nota del corto1: \n";
    cin >> corto1;

    cout << "Ingrese la nota del corto2: \n";
    cin >> corto2;

    cout << "Ingrese la nota del parcial1: \n";
    cin >> parcial1;

    cout << "Ingrese la nota del parcial2: \n";
    cin >> parcial2;

    cout << "Ingrese la nota del laboratorio: \n";
    cin >> laboratorio;

    cout << "Ingrese la nota del pryecto: \n";
    cin >> proyecto;

    notapromedio =((corto1 * 0.10 )+(corto2 *0.20)+(parcial1 *0.15)+(parcial2 * 0.20)+(laboratorio * 0.20)+(proyecto * 0.25));

    cout << "Su nota final es. \n" <<notapromedio << "\n";

    if(notapromedio>=6 && notapromedio <= 10){

        cout << "Excelente has aprobado las materias. \n";
    }else if ((notapromedio>= 0 && notapromedio<6) || (notapromedio > 10)){
        cout << "Sigue esforzandote tu puedes. \n";
    }
    else {
        cout << "Error de calificación. \n";
    }

    return 0;
}