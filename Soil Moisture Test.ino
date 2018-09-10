/**********
 * SOIL MOISTURE TEST SKETCH
 * Written by Willy Kjellstrom
 * 
 * This sketch reads the value of a soil moisture sensor from pin A0 and then maps the
 * analog reading to a 0-100 percentage before printing to the serial monitor. The analog
 * values on LINE 28 need to reflect a more accurate percentage.
 * 
 * High Value on A0 (1023) = Dry
 * Low Value on A0 (0) = Wet
 * 
 */

int soilSensor = A0; //Signal pin from the soil moisture sensor.
int soilReading; //Reading value of soil moisture meter.

void setup() {

  Serial.begin(9600);
  Serial.println("Reading From the Sensor ...");
  delay(2000);

}

void loop() {

  soilReading = analogRead(soilSensor); //Read soil sensor.
  soilReading = map(soilReading,1023,0,0,100); //Reverse mapping for percentage. This needs to be changed.
  
  //Print soil reading to the serial monitor.
  Serial.print("Soil Mositure: ");
  Serial.print(soilReading);
  Serial.println("%");

  //Ten second delay before beginning loop again.
  delay(10000);

}
