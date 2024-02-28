//4. Escribe un programa en C++ que calcule la raíz cuadrada de un número ingresado por el usuario
//   utilizando la función sqrt() de la biblioteca cmath. Asegúrate de incluir la biblioteca correspondiente.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double numero;
	
	cout<<"Ingrese un numero para calcular su raiz cuadrada: ";
	cin>>numero;
	
	cout<<"-------- RESULTADO ----------" << endl;
	
	cout<<"La raiz cuadra de " << numero <<" es igual a: " <<sqrt(numero) <<endl;
}
