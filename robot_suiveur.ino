// Définition des broches pour le moteur gauche
const int IN1 = 5;
const int IN2 = 6;

// Définition des broches pour le moteur droit
const int IN3 = 9;
const int IN4 = 10;

// Capteurs infrarouges (IR)
const int capteurGauche = 2;
const int capteurDroit = 3;

void setup() {
  // Configuration des broches moteurs en sortie
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Configuration des capteurs IR en entrée
  pinMode(capteurGauche, INPUT);
  pinMode(capteurDroit, INPUT);
}

void loop() {
  int etatGauche = digitalRead(capteurGauche);
  int etatDroit = digitalRead(capteurDroit);

  // Cas 1 : La ligne noire est au centre (les deux capteurs détectent le blanc)
  if (etatGauche == LOW && etatDroit == LOW) {
    avancer();
  }
  // Cas 2 : La ligne tourne à gauche
  else if (etatGauche == HIGH && etatDroit == LOW) {
    tournerGauche();
  }
  // Cas 3 : La ligne tourne à droite
  else if (etatGauche == LOW && etatDroit == HIGH) {
    tournerDroite();
  }
  // Cas 4 : Sortie de piste ou arrêt
  else {
    arreter();
  }
}

void avancer() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void tournerGauche() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void tournerDroite() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void arreter() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
