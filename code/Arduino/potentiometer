#define potPin 34

#define L1 16
#define L2 17
#define L3 25
#define L4 26
#define L5 27
#define L6 5
#define L7 18
#define L8 19

int leds[] = {L1, L2, L3, L4, L5, L6, L7, L8};

void setup() {
  Serial.begin(115200);

  for (int i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  int potValue = analogRead(potPin);

  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);

  int level = map(potValue, 0, 4095, 0, 8);

  for (int i = 0; i < 8; i++) {
    digitalWrite(leds[i], (i < level) ? LOW : HIGH);
  }

  delay(50);
}