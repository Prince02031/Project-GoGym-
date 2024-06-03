#include <stdio.h>
#include <math.h>
#include <string.h>

// Function to calculate body fat percentage for males
double calculate_body_fat_percentage_male(double height, double neck, double waist) {
    // Height is expected in centimeters for these formulas
    return 495 / (1.0324 - 0.19077 * log10(waist - neck) + 0.15456 * log10(height)) - 450;
}

// Function to calculate body fat percentage for females
double calculate_body_fat_percentage_female(double height, double neck, double waist, double hip) {
    // Height is expected in centimeters for these formulas
    return 495 / (1.29579 - 0.35004 * log10(waist + hip - neck) + 0.22100 * log10(height)) - 450;
}

int main() {
    char gender[10];
    double height, weight, neck, waist, hip = 0.0;
    int age;

    // Input gender
    printf("Enter gender (male/female): ");
    scanf("%9s", gender);

    // Input other measurements
    printf("Enter height in cm: ");
    scanf("%lf", &height);
    printf("Enter weight in kg: ");
    scanf("%lf", &weight);
    printf("Enter neck circumference in cm: ");
    scanf("%lf", &neck);
    printf("Enter waist circumference in cm: ");
    scanf("%lf", &waist);

    // Input hip circumference if gender is female
    if (strcmp(gender, "female") == 0) {
        printf("Enter hip circumference in cm: ");
        scanf("%lf", &hip);
    }
    printf("Enter age: ");
    scanf("%d", &age);

    double body_fat_percentage;
    if (strcmp(gender, "male") == 0) {
        body_fat_percentage = calculate_body_fat_percentage_male(height, neck, waist);
    } else if (strcmp(gender, "female") == 0) {
        body_fat_percentage = calculate_body_fat_percentage_female(height, neck, waist, hip);
    } else {
        printf("Invalid gender input.\n");
        return 1;
    }

    printf("Body Fat Percentage: %.3lf%%\n", body_fat_percentage);

    return 0;
}
