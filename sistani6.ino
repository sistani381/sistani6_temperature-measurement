void setup() {
 Serial.begin(9600); 
}
void loop() {
 float temp=analogRead(A0);//read analog volt from a0 pin(sensor) and save to variable temp
 float temp1=temp*0.48828125;// convert the analog volt to its temperature equivalent
 Serial.print("temperature = ");//write "temperature " in the serial monitor
 Serial.print(temp1);// diplay temperature value
 Serial.println("*C");// write "*C" in the serial monitor
 delay(2000);// waits for 2 second
}
