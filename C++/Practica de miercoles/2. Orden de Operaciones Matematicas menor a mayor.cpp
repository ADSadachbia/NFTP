#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  stack<char> pila;
  string ecuacion = "3+4*2/(1-5)^2";
  int n = ecuacion.length();

  for (int i = 0; i < n; i++) {
    char c = ecuacion[i];
    if (c == '(' || c == '+' || c == '-' || c == '*' || c == '/') {
      pila.push(c);
    } else if (c == ')') {
      while (pila.top() != '(') {
        cout << pila.top() << " ";
        pila.pop();
      }
      pila.pop(); // eliminar el paréntesis izquierdo de la pila
    } else { // c es un número
      cout << c << " ";
    }
  }

  while (!pila.empty()) {
    cout << pila.top() << " ";
    pila.pop();
  }

  cout << endl;
  return 0;
}

