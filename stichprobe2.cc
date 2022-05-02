
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

double mittelwert_berechnen(double x, int N){//Berechnet Mittelwert gegebener Summe und Anzahl
  return x/N;
}

double mw_mw(ifstream & fin_mw){//Berechnet die Mittelwerte aus Dateien: mittelwerte.txt und varianzen.txt
  double summe, zahl, mw;
  for( int j = 0; j < 26; j++){
    fin_mw >> zahl;
    summe += zahl;
  }
  return mw = mittelwert_berechnen(summe, 26);
}

int main(){
  double summe, zahl, mw, varianz, st_abweich;
  ifstream fin    ("datensumme.txt"); //öffnet eine Input-Datei
  ifstream fin2   ("datensumme.txt"); //öffnet eine Input-Datei
  ofstream fout   ("mittelwerte.txt");//öffnet eine Output-Datei
  ofstream fout2  ("varianzen.txt");  //öffnet eine Output-Datei
  
  for( int j = 0; j < 26; j++){//Berechnet den Mittelwert über alle 9er Zahlengruppen in Datensummen
    summe = 0;
    for( int i = 0; i < 9; i++){
      fin >> zahl;
      summe += zahl;
    }
    mw = mittelwert_berechnen(summe, 9);
    summe = 0;
    for( int i = 0; i < 9; i++){//Berechnet die Varianz über alle 9er Zahlengruppen in Datensummen
    fin2 >> zahl;
    summe += (zahl-mw)*(zahl-mw);
  }
    varianz = mittelwert_berechnen(summe, 9);
      
    fout << mw << endl;
    fout2 << varianz << endl;
  } 

  fin.close();
  fin2.close();
  fout.close();
  fout2.close();
  
  ifstream fin_mw ("mittelwerte.txt");
  ifstream fin_v  ("varianzen.txt");
  cout << "Mittelwert der Mittelwerte: " << mw_mw(fin_mw) << endl;
  cout << "Mittelwert der Varianzen: " << mw_mw(fin_v) << endl;
}
/*
Mittelwert der Mittelwerte: 3.11539
Mittelwert der Varianzen: 2.4359
*/