/*
int zahl ;
std:cin >> zahl
std::cout << zahl << std::endl;

#include <fstream>
std::ofstream fout("ausgabe.txt");

fout << zahl << std::endl;
fout.close();

#include <fstream>
std::ifstream fin("eingabe.txt");

int zahl
fin >> zahl
fin.close()
*/
#include <iostream>
#include <fstream>
using namespace std; //Setzt den Namespace fest, dann muss man das nicht immer angeben
int main(){
  
  ifstream fin ("daten.txt"); //öffnet die Input-Datei
  ofstream fout("Summen.txt"); //öffnet die Output-Datei
  int summe;
  int zahl;
  for( int j = 0; j < 234; j++){ // Schleife über alle Zeilen
    summe = 0;
    for( int i = 0; i < 2; i++){ // Schleife für jede Zeile. Liest Ziffer 1 und 2 und summiert diese.
      fin >> zahl;
      summe = summe + zahl; 
      
    } 
    fout << summe << endl; // Schreibt die Summe in die Output-Datei
  }
  //cout << summe << endl;
  fout.close(); // Schließt die Output-Datei
  fin.close();  // Schließt die Input-Datei
  

}
