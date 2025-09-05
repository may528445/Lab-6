#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point point1, point2;
    float distance;
    
    printf("x1: ");
    scanf("%f", &point1.x);
    
    printf("y1: ");
    scanf("%f", &point1.y);
    
    printf("x2: ");
    scanf("%f", &point2.x);
    
    printf("y2: ");
    scanf("%f", &point2.y);
    
    distance = sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));
    
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n", 
           point1.x, point1.y, point2.x, point2.y, distance);
    
    return 0;
}