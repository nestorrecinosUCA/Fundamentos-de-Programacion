#include <iostream>
using namespace std;
int bisiesto(int year_recived){
    //evaluar si el residuo del año entre 400 es 0, si es asì, es bisiesto
    if(year_recived%400 == 0){
        cout << year_recived << " es bisiesto." << endl;
    }//Sino, evaluar si es divisible entre 400 y no divisible entre 100, asi es bisiesto
    else if(year_recived%4 == 0 && year_recived%100 != 0){
        cout << year_recived << " es bisiesto." << endl;
    }else{
        //Sino, devolver que no es bisiesto
        cout << year_recived << " no es bisiesto" << endl;
    }

    return 0;
}
int main(){
    //Variable para el año
    int year;
    //solicitar año
    cout << "Ingrese un año: "; cin >> year;
    //Llamar la funcion
    bisiesto(year);

    return 0;
}