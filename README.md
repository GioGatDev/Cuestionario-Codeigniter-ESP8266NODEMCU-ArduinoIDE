# Cuestionario-Codeigniter-ESP8266NODEMCU-ArduinoIDE
Cuestionario codeigniter integrando respuestas desde ESP8266NodeMcu con ArduinoIDE
# Esquema de conexión
![Esquema](/Esquemas/Esquema.jpg)

# Consideraciones
- Dentro del archivo del programa en ArduinoIDE se agrega la IP de la ESP8266 y del router, así como también la máscara de subred.
    - En estas líneas
    ```c++
 IPAddress Ip(0,0,0,0);
 IPAddress Gateway(0,0,0,0);
 IPAddress Subnet(0,0,0,0);
 ```
- Dentro de esta línea de código
```html
<form action="http://IPESP/" method="get">
```
 en los archivos de las preguntas de cambia por la **IP** que tiene asignada la tarjeta **ESP8266NODEMCU**
