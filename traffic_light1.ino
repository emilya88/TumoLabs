#define red_ns 13
#define orange_ 12
#define green_ns 11


void setup()
{
  pinMode(red_ns, OUTPUT);
  pinMode(orange_, OUTPUT);
  pinMode(green_ns, OUTPUT);

}

void loop()
{
  digitalWrite(red_ns, HIGH);
  delay(2000); 
  digitalWrite(red_ns, LOW);
  delay(1000); 
  digitalWrite(orange_, HIGH);
  delay(1500); 
  digitalWrite(orange_, LOW);
  delay(1000); 
  digitalWrite(green_ns, HIGH);
  delay(2000); 
  digitalWrite(green_ns, LOW);
  delay(1000); 
  digitalWrite(orange_, HIGH);
  delay(1500); 
  digitalWrite(orange_, LOW);
  delay(1000); 
}