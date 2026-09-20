#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  stack<char> pila;
  string ecuacion = "3+4*2/(1-5)^2";

  for (char c : ecuacion) {
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

