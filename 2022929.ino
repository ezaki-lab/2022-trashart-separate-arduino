int val;
void setup() {
    pinMode(2,INPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
}

void loop() {
    val = digitalRead(2);
    Serial.println(val);

    if(val == 0){
        digitalWrite(4,HIGH);
        delay(2000);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        delay(2000);
        digitalWrite(5,LOW);
        digitalWrite(6,HIGH);
        delay(2000);
        digitalWrite(6,LOW);
    }

    else{
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
    }
}