#include <iostream>

using namespace std;

int main (){

    float angulo1 = 0.00;
    float angulo2 = 0.00;
    float Respuesta = 0.00;
    
    cout << "Ingrese el primer angulo: \n";
    cout << "Progrma para calcular el tercer angulo de un triangulo a partir de dos angulos. \n";
    cin >> angulo1;

    cout << "Ingrese el segundo angulo: \n";
    cin >> angulo2;

    if((angulo1<0 || angulo2<0) || (angulo1>180 || angulo2>180)){

        cout << "Uno de los valores ingresados no estan permitido \n";

    }
    else {

    Respuesta = 180 - angulo1 - angulo2;

    cout << "Su tercer angulo es. \n"<<Respuesta << "\n";
          }


    return 0;
}