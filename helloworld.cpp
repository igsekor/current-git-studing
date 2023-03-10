#include <iostream>

using namespace std;

double linear(double x) {
  return x;
}

double square(double x) {
  return x * x;
}

double cubic(double x) {
  return x * x * x;
}

void printStars(double offset) {
  for (int i = 0; i < offset; i++) {
    cout << " ";
  }
  cout << "+" << endl;
}

void printFunc(double (&func)(double), double a, double b, int stepCount) {
  double dx = (b - a) / stepCount;
  for (int i = 0; i < stepCount; i++) {
    printStars(func(a + i * dx));
  }
}

int main(int argc, char const *argv[]) {
  double xMin = 0;
  double xMax = 10;
  int pointCount = 10;
  printFunc(linear, xMin, xMax, pointCount);
  printFunc(square, xMin, xMax, pointCount);
  printFunc(cubic, xMin, xMax, pointCount);
  return 0;
}
