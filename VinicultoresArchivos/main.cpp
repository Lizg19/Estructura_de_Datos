#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream archivoUvas;
    string nombreArchivo;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombreArchivo);

    archivoUvas.open(nombreArchivo.c_str(), ios::app);

  char tipoUva;
  int tamanioUva, kilos;
  float precioInicial, precioFinal;

  archivoUvas << "ASOCIACION DE VINICULTORES\n";
  cout << "Ingrese el precio por kilo de Uva: ";
  cin >> precioInicial;
  cout << "¿Cuantos kilos se Produjeron? ";
  cin>> kilos;
  cout << "Ingrese el tipo de uva (A/B): ";
  cin >> tipoUva;
  cout << "Ingrese el tamaño de uva (1/2): ";
  cin >> tamanioUva;
  archivoUvas << "\tPrecio por kilo de uva: " << precioInicial << " \n";
  archivoUvas << "\tTipo de uva: " << tipoUva << " \n";
  archivoUvas << "\tTamaño de uva: " << tamanioUva << " \n";
  archivoUvas << " \tPrecio Inicial: " << kilos*precioInicial << " $ \n" ;

  if (tipoUva=='A'){
    if(tamanioUva==1){
      precioFinal= (kilos*precioInicial)+0.20;
      archivoUvas << "\tPrecio Final: " << precioFinal<<" $ \n";
    } else {
     precioFinal= (kilos*precioInicial)+0.30;
      archivoUvas << "\tPrecio Final: " << precioFinal<< " $ \n";
    }

  } else {
    if(tamanioUva==1){
      precioFinal= (kilos*precioInicial)-0.30;
      archivoUvas << "\tPrecio Final: " << precioFinal<< " $ \n";
    } else {
      precioFinal= (kilos*precioInicial)-0.50;
      archivoUvas << "\tPrecio Final: " << precioFinal<< " $ \n";
    }
  }
  archivoUvas.close ();

  ifstream lectura;
  string texto;

   lectura.open(nombreArchivo.c_str(), ios::in);
       while (!lectura.eof()){
        getline(lectura,texto);
        cout << texto << endl;
       }
   lectura.close ();

  return 0;
}
