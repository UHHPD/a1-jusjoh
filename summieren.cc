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
using namespace std;
int main(){
  
  ifstream fin ("daten.txt");
  ofstream fout("Summen.txt");
  int summe;
  int zahl;
  for( int j = 0; j < 234; j++){
    summe = 0;
    for( int i = 0; i < 2; i++){
      fin >> zahl;
      summe = summe + zahl; 
      
    } 
    fout << summe << endl;
  }
  //cout << summe << endl;
  fout.close();
  fin.close();
  

}
