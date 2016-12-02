int hash = 468;
int compare[3] = {555, 468, 292};

SoftwareSerial Bluetooth = SoftwareSerial(0,1);

void setup() 
{
  for (int i = 0; i < 3; i++) {
    if (hash == compare[i]) {
      digitalWrite(13, HIGH);
    }
  }

  if (digitalRead(13) == LOW) {
    digitalWrite(10, HIGH);
  }
}

void loop() 
{
  if (Bluetooth.available()) {
    digitalWrite(12, HIGH);
  }
}
