#include <iostream>
#include <math.h>
using namespace std;

void getSineValues(float degree, float* result){
    float rad = degree * 0.0175;
    *result = sin(rad);

    return;
}

int main(){

    float degree,result;
    printf("Enter the Sin (degree) : ");
    scanf("%f", &degree);

    getSineValues(degree, &result);
    printf("%f", result);

    return 0;
}
