
#include"MovRobot.h"
#include <arduino.h>
void avanzar(void)
{
  digitalWrite(ENAMotor,HIGH);
  digitalWrite(IN1Motor, HIGH);//Motor derecho
  digitalWrite(IN2Motor, LOW);
  
  digitalWrite(ENBMotor,HIGH);
  digitalWrite(IN3Motor, HIGH);//Motor Izquierdo
  digitalWrite(IN4Motor, LOW);
}

void retroceder(void)
{
  digitalWrite(ENAMotor,HIGH);   
  digitalWrite(IN1Motor, LOW);//Motor derecho
  digitalWrite(IN2Motor, HIGH);

  digitalWrite(ENBMotor,HIGH);
  digitalWrite(IN3Motor, LOW);//Motor izquierdo
  digitalWrite(IN4Motor, HIGH);
}

void detener(void)
{
  digitalWrite(ENAMotor,LOW);
  digitalWrite(IN1Motor, LOW);//Motor derecho
  digitalWrite(IN2Motor, LOW);

  digitalWrite(ENAMotor,LOW);
  digitalWrite(IN3Motor, LOW);//Motor izquierdo
  digitalWrite(IN4Motor, LOW);
}


void setupMotor(void)
{
  pinMode(IN1Motor, OUTPUT);
  pinMode(IN2Motor, OUTPUT);
  pinMode(IN3Motor, OUTPUT);
  pinMode(IN4Motor, OUTPUT);
  pinMode(ENAMotor, OUTPUT);
  pinMode(ENBMotor, OUTPUT);
}

void girarDerecha(void)
{
  digitalWrite(ENAMotor,LOW);
  digitalWrite(IN1Motor, HIGH);//Motor derecho
  digitalWrite(IN2Motor, LOW);
  
  digitalWrite(ENBMotor,HIGH);
  digitalWrite(IN3Motor, HIGH);//Motor Izquierdo
  digitalWrite(IN4Motor, LOW);  
}

void girarIzquierda(void)
{
  digitalWrite(ENAMotor,HIGH);
  digitalWrite(IN1Motor, HIGH);//Motor derecho
  digitalWrite(IN2Motor, LOW);
  
  digitalWrite(ENBMotor,LOW);
  digitalWrite(IN3Motor, HIGH);//Motor Izquierdo
  digitalWrite(IN4Motor, LOW);  
}
