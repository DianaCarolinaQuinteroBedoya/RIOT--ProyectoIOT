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
