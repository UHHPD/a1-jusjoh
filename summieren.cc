// Initialisierung der Pakete
#include <iostream>
#include <fstream>
using namespace std; //Setzt den Namespace fest, dann muss man das nicht immer std::cout oder so schreiben. Es reicht cout
int main(){
  
  ifstream fin ("daten.txt"); //öffnet die Input-Datei
  ofstream fout("Summen.txt"); //öffnet die Output-Datei
  int summe;
  int zahl;
  for( int j = 0; j < 234; j++){ // Läuft durch jede Zeile und Schreibt die Summe in die Output-Datei
    summe = 0;
    for( int i = 0; i < 2; i++){ // Summiert die Zahlenpaare in aktueller Zeile
      fin >> zahl;
      summe = summe + zahl; 
    } 
    fout << summe << endl;
  }
  fout.close(); // Schließt die Output-Datei
  fin.close();  // Schließt die Input-Datei
}
