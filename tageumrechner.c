#include<stdio.h>

/*
	Nach der Eingabe von Tagen soll angezeigt werden,
	wie viele Stunden, Minuten und Sekunden das jeweils sind.
*/

int main () {
	float tage;
	int stunden,minuten,sekunden;

	printf("\n\nBitte geben Sie die Anzahl der Tage ein: ");
	scanf("%f",&tage);

	stunden=tage*24; //Berechnung der Stunden
	minuten=tage*24*60; //Berechnung der Minuten
	sekunden=tage*24*60*60;	//Berechnung der Sekunden

	printf("\nUmgerechnet sind das:\n%ih,\n%imin.und\n%isek!\n\n",stunden,minuten,sekunden);

	return 0;
}
