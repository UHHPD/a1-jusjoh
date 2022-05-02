#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int main(){

  ifstream fin    ("datensumme.txt"); //öffnet die Input-Datei
  ifstream fin2   ("datensumme.txt"); //öffnet die Input-Datei
  int zahl;
  for( int i = 0; i < 8; i++){
    fin >> zahl;
    cout << zahl << endl;
    }

  for( int i = 0; i < 8; i++){
    fin2 >> zahl;
    cout << zahl << endl;
    }
}

