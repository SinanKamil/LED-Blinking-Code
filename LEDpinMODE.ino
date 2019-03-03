
long ran;
long ran1;
int blueLED = 9;
int onTime = 1000;
int offTime = 900; 

void setup() {
// put your setup code here, to run once:
Serial.begin(800);
  pinMode (blueLED, OUTPUT);
  randomSeed(analogRead(blueLED));

}

void loop() {
  // put your main code here, to run repeatedly:
    ran = random(onTime);
    digitalWrite(blueLED, HIGH); 
    delay (ran);
    digitalWrite(blueLED, LOW);
    ran1 = random(offTime);
    delay (ran1);
}
