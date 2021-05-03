#include <iostream>

using namespace std;

// Funciones
//
// Matemáticamente:
// f(x) = x + 2
//
// Evaluando x = 4:
// f(4) = 6
//
// entrada -> 4 -> x
// salida -> 6 -> y
//
// En programación:
//
// int sumaDos(int x){
//   return x + 2;
// }
//
// Evaluando x = 4:
// cout << sumaDos(4) << endl;
//
// Tipos de retorno:
//
//   - void (vacío)
//   - int
//   - string
//   - char
//   - float
//   - double

// 1. Declaración: tipo nombreFuncion(parametro_1, parametro_2, ...)
// 2. NOTA: el tipo de la función es el valor de retorno de la misma
// 3. NOTA: una función puede recibir parámetros por valor o
// por referencia; para pasar por referencia se usan punteros.
// 4. NOTA: una función que recibe parámetros por valor solo puede
// retornar un solo valor. Para retornar múltiples valores se deben
// usar parámetros por referencia.

void imprimeSuma(int numero_1, int numero_2){ // función tipo vacío

  // Inicio del cuerpo de la función

  int suma = numero_1 + numero_2;
  cout << "Función 'imprimeSuma': " << suma << endl;

  // Fin del cuerpo de la función

  // NOTA: debido a que la función es tipo vacío, no retorna
  // valor alguno.

}

int suma(int numero_1, int numero_2){ // función tipo número entero

  int suma = numero_1 + numero_2;
  return suma; // regresa la variable 'suma', quien es un número entero

}

void imprimeMensaje(){ // función tipo vacío
  cout << "Hola mundo" << endl;
}

string tomarMensaje(){ // función tipo string

  string mensaje = "Hola mundo";
  return mensaje;

}

// Sobrecarga de funciones

string unirPalabras(string palabra_1, string palabra_2){ // función tipo string
  return palabra_1 + palabra_2;
}

string unirPalabras(string palabra_1, string palabra_2, string palabra_3){ // función tipo string

  string palabra = palabra_1 + palabra_2 + palabra_3;
  return palabra;

}

int main(){

  int num_1, num_2;

  cin >> num_1;
  cin >> num_2;

  imprimeSuma(num_1, num_2); // Llamada a la función -> nombreFuncion(argumento_1, argumento_2, ...)
  cout << "Función 'suma': " << suma(num_1, num_2) << endl;

  imprimeMensaje();
  string miMensaje = tomarMensaje();
  cout << "Este es mi mensaje: " << miMensaje << endl;

  cout << "Unir dos palabras: " << unirPalabras("Uno Dos") << endl;
  cout << "Unir tres palabras: " << unirPalabras("Uno ", "Dos ", "Tres") << endl;

  return 0;

}
