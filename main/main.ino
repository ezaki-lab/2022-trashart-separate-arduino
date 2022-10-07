int val;
void setup() {
    pinMode(13,INPUT);
//    pinMode(10,OUTPUT);  //minLED Don't touch.
    pinMode(7,OUTPUT); //WhiteLED　yellow
    pinMode(5,OUTPUT); //850nm　   green
    pinMode(3,OUTPUT); //940nm　   white
}

void loop() {
    val = digitalRead(13);
    Serial.println(val);

    if(val == 1){
//        digitalWrite(10,HIGH);
//        delay(1300);
//        digitalWrite(10,LOW);
        digitalWrite(7,HIGH);
        delay(1300);
        digitalWrite(7,LOW);
        digitalWrite(5,HIGH);
        delay(1300);
        digitalWrite(5,LOW);
        digitalWrite(3,HIGH);
        delay(1300);
        digitalWrite(3,LOW);
    }

    else{
        digitalWrite(10,LOW);
        digitalWrite(7,LOW);
        digitalWrite(5,LOW);
        digitalWrite(3,LOW);
    }
}
