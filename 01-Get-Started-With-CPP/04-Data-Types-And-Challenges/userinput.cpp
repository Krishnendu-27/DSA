#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  int num;

  cout << "enter a number: ";
  cin >> num;

  cin.ignore(); // clears leftover newline

  string name;
  cout << "enter your name : ";
  getline(cin, name);

  cout << name;

  return 0;
}
