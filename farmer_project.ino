int sensor_pin = A0; // Soil Sensor input at Analog PIN A0
int output_value ;
void setup() {
  // put your setup code here, to run once:
  pinMode(3 ,OUTPUT);
     Serial.begin(9600);
   Serial.println("Reading From the Sensor ...");
   delay(2000);
}


  // put your main code here, to run repeatedly:

  void loop() {
   output_value= analogRead(sensor_pin);
 output_value = map(output_value,550,10,0,100);
   Serial.print("Mositure : ");
   Serial.print(output_value);
   Serial.println("%");
   if(output_value<20){
      digitalWrite(3,HIGH);
     }
     else{
            digitalWrite(3,LOW);
     }
   delay(1000);
}
