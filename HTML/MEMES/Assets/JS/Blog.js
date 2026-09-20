document.addEventListener("DOMContentLoaded", function(e){

    const parrafos = document.querySelectorAll('.description');
   let alturas = [];
   let alturaMax = 0;

  const aplicarAlturas = ()function(aplicarAlturas(){
    
     parrafos.forEach(parrafo =>{

          if(alturaMax == 0){
          alturas.push(parrafo.clientHeight);
        }else{
          parrafo.getElementByClassName.height = alturaMax + "px";
    }
});

})();

alturaMax = parrafo.clientHeight = Math.max.apply(Math, alturas);

aplicarAlturas();

});