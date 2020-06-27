#include<iostream>
#include<string.h>
using namespace std;
//Funcion
void translate(int longitud, char batCode[], string word){
    for (int i=0; i < longitud ; i++) {  //hola  --> H967
        if(word[i] == 'M' || word[i] == 'm')
            word[i] = batCode[0];
        else if(word[i] == 'U' || word[i] == 'u')
            word[i] = batCode[1];
        else if(word[i] == 'R' || word[i] == 'r')
            word[i] = batCode[2];
        else if(word[i] == 'C' || word[i] == 'c')
            word[i] = batCode[3];
        else if(word[i] == 'I' || word[i] == 'i')
            word[i] = batCode[4];
        else if(word[i] == 'E' || word[i] == 'e')
            word[i] = batCode[5];
        else if(word[i] == 'L' || word[i] == 'l')
            word[i] = batCode[6]; 
        else if(word[i] == 'A' || word[i] == 'a')
            word[i] = batCode[7];
        else if(word[i] == 'G' ||  word[i] == 'g')
            word[i] = batCode[8];
        else if(word[i] == 'O' || word[i] == 'o')
            word[i] = batCode[9];
        else if(word[i] == '-' || word[i] == '_')
            word[i] = ' ';
    }
cout << word << endl;
}


int main(){
char batCode[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; //Codigo MURCIELAGO
string word;
cout << "Ingrese una palabra; Si es una cadena, unirlas por un - o _ :"; cin >> word;
int longitud = word.length();


    translate(longitud, batCode, word);
return 0;
}