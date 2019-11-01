/*
Programa para manejar un robot 4WD
Modificado: 1/11/2019
Ing. César Augusto Alvarez

Se incluye una maquina de estados
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

int estadoActual;

//Ordenes para el robot
void loop() {
 int d;//Distancia del ostaculo
 //Lógica de estado
 d=ostaculo();
Serial.print(d);
switch(estadoActual)
      {
        case 0:
                if(d>=30)
                  {
                   estadoActual=1; 
                  }
                break;
        case 1:
                if(d<20)
                  {
                   estadoActual=0; 
                  }
                break;
      }
Serial.print("\t");
Serial.println(estadoActual);
 //Lógica de salida
 switch(estadoActual)
        {
          case 0:
                  detener();
                  break;
          case 1:
                  avanzar();
                  break;
          case 3: 
                  girarDerecha();
                  break;
          case 4:
                  girarIzquierda();        
                  break;
        }
 delay(20);
}
