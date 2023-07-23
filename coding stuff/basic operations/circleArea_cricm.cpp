#include<iostream>

using namespace std;


void getArea_Circum(float radius, float* area, float* circum){
    float pi = 3.14;
    *area =  pi * radius * radius;
    *circum = 2 * pi * radius;

    return;

}
int main(){
    float radius;
    printf("Enter the radius , to find the area and circumference.\n");
    scanf("%f", &radius);
    float area , circum;
    
    getArea_Circum(radius, &area, &circum);

    printf("Area : %f\nCircumference : %f\n", area, circum); 

    return 0;
}