//declaration
//3leds == powerindicator,built in led(which changes from one microcontroller to another microcontroller),
int led = BUILTIN_LED; //42 
//setup
void setup() {
  pinMode(led, OUTPUT); //sensor is input
}
//loop
void loop() {
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(2000);
}
