#include<iostream>
using namespace std;

//Declaracion de la estructura
const int lengthString = 20;
    struct {
        char itemName[lengthString+1][100];
        int quantity[100];
        float price[100];
        float priceForItem[100];
    } itemsCost;//nombre de la estructura
//Funcion que recibe los datos basicos del producto a traves de iteraciones
void takingData(int number){
    int counter = 0;
    cout << "Ingrese el nombre, precio y cantidad del producto: " << endl;
    for (int i = 0; i < number; i++){
        counter++;
        cout << "Producto " << counter << ": "; cin >> itemsCost.itemName[i];
        cout << "Cantidad: "; cin >> itemsCost.quantity[i];
        cout << "Precio: $"; cin >> itemsCost.priceForItem[i];
        cout << "..................................." << endl;
    }
    cout << endl;
    return;
}
//Funcion para agregar el valor de la multiplicacion del costo unitario por la cantidad
void addingCostsByItem(int number){
    for (int i = 0; i < number; i++){
        itemsCost.price[i] = itemsCost.quantity[i] * itemsCost.priceForItem[i];
    }
    return;
}
//Funcion que imprime toda la informacion recibida en los arreglos a traves de iteraciones
void showData(int number){
    int counter = 0;
    cout << "Listado de productos: " << endl;
    for (int j = 0; j < number; j++){
    counter++;
    cout << "Producto " << counter << ": " << itemsCost.itemName[j] << " | ";
    cout << "Cantidad: " << itemsCost.quantity[j] << " | ";
    cout << "Costo: $" << itemsCost.priceForItem[j] << " | ";
    cout << "Costo total: $" << itemsCost.price[j] << endl;
    cout << "-------------------------------------------------------------" << endl;
    }
}
//Funcion que sumara los precios totales para brindar un total
float sum(int number){
    float finalSum = 0;
    for(int i = 0; i < number; i++){
        finalSum += itemsCost.price[i];
    }
    cout << "Cobro final: $" << finalSum << "\n.\n.\n.\n.";
    return 0;
}
//Funcion main
int main(){
    
    int number;//Variable que solicitara el numero de productos;
    cout << "Ingrese el numero de productos a revisar: "; cin >> number;
    //Llamar funciones
    takingData(number);
    addingCostsByItem(number);
    showData(number);
    sum(number);  
}