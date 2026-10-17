
#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance, fare;

    printf("Enter distance in kilometers: ");
    scanf("%f", &distance);

    if (distance < 0) {
        printf("Invalid distance.\n");
    } else {
        fare = calculateFare(distance);
        printf("Total fare = %.2f KES\n", fare);
    }

    return 0;
}
