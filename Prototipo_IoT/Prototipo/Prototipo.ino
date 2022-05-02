/*Prototipo de el sistema automatizado de riego
Integrantes:
Diana Quintero
Juan Rodriguez
Oscar Rodriguez*/
#include <Servo.h> //se incluye la libreria para la compuerta del aspersor
Servo aspersor; //se define la variable aspersor
int rojo=11; //se define el led rojo con el pin 11
int verde=9; //se define el led verde con el pin 10
int humedad=A0; //se define la humedad al analogico 0
float tempC; // se define variable para almacenar el valor obtenido de temperatura
int temp = A1; // se define variable del pin de entrada del sensor (A1)

void setup()
{
  Serial.begin(9600);// Configuramos el puerto serial a 9600 bps
  pinMode(humedad, INPUT);//Se define la variable humedad como entrada
  pinMode(rojo,OUTPUT);//Se define la variable rojo como salida
  pinMode(verde,OUTPUT);//se define la variable verde como salida
  aspersor.attach(4);//Se determina el pin de salida para el servo 
 }
 void loop()
{
  humedad = analogRead(A0); //se lee el valor de humedad del sensor
  Serial.print(humedad); // se muestra el valor 
  Serial.println(); //Salto de linea para diferenciar los valores
  tempC = ((5.0 * temp * 100.0)/1024.0)-50; //Operación matematica para calcular la temperatira en funcio del voltaje 
  Serial.print(tempC); //se muestra el valor de temperatura 
  Serial.println(); //Salto de linea para diferenciar los valores
  Serial.println(); //Salto de linea para nueva medición de valores

   if(humedad >= 0 & humedad <= 300){ //se crea un condicional según el valor de humedad medido
    digitalWrite(verde,LOW); //se mantiene apagado el led verde 
    digitalWrite(rojo,HIGH); //se enciende el led rojo ya que es un valor muy bajo
    aspersor.write(180);//se abre la comspuerta del aspersor para dejar salir agua a la planta
    } 
