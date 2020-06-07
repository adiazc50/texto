#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void encriptar(char texto[50]);
void desencriptar(char texto[50]);
void lecturaArchivo();
void desencriptaArch();


int main(int argc, char *argv[]){
  hola:
  int swd;
  char frase[50];
  char frase1[50];
  cout << endl << endl;
  cout << "1. Encriptar Frase\n2. Desencriptar Frase\n3.Encriptar texto\n4.Desencriptar texto\n5. Salir" << endl ;
  cin>>swd;
  cin.ignore();
  switch(swd){
    case 1:
     cout << "ingrese frase a encriptar: ";
      cin.getline(frase,50);
      encriptar(frase);
      cout << "la frase encriptada es: "<< frase<< endl;
      goto hola;
    break;

    case 2:
      cout << "ingrese frase a desencriptar: ";
      cin.getline(frase1,50);
      desencriptar(frase1);
      cout << "la frase desencriptada es: "<< frase1<< endl;
      goto hola;
    break;

    case 3:
      cout << "ingrese nombre de fichero a encriptar: ";
      lecturaArchivo();
      goto hola;
 break;
    case 4:
      cout << "ingrese nombre de fichero a desencriptar: " ;
      desencriptaArch();
      goto hola;
     break;
  case 5:
    break;

  }




  return 0;
}

void encriptar(char texto[50]){
  int i = 0;
  while(texto[i] != '\0'){
    texto[i] = texto[i]+2;
    i++;
  }
}
void desencriptar(char texto[50]){
  int i = 0;
  while(texto[i] != '\0'){
    texto[i] = texto[i]-2;
    i++;
  }
}

void lecturaArchivo(){


  ifstream archivo_entrada;
  ofstream archivo_salida;

  string linea;
  string linea1;
  int i=0;
  int k=0;

  string nombre_archivo;
  cin >> nombre_archivo;
  cin.ignore();
  archivo_entrada.open(nombre_archivo.c_str());
  archivo_salida.open("Earchivo.txt",ios::out);

  if(archivo_entrada.fail()){
    cout << "El archivo no se abrio correctamente" << endl;
  }
  if(archivo_salida.fail()){
    cout << "No se puede abrir el archivo"<< endl;
  }
  while(!archivo_entrada.eof()){
    getline(archivo_entrada,linea);
    cout << endl;

    while(linea[i]!= '\0'){
      linea[i] = linea[i]+2;
      archivo_salida<< linea[i];

      i++;
    }
    cout << linea << endl;
    i=0;
  }

  cout << endl << endl;

  archivo_entrada.close();
  archivo_salida.close();

}

void desencriptaArch(){

  ifstream archivo_entrada;
  ofstream archivo_salida;

  string linea;
  string linea1;
  int i=0;
  int k=0;

  string nombre_archivo;
  cin >> nombre_archivo;
  cin.ignore();
  archivo_entrada.open(nombre_archivo.c_str());
  archivo_salida.open("Darchivo.txt",ios::out);

  if(archivo_entrada.fail()){
    cout << "El archivo no se abrio correctamente" << endl;
  }
 if(archivo_salida.fail()){
    cout << "No se puede abrir el archivo"<< endl;
  }
  while(!archivo_entrada.eof()){
    getline(archivo_entrada,linea);
    cout << endl;

    while(linea[i]!= '\0'){
      linea[i] = linea[i]-2;
      archivo_salida<< linea[i];

      i++;
    }
    cout << linea << endl;
    i=0;
  }

  cout << endl << endl;

  archivo_entrada.close();
  archivo_salida.close();

}

