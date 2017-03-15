const int green = 3;
const int red = 6;
const int blue = 5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);

}
int sensor;


void loop() {
  // put your main code here, to run repeatedly:
  
  sensor = analogRead(A0)/4;
  Serial.println(sensor);
  if (sensor < 127){
    analogWrite(red, 255-2*sensor);
    analogWrite(green, 2*sensor);
    analogWrite(blue, 0);
  }

  else {
    analogWrite(red, 0);
    analogWrite(green, 255-2*(sensor-128));
    analogWrite(blue, 2*(sensor-127));
   Serial.println(255-2*(sensor-127));
    
  }
 
  delay(30);
}
