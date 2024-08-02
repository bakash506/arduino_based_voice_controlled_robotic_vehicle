String readvoice;

void setup() {
 
 Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);

}
//-----------------------------------------------------------------------//  
void loop() {
  while (Serial.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable 
  char c = Serial.read(); //Conduct a serial read
  readvoice += c; //build the string- "forward", "reverse", "left" and "right"
  }  
  if (readvoice.length() > 0) {
    Serial.println(readvoice); 

  if(readvoice == "*forward#") 
  {
    digitalWrite(6, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(3,LOW);
    delay(100);
    Serial.println("FORWARD"); 
  } 
  
  else if(readvoice == "*back#") 
  {
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(3,HIGH);
    delay(100);
    Serial.println("BACK"); 
  }
  
  else if (readvoice == "*left#")
  {
    digitalWrite (6,HIGH);
    digitalWrite (5,LOW);
    digitalWrite (4,LOW);
    digitalWrite (3,HIGH);
    delay (100);
    Serial.println("LEFT"); 
    
  }
    
 else if ( readvoice == "*right#")
 {
   digitalWrite (6, LOW);
   digitalWrite (5, HIGH);
   digitalWrite (4, HIGH);
   digitalWrite (3, LOW);
   delay (100);
   Serial.println("RIGHT"); 
 }
 
 else if (readvoice == "*library#")
 {
   digitalWrite (6, LOW);
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (3, LOW);
   delay (100);
   Serial.println("library"); 
 }
 else if (readvoice == "*auditorium#")
 {
   digitalWrite (6, LOW);
   digitalWrite (4, LOW);
   digitalWrite (3, LOW);
   digitalWrite (5, LOW);
   delay (100);
   Serial.println("Auditorium"); 
 }

 else if (readvoice == "*stop#")
 {
   digitalWrite (6, LOW);
   digitalWrite (5, LOW);
   digitalWrite (4, LOW);
   digitalWrite (3, LOW);
   delay (100);
   Serial.println("STOP"); 
 }
 
   

readvoice="";}} //Reset the variable