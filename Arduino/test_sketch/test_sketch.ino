void setup() {
  Serial.begin(9600);
}

void loop() {
  while(!Serial) {
    ;
  }
  Serial.write('\n');
  Serial.write('\r');
  
  delay(1000);
  
  Serial.write('h');
  
  delay(500);
  Serial.write('e');
  
  delay(500);
  Serial.write('l');
  
  delay(500);
  Serial.write('l');
  
  delay(500);
  Serial.write('o');  
  Serial.write('\n');
  Serial.write('\r');

  Serial.flush();
}
