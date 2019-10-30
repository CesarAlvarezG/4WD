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
#define TRIGGER 11
#define ECHO 10

//Funciones

void avanzar(void);
void retroceder(void);
void detener(void);
int ostaculo(void);


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
