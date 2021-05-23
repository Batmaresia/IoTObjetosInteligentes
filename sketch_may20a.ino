#define trigger 6
#define echo 7
float distancia = 0;
float tempo = 0;
int d = 0;
float alturalivro = 1.5;
float alturaprat = 30.0;


void setup()
{
  Serial.begin(9600);
  
  pinMode(trigger, OUTPUT);
  digitalWrite(trigger, LOW);
  pinMode(echo, INPUT);
 
}
 


void loop()
{
  float nlivros;
  int nilivros;
  
  distancia = 0;
  digitalWrite(trigger, HIGH);
  delay(100);
  digitalWrite(trigger, LOW);
  
  tempo = pulseIn(echo, HIGH);
  tempo = tempo/1000000;
  distancia = (tempo*340)*50;
  
  nlivros = (alturaprat - distancia)/alturalivro;
  nilivros = (int) nlivros;

  
  
  Serial.println(nilivros);
}
