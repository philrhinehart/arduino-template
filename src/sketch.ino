int ledPin = 13;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World! Let the blinking begin.");
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, LOW);
  delay(1000);
  digitalWrite(ledPin, HIGH);
  delay(1000);
}