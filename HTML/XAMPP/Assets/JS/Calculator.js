
function addToDisplay(value) {
    document.getElementById("display").value += value;
  }
  
  function clearDisplay() {
    document.getElementById("display").value = "";
  }

  function calculate() {
    var expression = document.getElementById("display").value;
    var result = eval(expression);
    document.getElementById("display").value = result;
    if (esPrimo(result)) {
        alert("El resultado es un número primo");
    } else {
        alert("El resultado no es un número primo");
    }
}

function esPrimo(result) {
for (var i = 2; i <= Math.sqrt(result); i++) {
        if (result % i === 0) {
            return false;
        }
    }
    if (result <= 1) {
      return false;
  }
    return true;
}