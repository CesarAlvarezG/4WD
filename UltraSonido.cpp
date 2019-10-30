
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
