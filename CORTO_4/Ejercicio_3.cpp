#include<iostream>
using namespace std;
float scoresProcess(int n){
    float finalScores[40], scores[40][5];
    cout << "Ingrese el numero de estudiantes: "; cin >> n;
    cout << "Ingrese las 5 notas de cada estudiante.\n";

    for (int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cout << "Ingrese la nota " << j+1 << " del estudiante " << i+1 << " ";
            cin >> scores[i][j];
        }
        cout << "\n";
    }
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < 5; l++)
        {
            finalScores[k] = finalScores[k] + (scores[k][l] * (0.20));
        }
    }
    for (int m = 0; m < n; m++)
    {
        if (finalScores[m] >= 6){
            cout.precision(3);
            cout << "El estudiante " << m+1 << " paso la materia con " << finalScores[m] << endl;}
        else{
            cout.precision(3);
            cout << "El estudiante " << m+1 << " dejo la materia con " << finalScores[m] << endl;}
    }

    return 0;
}

int main(){
    int n;
    scoresProcess(n);  
    return 0;
}