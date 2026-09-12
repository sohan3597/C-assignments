//this is the answer to question 2

#include <stdio.h>

int main() {
    float speed;
    float time;
    printf("Enter speed in km/h:");
    scanf("%f", &speed);
    printf("Enter time in hours:");
    scanf("%f", &time);

    float distance_in_km = speed * time;
    float distance_in_m = distance_in_km * 1000;
    float distance_in_cm = distance_in_km * 100000;
    float distance_in_mm  = distance_in_km * 1000000;

    printf("Distance in km: %.2f\n", distance_in_km);
    printf("Distance in m: %.2f\n", distance_in_m);
    printf("Distance in cm: %.2f\n", distance_in_cm);
    printf("Distance in mm: %.2f\n", distance_in_mm);

    return 0;
}