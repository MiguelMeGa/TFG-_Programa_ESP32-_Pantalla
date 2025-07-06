

//led en GPIO 2
//int ledPin=2;

#define LED_BUILTIN 31

void setup() {
  // put your setup code here, to run once:

  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  delay(10);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //int x;
  //x=0;
  digitalWrite(LED_BUILTIN,HIGH);
 // Serial.println("ALto");
  delay(10000);
  //Serial.println("hola\n");
  digitalWrite(LED_BUILTIN,LOW);
  Serial.println("Bajo");
  delay(1000);

}
