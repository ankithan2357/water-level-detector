// HC-SR04 pins
#define TRIG_PIN 9
#define ECHO_PIN 10

// Capacitive water level sensor
#define WATER_SENSOR_PIN A0

// Buzzer
#define BUZZER_PIN 8

// Distance threshold in cm
#define WATER_LEVEL_THRESHOLD 10

void setup()
{
  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(WATER_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("Water Level Detector");
  Serial.println("--------------------");
}

void loop()
{
  
  // HC-SR04 distance measurement
  
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance in cm
  float distance = duration * 0.0343 / 2;

  
  // Capacitive sensor reading
  
  int waterSensorValue = analogRead(WATER_SENSOR_PIN);

  
  // Display readings


  Serial.println("--------------------");

  Serial.print("Water Surface Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  Serial.print("Capacitive Sensor Value: ");
  Serial.println(waterSensorValue);

 
  // Water level alert
 

  if (distance <= WATER_LEVEL_THRESHOLD)
  {
    digitalWrite(BUZZER_PIN, HIGH);

    Serial.println("WARNING: Water level is HIGH!");
    Serial.println("Buzzer: ON");
  }
  else
  {
    digitalWrite(BUZZER_PIN, LOW);

    Serial.println("Water level is NORMAL.");
    Serial.println("Buzzer: OFF");
  }

  delay(1000);
}

