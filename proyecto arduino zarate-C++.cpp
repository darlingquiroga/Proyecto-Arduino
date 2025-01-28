#include <Adafruit_NeoPixel.h>
#include <Adafruit_LiquidCrystal.h>
#include <Adafruit_LiquidCrystal.h>

int tiraled=10;
int tiempotiraled=1000;

Adafruit_NeoPixel lled = Adafruit_NeoPixel(12, tiraled, NEO_GRB+NEO_KHZ800);

void tiraledrojo(){//
lled.setPixelColor(0,lled.Color(100,10,10));//mando los datos de los colores que quiero que aparezca  ROJO
lled.setPixelColor(3,lled.Color(100,10,10));
lled.setPixelColor(6,lled.Color(100,10,10));
lled.setPixelColor(9,lled.Color(100,10,10));

lled.show(); //para que prenda 
 delay(tiempotiraled);
lled.clear(); //para que apague
lled.show();
  delay(tiempotiraled);
}
void tiraledverde(){
lled.setPixelColor(1,lled.Color(0,100,0));//mando los datos de los colores que quiero que aparezca  ROJO
lled.setPixelColor(4,lled.Color(0,100,0));
lled.setPixelColor(7,lled.Color(0,100,0));
lled.setPixelColor(10,lled.Color(0,100,0));

lled.show(); //para que prenda 
delay(tiempotiraled);
lled.clear(); //para que apague
lled.show();
delay(tiempotiraled);
}
void tiraledamarillo(){
lled.setPixelColor(2,lled.Color(255,255,128));//mando los datos de los colores que quiero que aparezca  ROJO
lled.setPixelColor(5,lled.Color(255,255,128));
lled.setPixelColor(8,lled.Color(255,255,128));
lled.setPixelColor(11,lled.Color(255,255,128));
lled.show(); //para que prenda 
delay(tiempotiraled);
lled.clear(); //para que apague
lled.show();
delay(tiempotiraled);
}


int circulo=12;
Adafruit_NeoPixel redondo = Adafruit_NeoPixel(7, circulo, NEO_GRB+NEO_KHZ800);

void ledredondorojo(){
 redondo.setPixelColor(1,redondo.Color(100,0,0));
 redondo.setPixelColor(2,redondo.Color(100,0,0));
 redondo.setPixelColor(6,redondo.Color(100,0,0));
redondo.show(); //para que prenda 
delay(tiempotiraled);
redondo.clear(); //para que apague
redondo.show();
delay(tiempotiraled);
}
void redondoverde(){
redondo.setPixelColor(3,redondo.Color(0,100,0));
redondo.setPixelColor(4,redondo.Color(0,100,0));
redondo.setPixelColor(5,redondo.Color(0,100,0));
redondo.show(); //para que prenda 
delay(tiempotiraled);
redondo.clear(); //para que apague
redondo.show();
delay(tiempotiraled);
}

void redondoamarillo(){
redondo.setPixelColor(0,redondo.Color(255,255,128));
redondo.show(); //para que prenda 
delay(tiempotiraled);
redondo.clear(); //para que apague
redondo.show();
delay(tiempotiraled);
}


int verde=9;//LED RGB //////////////////////////////
int amarillo=8;
int rojo=7;
void ledrgb()
{

 digitalWrite(verde, LOW);
 digitalWrite(amarillo, LOW);
 digitalWrite(rojo, HIGH);
 delay(700);
 digitalWrite(rojo, LOW);
 delay(200);
 
 digitalWrite(verde, HIGH);
 digitalWrite(rojo, HIGH);
 digitalWrite(amarillo, LOW);
 delay(700);
 digitalWrite(verde, LOW);
 digitalWrite(rojo, LOW);
 delay(200);

 digitalWrite(rojo, LOW);
 digitalWrite(amarillo, LOW);
 digitalWrite(verde, HIGH);
 delay(700);
 digitalWrite(verde, LOW);
 delay(200);

}

/*
int ledrojo=3; //LED COMUNES ////////////////////////////
int ledamarillo=4;
int ledverde=5;
void ledcolores(){ //led de colores 
    digitalWrite(ledrojo, HIGH);
    delay(1000); // Wait for 10000 millisecond(s)
    digitalWrite(ledrojo, LOW);
    digitalWrite(ledamarillo, HIGH);
    delay(300); // Wait for 3000 millisecond(s)
    digitalWrite(ledamarillo, LOW);
    digitalWrite(ledverde, HIGH);
    delay(700); // Wait for 7000 millisecond(s)
    digitalWrite(ledverde, LOW);
}

¨*/

int Do = 261;
int Re = 293;
int Mi = 329;
int Fa = 349;
int Sol = 391;
int La = 440;
int Si = 493;
int RE = 700;
int LA = 560;
int SOL =553;
int t1= 300;
int t2= 200;
int t3= 100;

int parlantes=13;
void cancion(){
tone (13, Re);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Re);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, RE);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, La);
  delay (t2);
  noTone (13);
  delay (t1);
  tone (13, SOL);
  delay (t1);
  noTone (13);
  delay (t1);
  
  tone (13, Sol);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Fa);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Re);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Fa);
  delay (t2);
  noTone (13);
  delay (t1);
  tone (13, Sol);
  delay (t1);
  noTone (13);
  delay (t1);
  
  tone (13, Do);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Do);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, RE);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, La);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, SOL);
  delay (t2);
  noTone (13);
  delay (t3);
  
  tone (13, Sol);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Fa);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Re);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Fa);
  delay (t2);
  noTone (13);
  delay (t1);
  tone (13, Sol);
  delay (t1);
  noTone (13);
  delay (t1);
  
  tone (13, Si);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Si);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, RE);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, La);
  delay (t2);
  noTone (13);
  delay (t1);
  tone (13, SOL);
  delay (t1);
  noTone (13);
  delay (t1);
  
  tone (13, Sol);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Fa);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Re);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Fa);
  delay (t2);
  noTone (13);
  delay (t1);
  tone (13, Sol);
  delay (t1);
  noTone (13);
  delay (t1);
  
  tone (13, LA);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, LA);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, RE);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, La);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, SOL);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Sol);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Fa);
  delay (t2);
  noTone (13);
  delay (t1);
  
  tone (13, Re);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Fa);
  delay (t2);
  noTone (13);
  delay (t3);
  tone (13, Sol);
  delay (t2);
  noTone (13);
  delay (t3);
}



Adafruit_LiquidCrystal lcd_1(0);
int counter;
int counter2;

void pantalla(){
 lcd_1.begin(16, 2); 	//pantalla prepaqrada para recibir indicaciones 
 lcd_1.noCursor();		//pantalla que no aparezca el cursor 
 lcd_1.print("punto y coma");	//pantalla que muestre 
 
for (counter = 0; counter < 15; ++counter) {
    lcd_1.scrollDisplayRight();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
  for (counter2 = 0; counter2 < 15; ++counter2) {
    lcd_1.scrollDisplayLeft();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
}

void inico(){
 lcd_1.begin(16, 2); 	//pantalla prepaqrada para recibir indicaciones 
 lcd_1.noCursor();		//pantalla que no aparezca el cursor 
 lcd_1.print("Reglero Nicolas");	//pantalla que muestre 
 
for (counter = 0; counter < 15; ++counter) {
    lcd_1.scrollDisplayRight();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
  for (counter2 = 0; counter2 < 15; ++counter2) {
    lcd_1.scrollDisplayLeft();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
}
void imarcos(){
 lcd_1.begin(16, 2); 	//pantalla prepaqrada para recibir indicaciones 
 lcd_1.noCursor();		//pantalla que no aparezca el cursor 
 lcd_1.print("Marcos Valdez");	//pantalla que muestre 
 
for (counter = 0; counter < 15; ++counter) {
    lcd_1.scrollDisplayRight();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
  for (counter2 = 0; counter2 < 15; ++counter2) {
    lcd_1.scrollDisplayLeft();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
}
void isol(){
 lcd_1.begin(16, 2); 	//pantalla prepaqrada para recibir indicaciones 
 lcd_1.noCursor();		//pantalla que no aparezca el cursor 
 lcd_1.print("Soledad Rios");	//pantalla que muestre 
 
for (counter = 0; counter < 15; ++counter) {
    lcd_1.scrollDisplayRight();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
  for (counter2 = 0; counter2 < 15; ++counter2) {
    lcd_1.scrollDisplayLeft();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
}
void idarling(){
 lcd_1.begin(16, 2); 	//pantalla prepaqrada para recibir indicaciones 
 lcd_1.noCursor();		//pantalla que no aparezca el cursor 
 lcd_1.print("Darling Quiroga");	//pantalla que muestre 
 
for (counter = 0; counter < 15; ++counter) {
    lcd_1.scrollDisplayRight();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
  for (counter2 = 0; counter2 < 15; ++counter2) {
    lcd_1.scrollDisplayLeft();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
}
void iema(){
 lcd_1.begin(16, 2); 	//pantalla prepaqrada para recibir indicaciones 
 lcd_1.noCursor();		//pantalla que no aparezca el cursor 
 lcd_1.print("Emanuel Uruena");	//pantalla que muestre 
 
for (counter = 0; counter < 15; ++counter) {
    lcd_1.scrollDisplayRight();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
  for (counter2 = 0; counter2 < 15; ++counter2) {
    lcd_1.scrollDisplayLeft();
    lcd_1.autoscroll();
    delay(100); // Wait for 500 millisecond(s)
  }
}
int boton1=6;
int boton2=11;

int ledrojo=3; 
int ledamarillo=4;
int ledverde=5;
int a;
int b;

void setup()//ACA ARRANCA EL MAIN
{	
  pinMode(boton1, INPUT);
  pinMode(boton2, INPUT);
  
  redondo.begin(); //led circular 
  lled.begin();		//tira de led
  pinMode(parlantes, OUTPUT); //parlantes
  pinMode(verde, OUTPUT);	//rgb verde
  pinMode(amarillo, OUTPUT);	//rgb amarillo
  pinMode(rojo, OUTPUT);	//rgb rojo 
  
    
  pinMode(ledrojo, OUTPUT); //LED CHIQUITO
  pinMode(ledamarillo, OUTPUT); //LED CHIQUITO 
  pinMode(ledverde, OUTPUT);	//LED CHIQUITO 
  
 
}

void loop(){ //LED RGB

  if (digitalRead(boton1) == LOW){
  digitalWrite(ledverde,HIGH);
  }
  else if (digitalRead(boton2) == LOW){
  digitalWrite(ledverde,LOW);
  
  }
 
//TODO ESTO VA EN EL PULSADOR 1 ////////
 /*cancion();
 tiraledverde();
 tiraledamarillo();
 tiraledrojo();
*/
  //  ledcolores();}
// ledrgb();
    

// pantalla();

 

  
  
 ////////////////////////////FIN DEL PULSADOR  N°1////////////////////////////
 
  
  	
  //TODO ESTO VA EN EL PULSADOR 2 Y SE DEBE APAGAR LA MUSICA Y EL LED RGB ////////
//apagar los tonos,el led rgb
  /*ledredondorojo();
  redondoamarillo();
  redondoverde();
//mostrar en el led los integrantes del equipo moviendolos 1 a 1 
 		
  	inico();
    iema();
  	imarcos();
  	isol();
    idarling();
  	iema();
  	*/
  
// hacer un ruido al finalizar los integrantes 
// apagar todo 
}