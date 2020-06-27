#include<iostream> 
using namespace std;
float average(float data[25], float total){
    //float average;
    int counterOver = 0, counterUnder = 0;
    //average = total / 25;

    for(int j = 0; j < 25; j++){
        if(data[j] > total)
            counterOver++;
        else if(data[j] < total)
            counterUnder++;
    }

    cout.precision(3);
    cout << "El promedio de estaturas es: " << total << " m" << endl;
    cout << "Hay " << counterOver << " estaturas arriba del promedio" << endl;
    cout << "Tambien hay " << counterUnder << " estaturas por debajo del promedio.\n";

    return 0;
}

int main(){
    float students[25], total;
    
    cout << "Ingrese la estatura de los 25 alumnos en metros: " << endl;
    for (int i = 0; i < 25; i++)
    {
        cout << "Alumno " << i + 1 << ": "; cin >> students[i];
        total = total + (students[i]/25);
    }
    average(students, total);
    return 0;
}