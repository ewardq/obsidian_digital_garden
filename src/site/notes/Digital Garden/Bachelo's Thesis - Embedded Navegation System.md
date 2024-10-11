---
{"dg-publish":true,"permalink":"/digital-garden/bachelo-s-thesis-embedded-navegation-system/","noteIcon":"1"}
---

---
___This is the project I developed over the course of a year to get my Bachelor's degree. This project is still in Spanish and I have plans to overhaul and redo it with the experience I have gained through the few years I've been working as a professional and with that, translate my findings in English, that said, I hope you find something useful or learn something new along the way!___

---
## Abstract
The use of wheeled mobile robots has been the subject of research for several years along with the study of control algorithms suitable for activities that can become complicated for humans; one of these algorithms is the one that consists of a robot that traces a path when navigating and another that follows said path.
In the present work, a control algorithm is developed for leader-follower tracking, consisting of a mobile robot with Ackerman steering geometry taking the role of leader and a mobile robot with differential steering for the follower. The theory of the mathematical model used in the design of the controller, it’s implementation in software and the construction of the prototype in hardware are included.
For the development of the leader robot, a mid-range microcontroller is used, together with an ultrasonic sensor that detects and measures the distance between all objects that reflect sound and the robot so the later can avoid obstacles. To determine the position of the robot, incremental encoders were used together with the odometric equations given by its kinematics.
The orientation of the differential robot is controlled by a discrete PID algorithm which is implemented inside a medium-high range microcontroller. The feedback is provided by a gyroscope, who measures the angle of rotation in the X-Y axes.
The desired position of the follower robot is given by the trajectory received from the leader robot through the Bluetooth communication protocol.
The results in the simulation show that a simple controller is sufficient to follow the desired trajectory while also having no steady state error. The dynamics of the actuators in the simulation are given by the actuators used in the prototype, so implementable actuating signals were produced.

## Objetivo 
Desarrollar un sistema móvil terrestre de seguimiento líder-seguidor sin contacto físico entre ellos, utilizando microcontroladores de gama media, mediante un algoritmo de control PI discreto. 
- Desarrollar un módulo seguidor capaz de navegar mediante el control de su orientación.
- Desarrollar un algoritmo que permita realizar el seguimiento del módulo líder. 
- Implementar un sistema que permita que los módulos sean capaces de mantener una distancia relativa entre sí previniendo el contacto físico
- Seleccionar sensores específicos para la navegación de ambos módulos. 

## Desarrollo del móvil líder
Se realiza el diseño del robot móvil en el software Proteus, como sistema de control se cuenta con el microcontrolador PIC16F886 el cual se encarga de en ejecutar el procesamiento de la información adjunta en él. La figura 4.7 muestra el flujo de información del sistema del robot líder, el cual consta del microcontrolador como pieza central, tres sensores que envían información, los puentes H que reciben comandos y el transmisor de Bluetooth. 
![Diagrama de líder](https://user-images.githubusercontent.com/72580785/174125972-150ff72b-7bd1-46f5-b467-7f855e638316.png)
<p align="center">
  Figura 4.7 Diagrama a bloques del módulo líder.
</p>

## Desarrollo del móvil seguidor
Para este módulo móvil se cambian algunos componentes ya que este solo se guiaría del robot líder, pero necesita de una mayor cantidad de memoria respecto al microcontrolador del módulo móvil líder ya que en esta memoria se implementa el controlador PI y es indispensable obtener una rápida respuesta. La figura 4.15 ilustra que el módulo seguidor está constituido por un sensor que envía la aceleración que se convierte posteriormente en la orientación actual para la ley de control dentro del microcontrolador, el módulo bluetooth que envía la orientación deseada, y los motores que actúan como elementos finales de control.
![Diagrama de seguidor](https://user-images.githubusercontent.com/72580785/174129513-e9e78fa5-fbd8-4a03-a03d-53f2d41227e4.png)
<p align="center">
  Figura 4.15 Diagrama a bloques del móvil seguidor.
</p>

### Algoritmo seguidor
Se diseña el algoritmo del módulo seguidor de tal forma que la variable controlada sea la orientación del robot diferencial tal como se ilustra en la figura 4.33. En donde el robot seguidor recibe a través del módulo Bluetooth la orientación deseada, su posición actual es medida con el acelerómetro/giroscópico MPU6050 para luego enviar el comando de control hacia los motores, o bien, los actuadores.
![Algoritmo-seguidor](https://user-images.githubusercontent.com/72580785/174127072-ced03c71-d4f8-4e68-b0a6-a4794c3fb9c8.png)
<p align="center">
  Figura 4.33 Esquema del algoritmo del robot seguidor.
</p>

A continuación, se desarrollan los algoritmos del esquema anterior por partes.
La función que entrega la señal hacia los actuadores se llama “to_actuators(  )” y se construye con ayuda de la ecuación (2.4) como se muestra en el algoritmo 1.
![Algoritmo1](https://user-images.githubusercontent.com/72580785/174127650-27d9e5c8-e12a-49c6-bba2-529c5fa5ca44.PNG)

La función que entrega la orientación actual para su retroalimentación se llama “get_theta( )” y se construye con la ecuación (4.1) en el algoritmo 2.
![Algoritmo2](https://user-images.githubusercontent.com/72580785/174128167-991cbde4-5263-4f07-963d-9f8a34c6d26e.PNG)

El algoritmo control-seguidor del robot constituye el sistema de control completo, en donde se compara la posición actual con la posición deseada.
![Algoritmo3](https://user-images.githubusercontent.com/72580785/174128487-b78e293c-d175-469c-b92c-9fbe7e44a9f6.PNG)

### Simulación usada para la sintonización inicial del PI en el seguidor.
![image](https://user-images.githubusercontent.com/72580785/174938349-7ce4b808-48da-4a11-a6a5-7d9dfbddaec1.png)


## Prototipo móvil líder
**Dirección Ackermann:** El principio de Ackerman enuncia que cuando un móvil gira en una curva, los ejes de todas las ruedas deben concurrir en un punto, el centro instantáneo de rotación. La mangueta de la rueda interior debe de girar un ángulo mayor que la de la rueda exterior, luego se precisa una divergencia de las ruedas delanteras cuando se toman las curvas para evitar el desgaste de las cubiertas y evitar el deslizamiento. 
La posición [38] de un robot móvil con tracción Ackerman está dada por las coordenadas X,Y, la orientación del robot θ y el ángulo de inclinación de las ruedas ϕ como se ilustra en la figura 2.10.

<p align="center">
  <img width="420" height="325" src="https://user-images.githubusercontent.com/72580785/174132786-1aa3401b-b09b-42f1-a375-6af67c70c8aa.png">
</p>
<p align="center">
  Figura 2.10 Posición de un robot con dirección Ackerman.
</p>

Podemos representar la posición de un robot con dirección Ackerman con el vector 2.3.
<p align="center">
  <img width="200" height="150" src="https://user-images.githubusercontent.com/72580785/174133736-ee447cb1-1657-433e-b7a1-f70eb9fc2748.png">
</p>

### Esquemático

![image](https://user-images.githubusercontent.com/72580785/174130616-a0f76456-979e-47f1-a06e-9efc6f37b621.png)

### Tracción diferencial
La función de esta configuración es dividir por igual al par motor, transmitirlo a las ruedas al mismo tiempo que estos giren a diferentes velocidades si es necesario. Es decir, permite que la llanta de la derecha y de la izquierda giren a velocidades diferentes, según la curva que esté tomando el coche, esto significa que cuando un móvil toma una curva hacia la derecha, la rueda de este lado gira un recorrido más corto con respecto a la rueda izquierda, y lo mismo ocurre en el caso contrario.
La posición de un robot móvil con ruedas diferencial está dada por las coordenadas X,Y y la orientación θ del robot como se ilustra en la figura 2.8.

<p align="center">
  <img width="420" height="325" src="https://user-images.githubusercontent.com/72580785/174132235-c0c5f551-4ffd-42b6-a130-41aacb38ea0d.png">
</p>
<p align="center">
  Figura 2.8 Posición de un robot diferencial.
</p>

Entonces, podemos representar la posición q de un robot diferencial como el vector 2.2
<p align="center">
  <img width="200" height="150" src="https://user-images.githubusercontent.com/72580785/174132353-8cad9d7c-bd9f-413b-8146-91a17f89bce6.png">
</p>

### Esquemático

![image](https://user-images.githubusercontent.com/72580785/174130661-0bf7cb61-43a7-42ea-9f7c-06af3c7ae0f9.png)


---
## Resultados - Problema de seguimiento

Ahora, puesto que se requiere que el robot siga una trayectoria que constantemente cambia, se analiza la respuesta del sistema ante una rampa que empieza en 0 y termina en 180°. 

![image](https://user-images.githubusercontent.com/72580785/174938349-7ce4b808-48da-4a11-a6a5-7d9dfbddaec1.png)
<p align="center">
  Figura 5.8 Simulación para el problema de seguimiento 
</p>
Se observa que no tenemos error de seguimiento y el controlador sigue perfectamente la trayectoria deseada en la simulación.

![Results-Graph.png](/img/user/Digital%20Garden/Icons-and-images/Results-Graph.png)
<p align="center">
  Figura 5.9 Evolución de la posición del robot para el problema de seguimiento
</p>
El robot traza una vuelta amplia para poder seguir el set-point. Los motores aumentan su velocidad gradualmente hasta llegar a la velocidad máxima y así formar una trayectoria elipsoidal.

![Results trayectory.png](/img/user/Digital%20Garden/Icons-and-images/Results%20trayectory.png)
<p align="center">
  Figura 5.10 Velocidad de los actuadores y trayectoria del robot para problema de seguimiento.
</p>

### Conclusiones

A continuación, se presenta una lista de las actividades que cumplieron con los objetivos específicos: 
- Se logró crear el prototipo dos robots móviles, con sus respectivas plataformas de desarrollo que pueden ser reprogramados con facilidad permitiendo hacer pruebas y extraer información recabada en campo. 
- Se cumplió con el objetivo de prevenir contacto físico entre ambos módulos con el algoritmo de control PI discreta implementada en el módulo móvil seguidor tomando en cuenta su dinámica y las limitaciones del hardware con respecto al medio que lo rodea. 
- Los sensores seleccionados y empleados recabaron la información necesaria para cumplir el objetivo general. 
- Se cumplió el objetivo de que el móvil diferencial siga al móvil líder a pesar de las incertidumbres originadas por el hardware y el terreno donde se realizaron las pruebas. 

Los experimentos realizados en campo con el prototipo demuestran la complejidad de la etapa de comunicación, la falla al censar la distancia en puntos ciegos y la dificultad en la que el módulo móvil líder se desplaza en la superficie, por lo qué: 
- Se sugiere optimizar la transmisión de datos con el mismo protocolo de comunicación. 
- Se sugiere implementar más sensores ultrasónicos que puedan detectar obstáculos en los puntos ciegos que un solo sensor no puede detectar. 
- Se propone una modificación en el sistema de tracción, como utilizar otras llantas y/o un sistema de suspensión para las llantas.

