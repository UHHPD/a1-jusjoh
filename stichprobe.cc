
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std; //Setzt den Namespace fest, dann muss man das nicht immer std::cout oder so schreiben. Es reicht cout
int main(){
  double zahl, summe, varianz, st_abweich;

  ifstream fin ("datensumme.txt"); //öffnet die Input-Datei
  ifstream fin2 ("datensumme.txt"); //öffnet die Input-Datei
  //ofstream fout("");
  for( int j = 0; j < 234; j++){ // Läuft durch jede Zeile und Schreibt die Summe in die Output-Datei
      fin >> zahl;
      summe += zahl; 
    } 
  double mw = summe/234;
  summe = 0;
  for( int j = 0; j < 234; j++){
    fin2 >> zahl;
    summe += (zahl-mw)*(zahl-mw);
  }
  varianz = summe/234;
  st_abweich = sqrt(varianz);
  cout << "Mittelwert:" << mw << std::endl;
  cout << "Varianz:" << varianz << std::endl;
  cout << "Standardabweichung:" << st_abweich << std::endl;
  
  
  fin.close();  // Schließt die Input-Datei
}
/*
Mittelwert:3.11538
Varianz:2.73455
Standardabweichung:1.65365
  */