/* Elabore una función que retorne un valor booleano, ​ true o ​ false , ​ que 
indique si un año es bisiesto o no. Para determinar si un año es bisiesto se
hacen un máximo de dos pruebas, así: si el año es divisible entre 400, es
bisiesto; pero si no es divisible entre 400 se realiza la siguiente prueba: que
el año sea divisible entre 4 y no sea divisible entre 100; si tampoco cumple
esta segunda prueba, entonces no es bisiesto. De acuerdo al valor booleano
retornado, imprima un mensaje que indique si el año es o no bisiesto. */
#include<iostream>
using namespace std;
int bisiesto(int year){
    if(year%400 == 0){
        cout << "El año es bisiesto. :D\n";
    }else if ((year%4 == 0) && (year%100 != 0)){
        cout << "El año es bisiesto. :D\n";
    }else{
        cout << "El año no es bisiesto. :(\n";
    }

    return 0;
}
int main(){
    int y;

    cout << "Ingrese un año: "; cin >> y;
    bisiesto(y);
    return 0;
}