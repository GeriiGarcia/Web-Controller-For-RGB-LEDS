/*
* LAB: 2
* Name: ESP32 Hello World Serial Print
* Author: Khaled Magdy
* For More Info Visit: www.DeepBlueMbedded.com
*/
 
void setup()
{
  Serial.begin(115200);
}
 
void loop()
{
  Serial.println("Hello World!");
  delay(1000);
}
