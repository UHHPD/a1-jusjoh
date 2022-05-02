#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
  int zahl;
  ifstream fin("datensumme.txt");
  vector<int> zaehler(11);

  for(i = 0; i < 234; i++){
    fin >> zahl;
    zaehler[zahl] += 1;
    
  }
}


