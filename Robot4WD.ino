/*
Programa para manejar un robot 4WD
Modificado: 30/10/2019
Ing. César Augusto Alvarez


*/

#define IN1Motor 2
#define IN2Motor 4
#define IN3Motor 6
#define IN4Motor 7
#define ENAMotor 3//Enable del motor Derecho
#define ENBMotor 5//Enable del motor Izquierdo

//Configuración del robot
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(IN1Motor, OUTPUT);
  pinMode(IN2Motor, OUTPUT);
  pinMode(IN3Motor, OUTPUT);
  pinMode(IN4Motor, OUTPUT);
  pinMode(ENAMotor, OUTPUT);
  pinMode(ENBMotor, OUTPUT);
}

//Ordenes para el robot
void loop() {
  //Avanzar
  digitalWrite(ENAMotor,HIGH);
  digitalWrite(IN1Motor, HIGH);//Motor derecho
  digitalWrite(IN2Motor, LOW);
  
  digitalWrite(ENBMotor,HIGH);
  digitalWrite(IN3Motor, HIGH);//Motor Izquierdo
  digitalWrite(IN4Motor, LOW);
  delay(5000);
           
  //Retroceder    
  digitalWrite(ENAMotor,HIGH);   
  digitalWrite(IN1Motor, LOW);//Motor derecho
  digitalWrite(IN2Motor, HIGH);

  digitalWrite(ENBMotor,HIGH);
  digitalWrite(IN3Motor, LOW);//Motor izquierdo
  digitalWrite(IN4Motor, HIGH);
  delay(5000);                

  //Detener       
  digitalWrite(ENAMotor,LOW);
  digitalWrite(IN1Motor, LOW);//Motor derecho
  digitalWrite(IN2Motor, LOW);

  digitalWrite(ENAMotor,LOW);
  digitalWrite(IN3Motor, LOW);//Motor izquierdo
  digitalWrite(IN4Motor, LOW);
  delay(5000);                
}
