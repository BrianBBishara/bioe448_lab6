const int sensor_pin = 0;
int pulse_signal = 0;
float BPM = 0;

void setup() {

  Serial.begin(9600);
  

}

void loop() {

  delay(50);
  pulse_signal = analogRead(sensor_pin);
  Serial.println(pulse_signal);
  

}
