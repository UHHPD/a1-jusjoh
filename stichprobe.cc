
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std; 


int main(){
  double zahl, summe, varianz, st_abweich;
  //Oeffnen der Inputdateien
  ifstream fin ("datensumme.txt"); 
  ifstream fin2 ("datensumme.txt");

  
  for( int j = 0; j < 234; j++){//Berechnet den Mittelwert der Datensummen
      fin >> zahl;
      summe += zahl; 
    } 
  double mw = summe/234;
  
  summe = 0;
  for( int j = 0; j < 234; j++){//Berechnet die Varianz der Datensummen
    fin2 >> zahl;
    summe += pow(zahl-mw,2);
  }
  varianz = summe/234;
  st_abweich = sqrt(varianz);

  //Ausgabe ans Terminal
  cout << "Mittelwert: " << mw << std::endl;
  cout << "Varianz: " << varianz << std::endl;
  cout << "Standardabweichung: " << st_abweich << std::endl;
  
  
  fin.close();  // Schließt die Input-Datei
  fin2.close();
}
/*

Mittelwert:3.11538
Varianz:2.73455
Standardabweichung:1.65365

*/