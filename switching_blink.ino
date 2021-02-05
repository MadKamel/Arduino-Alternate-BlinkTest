// Code written by MadKamel. Hello!
int L0 = 13;
int L1 = 12;

void setup() {
    pinMode(L0, OUTPUT);
    pinMode(L1, OUTPUT);
    Serial.begin(115200);
}

void loop() {
    Serial.println("Pattern A Commence");
    digitalWrite(L0, HIGH);
    digitalWrite(L1, LOW);
    delay(500);
    Serial.println("Pattern B Commence");
    digitalWrite(L0, LOW);
    digitalWrite(L1, HIGH);
    delay(500);
}
