#include<SoftwareSerial.h>
SoftwareSerial mySerial(10,12)  //10for =TX ; and 12 for RX;
#define relay2
#define relay3
#define relay4
#define relay5
char val;

void setup() {

PinMode(relay1, OUTPUT);
PinMode(relay2, OUTPUT);
PinMode(relay3, OUTPUT);
PinMode(relay4, OUTPUT);

DigitalWrite(relay1, HIGH);
DigitalWrite(relay2, HIGH);
DigitalWrite(relay3, HIGH);
DigitalWrite(relay4, HIGH)

mySerial.begin(9600);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if( mySerial.available()>0){
    val = mySerial.read();
    Serial.println(val);
  }

  if(val == '1'){
digitalWrite(relay2,LOW);
  }
  else if(val == '2'){
digitalWrite(relay3,LOW);
  }
  else if(val == '3'){
digitalWrite(relay3, LOW);
    }
    else if(val == '4'){
digitalWrite(relay4, LOW)
    }
    else if(val == '9'){
digitalWrite(relay2,LOW);
digitalWrite(relay3,LOW); 
digitalWrite(relay4,LOW);
digitalWrite(relay5,LOW);     
    }
    else if(val == 'A'){
digitalWrite(relay3,HIGH);
  }
else if(val == 'B'){
digitalWrite(relay3,HIGH);
  }
    
else if(val == 'C'){
digitalWrite(relay3,HIGH);
  } 
else if(val == 'D'){
digitalWrite(relay3,HIGH);
  }  
else if(val == 'I'){
digitalWrite(relay2,HIGH);
digitalWrite(relay3,HIGH); 
digitalWrite(relay4,HIGH);
digitalWrite(relay5,HIGH);     
    }  
  }
