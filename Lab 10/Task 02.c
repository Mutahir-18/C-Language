Define a structure to represent a point in 2D space with x and y coordinates. Implement
functions to calculate the distance between two points and to check if a point lies within
a specific rectangular boundary.

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;


int calc(Point p1, Point p2) {
    return (p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y);
}


int checkPoint(Point p, int xMin, int xMax, int yMin, int yMax) {
    return (p.x >= xMin && p.x <= xMax && p.y >= yMin && p.y <= yMax);
}

int main() {
    
    Point p1 = {2, 3};
    Point p2 = {5, 7};

    
    int Distance = calc(p1, p2);
    printf("The squared distance between the points is: %d\n", Distance);

    
    int xMin = 1, xMax = 6, yMin = 2, yMax = 8;

    
    if (checkPoint(p1, xMin, xMax, yMin, yMax)) {
        printf("Point p1 is within the rectangle.\n");
    } else {
        printf("Point p1 is outside the rectangle.\n");
    }

    if (checkPoint(p2, xMin, xMax, yMin, yMax)) {
        printf("Point p2 is within the rectangle.\n");
    } else {
        printf("Point p2 is outside the rectangle.\n");
    }

    return 0;
}

