#define RED_PIN 8
#define BLUE_PIN 7

int count;
int redPin;
int bluePin;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  count = 0;
  redPin = 1;
  bluePin = 0;
}

void loop() {
  if (count == 8) {
    count = 0;
  }

  
  if (count == 3 || count == 7) {
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(BLUE_PIN, HIGH);
  } else {
    if (redPin == 0) {
      digitalWrite(RED_PIN, HIGH);
      redPin = 1;
    } else {
      digitalWrite(RED_PIN, LOW);
      redPin = 0;
    }
    
    if (bluePin == 0) {
      digitalWrite(BLUE_PIN, HIGH);
      bluePin = 1;
    } else {
      digitalWrite(BLUE_PIN, LOW);
      bluePin = 0;
    }
  }
  
  delay(500);
  count++;
}
