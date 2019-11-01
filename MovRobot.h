/*
 * Libreria para el movimiento del ROBOT 4WD
 * Desarrollado por: César Augusto Álvarez
 * Versión: 0.1
 Modificado: 30 / 10 / 2019
  */


#ifndef __MOVROBOT_H__
#define __MOVROBOT_H__

#define IN1Motor 2
#define IN2Motor 4
#define IN3Motor 6
#define IN4Motor 7
#define ENAMotor 3//Enable del motor Derecho
#define ENBMotor 5//Enable del motor Izquierdo

void avanzar(void);
void retroceder(void);
void detener(void);
void setupMotor(void);
void girarDerecha(void);
void girarIzquierda(void);
#endif
