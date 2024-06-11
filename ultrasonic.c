const int ledPin = 13;  // choose the pin for the LED
const int trigPin = 2;  // choose the pin for the ultrasonic sensor trigger
const int echoPin = 4;  // choose the pin for the ultrasonic sensor echo

void setup() {
  pinMode(ledPin, OUTPUT);  // set the LED pin as an output
  pinMode(trigPin, OUTPUT);  // set the trigger pin as an output
  pinMode(echoPin, INPUT);  // set the echo pin as an input
}

void loop() {
  int distance = getDistance();  // get the distance to the obstacle
  if (distance < 20) {  // if the distance is less than 20cm, blink the LED
    blinkLED();
  } else {
    digitalWrite(ledPin, LOW);  // otherwise, turn off the LED
  }
  delay(50);  // wait 50ms before checking again
}

int getDistance() {
  digitalWrite(trigPin, HIGH);  // send a high pulse to the trigger pin
  delayMicroseconds(10);  // wait 10us
  digitalWrite(trigPin, LOW);  // send a low pulse to the trigger pin
  int duration = pulseIn(echoPin, HIGH);  // measure the time it takes for the echo to return
  int distance = duration * 0.034 / 2;  // calculate the distance in cm
  return distance;
}

void blinkLED() {
  digitalWrite(ledPin, HIGH);  // turn on the LED
  delay(50);  // wait 50ms
  digitalWrite(ledPin, LOW);  // turn off the LED
  delay(50);  // wait 50ms
}
