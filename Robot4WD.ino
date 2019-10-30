/*
Programa para manejar un robot 4WD
Modificado: 30/10/2019
Ing. César Augusto Alvarez
*/

#include "MovRobot.h"  //Movimiento del robot
#include "UltraSonido.h"



//Funciones




//Configuración del robot
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  setupMotor();
  setupUltraSonido();
  
  
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
