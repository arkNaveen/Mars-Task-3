const int echo = 6;
const int trig = 7;
const int buttonpin = 3;
int time;
volatile bool state = false;
int distance1 = 0;
int distance2 = 0;
void setup() {
  pinMode(buttonpin,INPUT_PULLUP);
  //calls the function startCalculation when the interrupt is triggered
  attachInterrupt(digitalPinToInterrupt(buttonpin),startCalculation,FALLING);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  // commencing serial communication
  Serial.begin(9600);
}

void loop(){
  //triggers whenever the state is true i.e, the pin is HIGH
  if(state){  //calculating distance from ultrasonic sensor
    digitalWrite(trig, HIGH);
    delay(1);
    digitalWrite(trig, LOW);
    time = pulseIn(echo, HIGH);
    distance2=(time*0.034)/2; 
    if(distance1!=distance2) {
      Serial.println(distance2);
      distance1 = distance2;
    }
  	delay(500);
  }
}
void startCalculation()  {
  state = !state;
}
