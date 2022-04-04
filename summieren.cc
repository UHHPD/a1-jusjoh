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

int main(){
  
  std::ifstream fin ("daten.txt");
  int summe;
  int zahl;
  for( int i = 0; i < 234; i++){
    fin >> zahl;
    summe = summe + zahl;
    
  }
  std::cout << summe << std::endl;
  fin.close();

}
