#define LED 13
int x = 0;

void setup()
{

	Serial.begin(9600);
	Serial.println("Welcome to Visual Micro Demo...");
	pinMode(LED, OUTPUT);
	digitalWrite(LED, LOW);
}

void loop()
{

	digitalWrite(LED, LOW);
	delay(200);
	Serial.print("x = ");
	Serial.println(x);
	digitalWrite(LED, HIGH);
	delay(200);
	x++;
	if (x > 9) {
		x = 0;
	}
}
