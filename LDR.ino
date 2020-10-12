#define led1 7
#define led2 11
#define ldr A2
int reading ;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(ldr,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
reading=analogRead(ldr);
if (reading<=300){
  digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
  Serial.print("THE LED IS ON");
}
else {
  digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
  Serial.print("THE LED IS OFF"); 
}
}
