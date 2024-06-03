#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double convert_weight_to_kg(double weight, char weight_unit[]) {
    if (strcmp(weight_unit, "lb") == 0 || strcmp(weight_unit, "LB") == 0) {
        return weight * 0.453592; // convert pounds to kg
    }
    else {
        return weight; // weight is already in kg
    }
}

double convert_height_to_meters(double height, char height_unit[], double inches) {
    if (strcmp(height_unit, "ft") == 0 || strcmp(height_unit, "FT") == 0) {
        return (height * 0.3048) + (inches * 0.0254); // convert feet and inches to meters
    }
    else {
        return height; // height is already in meters
    }
}

void calculate_bmi(double weight, double height) {
    double bmi = weight / (height * height);
    printf("BMI: %.3lf\n", bmi);

    if (bmi < 18.5) {
        printf("Status: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Status: Normal weight\n");
    }
    else if (bmi >= 25 && bmi < 29.9) {
        printf("Status: Overweight\n");
    }
    else {
        printf("Status: Obesity\n");
    }
}

int main() {
    double weight, height, inches = 0.0;
    char weight_unit[3], height_unit[3], gender[10];

    // Input weight
    printf("Enter weight (kg or lb): ");
    scanf("%lf %2s", &weight, weight_unit);

    // Input height
    printf("Enter height (m or ft): ");
    scanf("%lf %2s", &height, height_unit);
    if (strcmp(height_unit, "ft") == 0 || strcmp(height_unit, "FT") == 0) {
        printf("Enter additional inches: ");
        scanf("%lf", &inches);
    }

    // Input gender
    printf("Enter gender (male/female): ");
    scanf("%9s", gender);

    // Convert weight and height
    weight = convert_weight_to_kg(weight, weight_unit);
    height = convert_height_to_meters(height, height_unit, inches);

    // Calculate and display BMI
    calculate_bmi(weight, height);

    return 0;
}