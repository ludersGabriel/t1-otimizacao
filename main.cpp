#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  if(n < 1) return 1;

  vector<int> d(n);
  for(auto& el : d) cin >> el;

  vector<int> a(n);
  for(auto& el : a) cin >> el;

  int vini, limiteMinimo, limiteMaximo;
  double k;
  cin >> vini >> limiteMinimo >> limiteMaximo >> k;

  int prodTermoMaxima;
  double CT;
  cin >> prodTermoMaxima >> CT;

  double CA;
  cin >> CA;

  cout << "min: ";
  int i;
  for(i = 1; i <= n; i++){
    cout << CA << " " << "y" << i << " + ";
    cout << CA << " " << "z" << i << " + ";
  } 

  for(i = 1; i < n; i++){
    cout << CT << " " << "prodTermo" << i << " + ";
  } 
  cout << CT << " " << "prodTermo" << i << ";\n\n";

  cout << "reserva0 = " << vini << ";\n";
  cout << "limiteMinimo = " << limiteMinimo << ";\n";
  cout << "limiteMaximo = " << limiteMaximo << ";\n";
  cout << "prodTermoMaxima = " << prodTermoMaxima << ";\n\n";

  i = 1; 
  for(auto el : d) cout << "demanda" << i++ << " = " << el << ";\n";
  cout << '\n';

  i = 1; 
  for(auto el : a) cout << "afluencia" << i++ << " = " << el << ";\n";
  cout << '\n';

  for(i = 1; i <= n; i++){
    cout << "y" << i << " - z" << i << " = afluencia" << i << " - aguaTurbinada" << i << ";\n"; 
    cout << "reserva" << i << " = reserva" << i - 1 << " + afluencia" << i << " - aguaTurbinada" << i << ";\n";
    cout << "reserva" << i << " >= " << "limiteMinimo" << ";\n";
    cout << "reserva" << i << " <= " << "limiteMaximo" << ";\n";
    cout << "prodTermo" << i << " <= " << "prodTermoMaxima" << ";\n";
    cout << k << " aguaTurbinada" << i << " + " << "prodTermo" << i << " >= " << "demanda" << i << ";\n";
    cout << "y" << i << " >= " << "0;\n";
    cout << "z" << i << " >= " << "0;\n";
    cout << "prodTermo" << i << " >= " << "0;\n";
    cout << "aguaTurbinada" << i << " >= " << "0;\n\n";
  }
}