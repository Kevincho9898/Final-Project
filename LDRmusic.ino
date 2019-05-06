
float analogPins[] = {0, 1, 2, 3, 4, 5};

void setup() 
{ 
  Serial.begin(9600);
} 
 
 
void loop() 
{ 
  for (int i = 0; i < 6; i++)
  {
    int val = analogRead(analogPins[i]);
    Serial.print(val);
    Serial.print(" ");
  }
  Serial.println();
}



int prPin = 0; // 0,1,2,3,4 
int prPins[] = {0, 1, 2, 3, 4};

int prReading; 
int buzzerPin = 4; //3,4,5,6,7 
int buzzerPins[] = {3, 4, 5, 6, 7};

long buzzerFreq; 

long BUZZ_FREQ_MAX = 2000; 

long PR_MAX = 823; // Maximum value for the photoresistor



void setup() {
    for (int i=0; i<5; i=i+1) {
      pinMode(buzzerPins[i], OUTPUT);
    }
    // pinMode(buzzerPin, OUTPUT); // set a pin for buzzer output

}



void loop() {
  
    for (int i=0; i<5; i=i+1) {
      prReading = analogRead(prPins[i]);
      buzzerFreq = (prReading * BUZZ_FREQ_MAX) / PR_MAX;
      buzzerFreq = buzzerFreq * (0.33*i+0.33);
      buzz(buzzerPins[i], buzzerFreq, 10);
    }

    // prReading = analogRead(prPin); // Values 0-1023

    // buzzerFreq = (prReading * BUZZ_FREQ_MAX) / PR_MAX;

    // buzz(buzzerPin, buzzerFreq, 10);

}



void buzz(int targetPin, long frequency, long length) {

    long delayValue = 10
    00000/frequency/2;

    long numCycles = frequency * length/ 1000;

    for (long i=0; i < numCycles; i++){

        digitalWrite(targetPin,HIGH);

        delayMicroseconds(delayValue);

        digitalWrite(targetPin,LOW);

        delayMicroseconds(delayValue);

    }

}
