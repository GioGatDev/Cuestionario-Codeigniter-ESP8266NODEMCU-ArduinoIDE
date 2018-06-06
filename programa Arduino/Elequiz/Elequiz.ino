#include <ESP8266WiFi.h>
#include <WiFiClient.h> 
void setup() {
  //---------------Configuración de la Red--------------//
  const char* ssid = ""; //SSID
const char* password = "";//PASS
int contconexion = 0;
//----------------------------------------------------//
//pines para las luces//
const int luzverde = 16;
const int luzroja = 5;
//----------------------//
// Declaracion del objeto que actua como servidor y configura 
// el puerto 80 que es la que respondera a solicitudes HTTP
WiFiServer server(80);
//-------------Declaración de la clase para realizar la conexión--//
void connectWiFi()
{
  WiFi.mode(WIFI_STA); //para que no inicie solamente en modo estación
  WiFi.begin(ssid, password);// toma los valores de las variables del ssdi y el password
  while (WiFi.status() != WL_CONNECTED and contconexion <50) { //Cuenta hasta 50 si no se puede conectar lo cancela
    ++contconexion;
    Serial.print(".");
    delay(500);
  }
  if (contconexion <50) {
      //Se declara una ip fija para asignarla de manera estática
      IPAddress Ip(0,0,0,0); //se cambian los ceros por una ip dentro de la red
      IPAddress Gateway(0,0,0,0);//se cambian los ceros por la ip del gateway 
      IPAddress Subnet(0,0,0,0);//se cambian los ceros por la máscara de subred 
      WiFi.config(Ip, Gateway, Subnet); 
      
      Serial.println("");
      Serial.println("WiFi conectado");
      Serial.println(WiFi.localIP());
      Serial.println("Ready");
      Serial.print("IP address: ");
      Serial.println(WiFi.localIP());
               
  }
  else { 
      Serial.println("");
      Serial.println("Error de conexion");
  }
}
void setup() { 
  // Inicia Serial 
  Serial.begin(115200); 
  Serial.println(""); 
  Serial.print("chipId: ");         // imprime el chipid del dispositivo en el serial 
  chipid = String(ESP.getChipId()); 
  Serial.println(chipid);

  //Se configuran los pines fisicos de entradas y salidas
  pinMode(luzverde, OUTPUT);
  pinMode(luzroja, OUTPUT);

   //Se configura y se realiza la conexion a la red Wifi
 connectWiFi();
server.begin();
}

int value = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
   // Se prueba si el dispositivo cliente ha realizado una solicitud
WiFiClient client = server.available();
  if (!client) {
    return;
  }
  // Lectura de la primera linea de la solicitud
  String req = client.readStringUntil('\r'); //Se lee la solicitud hasta \r
  Serial.println(req); //Se muestra la solicitud realizada en el puerto Serial
  client.flush(); //Se descartan los datos que han sido escritos por el cliente pero aun no se leen
  
  // se empiezan a recibir las peticiones desde la aplicación web con los index
  int val = -1; 
  if (req.indexOf("/?curluz=cierto1") != -1)
    val = 0; // Enciende la luzverde
  else if (req.indexOf("/?curluz=falso1") != -1)
    val = 1; // Enciende la luz roja
  if (req.indexOf("/?curluz=falso2") != -1)
  val = 0; // Enciende la luz verde
  else if (req.indexOf("/?curluz=cierto2") != -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?curluz=falso3") != -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?curluz=cierto3") != -1)
  val= 0; //enciende luz verde
  if (req.indexOf("/?curluz=cierto4") != -1)
  val= 0; //enciende luz verde
  else if (req.indexOf("/?curluz=falso4") != -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?curluz=falso5") != -1)
  val= 0; //enciende luz verde
  else if (req.indexOf("/?curluz=cierto5") != -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?cupercel=williamgilbert") != -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?cupercel=thalesdemiletus") != -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?cupercel=alberteinstein")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?cupercel=nikolatesla") != -1)
  val= 0; //enciende luz verde
  if (req.indexOf("/?cupercel=nikolatesla2")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?cupercel=andremarieampere2") != -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?cupercel=alejandrovolta2")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?cupercel=benjaminfranklin2") != -1)
  val= 0; //enciende luz verde
  if (req.indexOf("/?cupercel=nikolatesla3")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?cupercel=michaelfaraday3")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?cupercel=thomasedison3") != -1)
  val= 0; //enciende luz verde
  else if (req.indexOf("/?cupercel=sirhumphrydavy4")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?cupercel=michaelfaraday4")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?cupercel=georgsimonohm4")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?cupercel=nikolatesla4") != -1)
  val= 0; //enciende luz verde
  else if (req.indexOf("/?cupercel=nikolatesla5")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?cupercel=michaelfaraday5")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?cupercel=thomasedison5") != -1)
  val= 0; //enciende luz verde
  if (req.indexOf("/?inventos=michaelfaraday1")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?inventos=thomasedison1")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?inventos=nikolatesla1") != -1)
  val= 0; //enciende luz verde
  else if (req.indexOf("/?inventos=michaelfaraday2")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?inventos=nikolatesla2")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?inventos=thomasedison2") != -1)
  val= 0; //enciende luz verde
  if (req.indexOf("/?inventos=alejandrovolta3")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?inventos=thomasedison3")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?inventos=benjaminfranklin3") != -1)
  val= 0; //enciende luz verde
  else if (req.indexOf("/?inventos=alejandrovolta4") != -1)
  val= 0; //enciende luz verde
  if (req.indexOf("/?inventos=nikolatesla4")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?inventos=benjaminfranklin4")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?inventos=alejandrovolta5")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?inventos=benjaminfranklin5")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?inventos=nikolatesla5") != -1)
  val= 0; //enciende luz verde
  else if (req.indexOf("/?personajes=williamgilbert1")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?personajes=thalesdemiletus1") != -1)
  val= 0; //enciende luz verde
  else if (req.indexOf("/?personajes=nikolatesla1")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?personajes=alberteinstein1")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?personajes=charlesagustindecoulomb2")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?personajes=andremarieampere2")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?personajes=benjaminfranklin2") != -1)
  val= 0; //enciende luz verde
  if (req.indexOf("/?personajes=alejandrovolta2")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?personajes=charlesagustindecoulomb3")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?personajes=andremarieampere3")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?personajes=benjaminfranklin3")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?personajes=alejandrovolta3") != -1)
  val= 0; //enciende luz verde
  else if (req.indexOf("/?personajes=benjaminfranklin3")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?personajes=hanschristian4") != -1)
  val= 0; //enciende luz verde
  else if (req.indexOf("/?personajes=sirhumphrydavy4")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?personajes=michaelfaraday4")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?personajes=georgsimonohm4")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?personajes=sirhumphrydavy5")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("?personajes=hanschristian5")!= -1)
  val= 1; //enciende luz roja
  if (req.indexOf("/?personajes=michaelfaraday5")!= -1)
  val= 1; //enciende luz roja
  else if (req.indexOf("/?personajes=georgsimonohm5") != -1)
  val= 0; //enciende luz verde
  
//------------Declaración de casos------------//
  if(val==0){
    digitalWrite(luzverde, LOW); //si se utilizan led´s se intercambian el LOW y el HIGH
     delay(3000);
     digitalWrite(luzverde, HIGH);
    }
  else if(val==1){
    digitalWrite(luzroja, LOW);//si se utilizan led´s se intercambian el LOW y el HIGH
     delay(3000);
     digitalWrite(luzroja, HIGH);
    }
 
  client.flush();
   // Se inicia la escritura de la pagina web en el servidor de la esp
  String s = "<!DOCTYPE HTML>";
  s += "<html>";
  // Se prepara la respuesta. Iniciamos con un header comun: 
   if (val==0) {
    s += "<head><meta charset='utf-8'>";
    s += "<title>Respuesta Correcta</title></head>";
    s += "<body style= 'background-color: #61b62f; font-family: 'open sans', 'Helvetica Neue', Helvetica, Arial, sans-serif'>";
    s += "<section><div style= 'width: 100%; height: 100%; text-align: center; margin-top:230px; margin-bottom: 230px;'>";
    s += "<h1 style= 'font-size: 100px; color:#fff'>Respuesta correcta :D</h1>";
    s += "<form action='http://localhost/elequiz'><input style='background-color: #68BD69; border-radius: 10px;' type='submit' Value='Ir al inicio'></form>";
    s += "</div></section></body></html>"; //Se termina de imprimir la pagina web
    }
  if (val==1) {
    s += "<head><meta charset='utf-8'>";
    s += "<title>Respuesta Incorrecta</title></head>";
    s += "<body style= 'background-color: #fb3d1e; font-family: 'open sans', 'Helvetica Neue', Helvetica, Arial, sans-serif'>";
    s += "<section><div style= 'width: 100%; height: 100%; text-align: center; margin-top:230px; margin-bottom: 230px;'>";
    s += "<h1 style= 'font-size: 100px; color:#fff'>Respuesta incorrecta D:</h1>";
    s += "<form action='http://localhost/elequiz'><input style='background-color: #D75E5F; border-radius: 10px;' type='submit' Value='Ir al inicio'></form>";
    s += "</div></section></body></html>"; //Se termina de imprimir la pagina web
  }
  
  
  // Se envia la respuesta al cliente
  client.print(s);
  delay(1);
  Serial.println("Cliente desconectado");

}
