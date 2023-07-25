#define gpio13 13
#define gpio12 12
#define gpio15 15
void setup() {
  pinMode(gpio13,OUTPUT); //red
  pinMode(gpio12,OUTPUT); //green
  pinMode(gpio15,OUTPUT); //blue
}

void loop() {
  // put your main code here, to run repeatedly:
  powerOnOffRgb(0,1);
  delay(1000);
  powerOnOffRgb(0,0);
  delay(1000);
  powerOnOffRgb(0,1);
  delay(1000);
}

void powerOnOffRgb(int index, int state){
  int states[4] =  {0,0,0};
  int gpios[4] =  {gpio13,gpio12,gpio15};
  for(int i=0; i<3; i++){
        states[i] = 0;
        states[index] = state;
        digitalWrite(gpios[i], states[i]);
        delay(50);
   }
   delay(100);
}
