# Robot Suiveur de Ligne Autonome

## Description
Projet de robotique mobile autonome capable de suivre une ligne noire au sol grâce à des capteurs infrarouges et une logique de contrôle différentiel des moteurs DC via un pont en H (L298N / L293D).

## Fonctionnement
* **Capteurs Infrarouges :** Détection du contraste entre la surface claire et la ligne noire.
* **Correction de trajectoire :** Ajustement dynamique de la vitesse/direction des moteurs gauche et droit pour maintenir le robot centré sur la ligne.

## Composants matériels
* Carte Arduino (Uno ou Nano)
* 2 x Capteurs infrarouges d'évitement / suiveur de ligne (TCRT5000)
* Driver Moteur (Pont en H L298N ou L293D)
* Châssis de robot 2 roues motrices + roue folle
* Moteurs CC avec réducteurs
* Source d'alimentation (piles ou batterie Li-ion)
