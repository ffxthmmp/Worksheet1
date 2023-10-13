float dot = 0.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.printf("Sin:%f,Cos:%f, X-Axis:%d\n", sin(dot), cos(dot+1.25), 0);
  dot = dot + 0.5;
  delay(100);
}
