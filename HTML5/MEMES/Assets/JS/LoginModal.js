const botonRegistro = document.querySelector(".boton");
const modal0= document.querySelector(".modal");
const login = document.querySelector(".login-boton");


//  const cerrar = (e) => {
//      e.target = document.querySelector('cerrar').style.visibility = 'hidden'
// }

botonRegistro.addEventListener("click", (e) =>  
    (e.target = document.querySelector(".modal").style.visibility = 'visible')

    );


login.addEventListener("click", (e)=> 
(e.target = document.querySelector(".modal-login").style.visibility = 'visible'))