
int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;

int LED1 = D3;
int LED2 = D4;
int LED3 = D5;

int SPEAKER = D6;
int light = D11; 


void setup() {
  // put your setup code here, to run once:

    
    pinMode(BUT1, INPUT_PULLUP);
    pinMode(BUT2, INPUT_PULLUP);
    pinMode(BUT3, INPUT_PULLUP);

    pinMode(LED1, OUTPUT);
     pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);

 pinMode(SPEAKER, OUTPUT);

  pinMode(light, OUTPUT);
  digitalWrite(light, HIGH); //Standart light but customizable if necessary
}

void loop() {
  // put your main code here, to run repeatedly:

String input = "";
const String password = "abc";
boolean status = false;
for(int i= 0; i<3; i++){
while (status == false){


if(digitalRead(BUT1) == LOW){

tone(SPEAKER, 1000);
input = input +"a";
status = true;
delay(100);
}
else if(digitalRead(BUT2) == LOW){
  
tone(SPEAKER, 1000);
input = input +"b";
status = true;
delay(100);
}


else if(digitalRead(BUT3) == LOW){

tone(SPEAKER, 1000);
input = input +"c";
status = true;
delay(100);

}
}
noTone(SPEAKER);
status = false;

if(i == 0){
   digitalWrite(LED1, HIGH); 
}
else if(i == 1){
   digitalWrite(LED2, HIGH); 
}
else if(i == 2){
   digitalWrite(LED3, HIGH); 
}

}

//password
if(input == password){
tone(speakerPin, 600, 100); 
  delay(120);                 
  tone(SPEAKER, 900, 250);  
  delay(250);
}else{
tone(speakerPin, 180, 400);  
  delay(400);
    digitalWrite(LED1, LOW); 
      digitalWrite(LED2, LOW); 
        digitalWrite(LED3, LOW); 
}

}

