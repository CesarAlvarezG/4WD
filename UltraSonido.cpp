
#include"UltraSonido.h"
#include <arduino.h>

void setupUltraSonido(void)
{
  pinMode(TRIGGER, OUTPUT); // Habilita el uso del ultrasonido
  pinMode(ECHO, INPUT); // 
}


int ostaculo(void)
{
  long duration;
  int distance;
  int promDistance;
  int i;
  for(i=0,promDistance=0;i<5;i++)
  {
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
    if(distance<1000)promDistance+=distance;
    delay(10);
  }
  promDistance=promDistance/5;
  return promDistance;
}
