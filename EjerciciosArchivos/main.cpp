#include <iostream>
#include <fstream>
using namespace std;
void menu();
void ingresarDatos ();
void impresion(string a,string b, int c);
void piramide();

int main()
{

    int numero;
    do{
    menu ();
    cout << "Elija una opcion: ";
    cin >> numero;

    switch (numero){
    case 1:

        ingresarDatos();
        break;
    case 2:
        piramide();
        system("pause");
        break;
    }
    } while ( numero !=3);

    return 0;
}
void menu(){
    cout << "1. Datos Personales" << endl;
    cout << "2. Piramide invertida" << endl;
    cout << "3. Salir " << endl;

}
void ingresarDatos (){
string nombre;
string apellido;
    int e ;
    char r;

    ofstream archivoPrueba;
    string nombreA;
    cout << "Ingrese el nombre del archivo: ";
    cin >> nombreA;
    cin.ignore();
    archivoPrueba.open(nombreA.c_str(), ios::app);

    do{
            cout << " \tIngrese el nombre: ";
           cin >> nombre;
            cin.ignore();
            cout << "\tIngrese el apellido: ";
            cin >> apellido;
            cout << " \tIngrese la edad: ";
            cin >> e;

            archivoPrueba << nombre << " " << apellido << "    " << e << endl;

            cout << "Desea agregar otro contacto? (s/n): ";
            cin >> r;
            cin.ignore();


    }while (r=='s');
archivoPrueba.close ();


   ifstream archivoL;
   string texto;
   archivoL.open(nombreA.c_str(), ios::in);
       while (!archivoL.eof()){
            archivoL>> nombre >> apellido>> e;
            if (!archivoL.eof()){
                getline(archivoL,texto);
                impresion (nombre, apellido,e);
            }
       }

archivoL.close ();


}
void impresion(string a,string b, int c){
    cout << "********************" << endl;
    cout << "Nombre: " <<  a << endl;
    cout << "Apellido: " << b << endl;
    cout << "Edad: " <<  c << endl;
    cout << "********************" << endl;

}
void piramide()
{

    int tam=0;
    ofstream triangulo;
    string nombreArchivo;
    cout << "Ingrese el nombre del archivo: ";
    cin >> nombreArchivo;
    triangulo.open(nombreArchivo.c_str(), ios::out );
    cout << "Ingrese el numero de filas: ";
    cin >> tam;
    fflush(stdin);

for (int j = 0; j < tam; j++) {
        for (int i = 0; i < tam-j; ++i)
        if (j%2==0 ){
            triangulo << "*";
        }
        else {
            triangulo << "-";
        }
        triangulo << endl ;
    }

      triangulo.close ();

ifstream archivoLectura;
string texto;
   archivoLectura.open(nombreArchivo.c_str(), ios::in);
       while (!archivoLectura.eof()){
        getline(archivoLectura,texto);
        cout << texto << endl;
       }


   archivoLectura.close ();

}
