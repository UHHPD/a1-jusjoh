
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std; //Setzt den Namespace fest, dann muss man das nicht immer std::cout oder so schreiben. Es reicht cout
double zahl, summe, varianz, st_abweich, mw;

double mw_mw(ifstream & fin_mw){//Berechnet die Mittelwerte aus Dateien: mittelwerte.txt und varianzen.txt
  summe = 0;
  for( int j = 0; j < 26; j++){
    fin_mw >> zahl;
    summe += zahl;
  }
  return mw = summe/26;
}

int main(){

  ifstream fin    ("datensumme.txt"); //öffnet die Input-Datei
  ifstream fin2   ("datensumme.txt"); //öffnet die Input-Datei
  ofstream fout   ("mittelwerte.txt");
  ofstream fout2  ("varianzen.txt");
  
  for( int j = 0; j < 26; j++){ // Läuft durch jede Zeile und Schreibt die Summe in die Output-Datei
    summe = 0;
    for( int i = 0; i < 8; i++){
      fin >> zahl;
      summe += zahl;
    }
    mw = summe/9;
    summe = 0;
    for( int i = 0; i < 8; i++){
    fin2 >> zahl;
    summe += (zahl-mw)*(zahl-mw);
  }
    varianz = summe/9;
      
    fout << mw << endl;
    fout2 << varianz << endl;
  } 
  /*
  summe = 0;
  
  
  st_abweich = sqrt(varianz);
  cout << "Mittelwert:" << mw << std::endl;
  cout << "Varianz:" << varianz << std::endl;
  cout << "Standardabweichung:" << st_abweich << std::endl;
  
  */
  fin.close();  // Schließt die Input-Datei
  fout.close(); 
  fout2.close(); 
  ifstream fin_mw ("mittelwerte.txt");
  ifstream fin_v  ("varianzen.txt");
  cout << "Mittelwert der Mittelwerte: " << mw_mw(fin_mw) << endl;
}

