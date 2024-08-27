int pulsante = 2;

void setup() {
  // Hardware di input:
  pinMode(2,INPUT); // pulsante
  // Hardware di output:
  pinMode(3,OUTPUT); // LED verde
  pinMode(4,OUTPUT); // LED bianco
  pinMode(5,OUTPUT); // LED rosso
}

void loop() {
  pulsante = digitalRead(2);
  if (pulsante == LOW) {
    // Quando il pulsante NON è premuto accade che:
    digitalWrite(3, HIGH); // il LED verde è acceso
    digitalWrite(4, LOW); // il LED bianco è spento
    digitalWrite(5, LOW); // il LED rosso è spento
  }
  else {
    // Quando il pulsante è premuto invece accade che:
    digitalWrite(3, LOW); // il LED verde è spento
    digitalWrite(4, HIGH); // il LED bianco è acceso
    digitalWrite(5, HIGH); // il LED rosso è acceso
  }
}