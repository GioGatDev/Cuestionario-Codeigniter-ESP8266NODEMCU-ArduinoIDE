# Cuestionario-Codeigniter-ESP8266NODEMCU-ArduinoIDE
Cuestionario codeigniter integrando respuestas desde ESP8266NodeMcu con ArduinoIDE
# Esquema de conexión
![Esquema](/Esquemas/Esquema.jpg)

# Consideraciones
-Dentro del archivo del programa en ArduinoIDE se cambia la IP de la ESP8266.
 En esta línea `IPAddress Ip(0,0,0,0);`
-Dentro de esta línea de código `<form action="http://IPESP/" method="get">` en los archivos de las preguntas de cambia por la **IP** que tiene asignada la tarjeta **ESP8266NODEMCU**
