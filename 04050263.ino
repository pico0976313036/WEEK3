const byte LEDs[] ={12};
const byte total = sizeof(LEDs);
byte index = 0;
const byte potPin =A0;
int val;
int v;
void setup(){
for (byte i=0;i<total;i++)
{
pinMode(LEDs[i], OUTPUT);
digitalWrite(LEDs[i], LOW);
}
Serial.begin(9600);
Serial.println("Hello ");
Serial.println("Word. ");
}

void loop() {

val = analogRead(potPin);
Serial.println(val);
delay(500);

if(Serial.available()){
  v = Serial.read();
  if(v == '1'){
    digitalWrite(12,HIGH);
    Serial.print("LED ON \n");
  }
  else if(v == '0'){
    digitalWrite(12,LOW);
    Serial.print("LED OFF \n");
  }
}
}
