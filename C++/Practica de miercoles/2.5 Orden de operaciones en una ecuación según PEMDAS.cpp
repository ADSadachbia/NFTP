#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Devuelve la prioridad de un operador
int prioridad(char c) {
  if (c == '^') {
    return 3;
  } else if (c == '*' || c == '/') {
    return 2;
  } else if (c == '+' || c == '-') {
    return 1;
  } else {
    return 0; // si no es un operador, la prioridad es 0
  }
}

// Función para ordenar las operaciones de una ecuación según el orden PEMDAS
string ordenar_operaciones(string ecuacion) {
  string salida;
  stack<char> pila;

  for (int i = 0; i < ecuacion.length(); i++) {
    char c = ecuacion[i];

    if (isdigit(c) || isalpha(c)) { // si es un número o letra, agregar a la salida
      salida += c;
    } else if (c == '(') {
      pila.push(c);
    } else if (c == ')') {
      while (pila.top() != '(') {
        salida += pila.top();
        pila.pop();
      }
      pila.pop(); // eliminar el paréntesis izquierdo de la pila
    } else { // es un operador
      while (!pila.empty() && prioridad(c) <= prioridad(pila.top())) {
        salida += pila.top();
        pila.pop();
      }
      pila.push(c);
    }
  }

  while (!pila.empty()) { // agregar operadores restantes a la salida
    salida += pila.top();
    pila.pop();
  }

  return salida;
}

int main() {
  string ecuacion;

  cout << "Introduzca la ecuación: ";
  getline(cin, ecuacion);

  string ecuacion_ordenada = ordenar_operaciones(ecuacion);

  cout << "La ecuación ordenada es: " << ecuacion_ordenada << endl;

  return 0;
}

