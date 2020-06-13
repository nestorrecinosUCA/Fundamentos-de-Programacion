#include <iostream>
#include <time.h>
using namespace std;
int main(){
    int num, counter = 5; //Variables para recibir numeros y acumular conteo
    srand(time(NULL));//crear un numero aleatorio, es necesaria la libreria "time.h"
    int numRandom = 1 + rand() % 100;//Variable que guarda el numero aleatorio
    cout << "Si ya no desea jugar, escriba 101 en cualquier momento.\nTienes 5 intentos\n";
    while(num != numRandom){//Iterar mientras el numero no sea igual al numero aleatorio
        cout << "Ingrese un numero entre 1 y 100: "; cin >> num;
        counter--;//decrementar uno por intento  
        cout << "Te quedan " << counter << " intentos\n";
        if (num == numRandom){//Si el numero es identico, finalizar el bucle, felicitando al usuario
        cout << "¡Felicidades, adivinaste el numero " << numRandom << "! \n";
        //cout << "Acertaste con " << counter << " intentos.\n";
        }
        else if(counter == 0){//O, si el contador es 0, detener el bucle
            num = numRandom;
        }else if (num == 101){ //O, si el usuario escribe el numero para detener el bucle, este se detiene
            cout << "Gracias por jugar :D. ¡Te esperamos pronto!";
            num = numRandom;
        }else if(num > 101){//O, si el numero es mayor a 101, devolver que no esta en el rango
            cout << "Ese numero no se encuentra en el rango :(\n";
        } 
    }
}