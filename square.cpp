#include "square.h"
#include <cmath>

float Square::calculationSquere(float a) {
    float s = a * a;
    return s;
}

float Square::calculationRectangle(float a, float b) {
    float s = a * b;
    return s;
}

float Square::calculationParallelogram(float a, float b, float c){
    float s = a * b * sin(M_PI*c/180);
    return s;
}

float Square::calculationRhomb(float a, float b){
    float s = a * a * sin(M_PI*b/180);
    return s;
}

float Square::calculationTriangle(float a, float b, float c){
    float p = (a + b + c) / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

float Square::calculationCircle(float a){
    float s = M_PI * pow(a, 2);
    return s;
}

float Square::calculationCircleSector(float a, float b){
    float s = (M_PI * pow(a, 2) * b) / 360;
    return s;
}

float Square::calculationTrapezoid(float a, float b, float c){
    float s = ((a + b) / 2)*c;
    return s;
}
