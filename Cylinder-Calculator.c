// Variables and Data Types
// Name: Peter Thuo
// Reg No: CT100/G/30622/26
// Date: 23/9/2026
// Program to calculate volume and surface area of a cylinder

#include <stdio.h>

int main() {
    float height;
    float radius;
    double pi = 3.142;
    float volume;
    float surface_area;

    printf("Input height: \t");
    scanf("%f", &height);

    printf("Input radius: \t");
    scanf("%f", &radius);

    volume = pi * radius * radius * height;
    surface_area = 2 * pi * radius * radius + 2 * pi * radius * height;

    printf("The volume is: \t%f \n", volume);
    printf("The surface area is: \t%f \n", surface_area);

    return 0;
}
