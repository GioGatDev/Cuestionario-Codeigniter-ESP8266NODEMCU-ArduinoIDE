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
      //Se declara una ip fija para saber a donde mandar la ip
      IPAddress Ip(0,0,0,0); //se cambian los ceros por un 
      IPAddress Gateway(192,168,0,1); 
      IPAddress Subnet(255,255,255,0); 
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

}
