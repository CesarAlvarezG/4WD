/*
Programa para manejar un robot 4WD
Modificado: 30/10/2019
Ing. César Augusto Alvarez
*/

#include "MovRobot.h"  //Movimiento del robot


#define TRIGGER 11
#define ECHO 10

//Funciones


int ostaculo(void);


//Configuración del robot
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  setupMotor();
  
  pinMode(TRIGGER, OUTPUT); // Habilita el uso del ultrasonido
  pinMode(ECHO, INPUT); // 
  Serial.begin(9600);
}

//Ordenes para el robot
void loop() {
  
 avanzar();
 delay(200);
 retroceder();
 delay(200);
 detener();
 delay(200);
 Serial.println(ostaculo());
 delay(200);     
}


int ostaculo(void)
{
  long duration;
  int distance;
  digitalWrite(TRIGGER, LOW);
  delayMicroseconds(2);
  // Pin de disparo en uno durante 10 us
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER, LOW);
  // Mide tiempo que tarda en ponerse en uno el eco
  duration = pulseIn(ECHO, HIGH);
  // Se calcula la distancia en cm
  distance= duration*0.034/2;  
  return distance;
}
