int LED = 4;
int PIR = 5;
void setup()
{
 // pinMode(13, OUTPUT);
  Serial.begin(9600);
  pinMode(PIR , INPUT);
  pinMode(LED, OUTPUT);

}

void loop()
{
  int a=digitalRead(PIR);
  Serial.println(a);
  if (a==1)
  {
    digitalWrite(LED , HIGH);
    Serial.println("LED IS ON");
  }
  else
  {
    digitalWrite(LED , LOW);
    Serial.println("LED IS OFF");
  }
 // Serial.println("LED IS ON");
}
