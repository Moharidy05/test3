#include <iostream>

using namespace std;


int sum(int a, int b, int c) {
  return a + b + c;
}

int sum(int a, int b) {
  return a + b;
}

int sum(int a) {
  return a;
}
float sum(float a, float b) {
  return a + b;
}

float sum(float a) {
  return a;
}
int main() {
  int a, b, c;
  cin >> a, b, c;
  cout << sum(a, b, c) << endl;
  return 0;
}
