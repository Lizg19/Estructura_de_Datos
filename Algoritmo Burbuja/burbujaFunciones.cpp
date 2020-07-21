#include <iostream>

using namespace std;
void ingresar (int a[], int n); //prototipos
void imprimir (int a[], int n);
void burbuja (int a[], int n);

int main() {
	int arreglo[100];
	int n;
	cout << "Ingrese el tamanio: ";
	cin >>n;
		ingresar(arreglo, n);
		cout << endl;
		imprimir (arreglo, n);
		cout << endl;
		burbuja(arreglo, n);
		cout << endl;
		imprimir (arreglo, n);
	return 0;
}

void ingresar (int a[], int n) 
{
		for (int i=0;i<n;i++){
			cout << "Ingrese el elemento del arreglo " << i+1 << ": ";
		cin>> a[i];
	}
	
}
void imprimir (int a[], int n)
{
	for (int i=0;i<n;i++){
	cout << a[i];
	}
}
void burbuja (int a[], int n)
{
	int aux;
	 for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if(a[j]< a[i]){
                aux= a[i];
                a[i]=a[j];
                a[j]= aux;
            }
        }
    }
}
