int bluePin;
int greenPin;
int redPin;

void setup() {
	bluePin = 9;
	greenPin = 10;
	redPin = 11;

	pinMode(bluePin, OUTPUT);
	pinMode(greenPin, OUTPUT);
	pinMode(redPin, OUTPUT);
}

void loop() {
  analogWrite(bluePin, 128);
  analogWrite(greenPin, 128);
  analogWrite(redPin, 128);
}