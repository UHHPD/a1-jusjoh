#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

//File Declaration
ofstream fout ("hist.txt");

int main(){
  int zahl;
  ifstream fin("datensumme.txt");
  vector<int> zaehler(11);

  for(int i = 0; i < 234; i++){
    fin >> zahl;
    zaehler[zahl] += 1;
  }
  for(int i = 0; i < zaehler.size(); i++){
    //cout << zaehler[i] << endl;
    fout << i << " " << zaehler[i] << endl;
  }
}


