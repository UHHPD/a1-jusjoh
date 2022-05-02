#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;



double poisson(double mu, int k){//Berechnet die Poissonwahrscheinlichkeit (mu^k)*exp(-mu)/k!
  muk = pow(mu,k);
  expmu = exp(-mu);
  k_fak = tgamma(k);
  return muk*expmu/k_fak;
}

int Poissonverteilung_1ab(){
  int zahl;
  ofstream fout ("hist.txt");
  ifstream fin("datensumme.txt");
  vector<int> zaehler(11);

  for(int i = 0; i < 234; i++){//Liest aus Datensumme aus und zählt die jeweiligen Anzahlen der Ziffern 0-9
    fin >> zahl;
    zaehler[zahl] += 1;
  }
  for(int i = 0; i < zaehler.size(); i++){//Schriebt Inhalt des Vektors in hist.txt 
    //cout << zaehler[i] << endl;
    fout << i << " " << zaehler[i] << endl;
  }
  
}
int main(){
  Poissonverteilung_1ab();
  double mu = 3,11538;
  
  
}


