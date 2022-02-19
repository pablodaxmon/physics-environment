# Entorno de simulación física básica!

Entorno de simulación física básica es un software aun en desarrollo por la UMSS.

## Estado actual

-   Implementado un interfaz gráfico usando QT satisfactoriamente
    
-   Librería box2D implementada.
    
-   Acciones para controlar objetos desarrolladas.
    
-   Algoritmos para controlar la vida de la simulación desarrollados.
    
-   Implementado un sistema de guardado en disco para almacenar sesiones.
    
-   Implementado el graficador de resultados a falta de pruebas.



###  Clases importantes:
#### Actor: 
Representa un objeto real, contiene todos los métodos y variables necesarios para modelar un objeto de la vida real

#### ActorSystem
Contiene todos los actores de la simulación, contiene los métodos para crear, editar y eliminar actores

#### Action
Un 'action' es un evento dentro de la simulación que controla los actores. por ejemplo: "Aplicar fuerza en el segundo 10"

#### ActionsSystem
Almacena todas las acciones de la simulación, y las ejecuta en el momento preciso.


