/*
  Using a Pololu A4988 or StepStick Stepper Motor Driver with FabScan-Shield.
*/

            //driver: 1 | 2 | 3  | 4
#define EN_PIN   2  //2 | 5 | 11 | A0
#define STEP_PIN 3  //3 | 6 | 12 | A1
#define DIR_PIN  4  //4 | 7 | 13 | A2
#define MS_PIN   A5 //HIGH for 16 microstepping, LOW for no microstepping

void setup()
{
  pinMode(EN_PIN, OUTPUT);
  digitalWrite(EN_PIN, HIGH); //deactivate driver (LOW active)
  pinMode(DIR_PIN, OUTPUT);
  digitalWrite(DIR_PIN, LOW); //LOW or HIGH
  pinMode(STEP_PIN, OUTPUT);
  digitalWrite(STEP_PIN, LOW);

  pinMode(MS_PIN, OUTPUT);
  digitalWrite(MS_PIN, LOW); //no microstepping

  digitalWrite(EN_PIN, LOW); //activate driver
}

void loop()
{
  digitalWrite(STEP_PIN, LOW);
  delay(2);
  digitalWrite(STEP_PIN, HIGH);
  delay(2);
}
