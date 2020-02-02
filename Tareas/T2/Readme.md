# TDA Moneda
## Clase Moneda
### Variables de la clase Moneda
 - Nombre que seria una cadena de caracteres
 - Cantidad que es un numero entero positivo
### Operaciones de la Clase Moneda
 - agregarMoneda
  * Parametros
   - nombre1 que seria una cadena de caracteres
   - cantidad1 que seria un entero positivo
  * Accion: Creara la moneda que nosotros queramos
 - Set's y Get's
  * Set's: para dar modificar los valores de las variables nombre y cantidad
  * Get's: para obtener el valor de las variables nombre y cantidad
## Clase Usuario
### Variables de la clase Usuario
 - id que seria un entero positivo
 - nombre que seria una cadena de caracteres
 - cantidad que seria un entero positivo
### Operaciones de la clase Usuario
 - agregarUsuario
  * Parametros
   - id1 que seria un entero positivo
   - nombre1 que seria una cadena de caracteres
   - cantidad1 que seria un entero positivo
  * Accion: Creara un usuario con la cantidad de moneas 0
 - Set's y Get's
  * Set's: para dar modificar los valores de las variables id, nombre y cantidad
  * Get's: para obtener el valor de las variables id, nombre y cantidad
## Programa Monedas
### Menu
 - Crear Moneda: se creara la moneda pidiendole nombre y cantidad de monedas
 - Crear usuario: se creara un usuario pidiendole nombre y cantidad, el id se asignara automaticamente
 - Transferencia de monedero a usuario: le pedira el id de un usuario y la cantidad que queire transferiri (no  puede ser mayor a la cantidad en monedero)
 - Transferencia de usuario a usuario: le pedira el id del usuario que transferira las monedas, el id del usuario  que recibira las monedas (el usuario que recibira no puede ser el mismo que transferira) y la cantidad de  monedas (la cantidad de monedas que transferira no debe ser mayor a la cantidad que tiene el usuario que  transerira las monedas)
## Nota: El programa esta hecho para soportar un maximo de 10 usuarios