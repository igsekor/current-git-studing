#include <iostream>

using namespace std;

double linear(double x) {
  return x;
}

void printFunc(double (&func)(double), double a, double b, int stepCount) {
  double dx = (b - a) / stepCount;
  for (int i = 0; i < stepCount; i++) {
    cout << func(a + i * dx);
  }
}

int main(int argc, char const *argv[]) {
  double xMin = 0;
  double xMax = 10;
  int pointCount = 10;
  printFunc(linear, xMin, xMax, pointCount);
  return 0;
}
