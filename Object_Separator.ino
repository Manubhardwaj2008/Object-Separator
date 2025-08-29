// Define pins for sensors
const int trigPin = 9;               // Ultrasonic sensor trigger pin
const int echoPin = 10;               // Ultrasonic sensor echo pin
const int proximityPin = 11;          // Proximity sensor output pin
const int soilMoisturePin = A0;      // Soil moisture sensor output pin

// Define distance threshold for object detection (in cm)
const int distanceThreshold = 15;     // Ultrasonic sensor threshold
const int proximityThreshold = 15;     // Proximity sensor threshold (in cm)

// Function to read the ultrasonic distance
long readUltrasonicDistance() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Set the trigPin HIGH for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the echoPin, return the sound wave travel time in microseconds
  long duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance in cm
  long distance = duration * 0.034 / 2; // Speed of sound is 0.034 cm/us
  return distance;
}

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(proximityPin, INPUT);
}

void loop() {
  // Step 1: Detect object using ultrasonic sensor
  long distance = readUltrasonicDistance();
  
  if (distance < distanceThreshold) {
    Serial.println("Object detected!");

    // Step 2: Check for metallic substance using proximity sensor
    int proximityValue = digitalRead(proximityPin);
    if (proximityValue == HIGH) {
      Serial.println("Metallic substance detected.");
    } else {
      Serial.println("No metallic substance detected.");
    }

    // Step 3: Check for moisture using soil moisture sensor
    int soilMoistureValue = analogRead(soilMoisturePin);
    if (soilMoistureValue < 500) { // Adjust threshold as needed
      Serial.println("Moisture detected.");
    } else {
      Serial.println("No moisture detected.");
    }
  } else {
    Serial.println("No object detected.");
  }

  // Delay for a short period before the next loop
  delay(1000);
}
