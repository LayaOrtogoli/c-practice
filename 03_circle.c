 #include <stdio.h>
 #include <math.h>

 int main() {

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.1415;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);

    surfaceArea = 4 * PI * pow(radius, 2);

    // Volume formula: (4/3) * π * r^3
   // Use floating-point division to avoid integer truncation
    volume = 4.0/3.0 * PI * pow(radius, 3);

    printf("Area is %.2lf cm^2\n", area);
    printf("The surfaceArea is: %.2lf cm^2\n", surfaceArea);
    printf("volume is: %.2lf cm^3", volume);

    return 0;
 }
