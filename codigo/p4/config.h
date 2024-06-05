// Completa cos teus datos:SSID, contrasinal e IP do broker MQTT
//Modifica os topics para co nº do teu ESP32
const char* wifi_ssid = "Domotica";                  
const char* wifi_contrasinal = "tecnoteis";
const char* mqtt_servidor = "192.168.12.61";

const int relePin = 15;

bool depuracion = true;             
unsigned long milisAnteriores = 0; 

#define DHTPIN 18      // Pin do DHT
#define DHTTYPE DHT11     // declaramos o tipo de DHT 

// Creanse os obxectos   
DHT dht(DHTPIN, DHTTYPE);
WiFiClient espCliente7;
PubSubClient client(espCliente7);


long lastMsg = 0;
char msg[50];
int value = 0;

void setup_pines(){
  pinMode(relePin, OUTPUT);  
}
