// Define a structure representing a point in 3D space and implement functions to calculate distance and midpoint between two points


#include <iostream>
#include <cmath>

// Define the structure for a 3D point
struct Point3D {
    double x;
    double y;
    double z;
};

// Function to calculate the Euclidean distance between two 3D points
double calculateDistance(const Point3D& p1, const Point3D& p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    double dz = p1.z - p2.z;
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

// Function to calculate the midpoint between two 3D points
Point3D calculateMidpoint(const Point3D& p1, const Point3D& p2) {
    Point3D midpoint;
    midpoint.x = (p1.x + p2.x) / 2.0;
    midpoint.y = (p1.y + p2.y) / 2.0;
    midpoint.z = (p1.z + p2.z) / 2.0;
    return midpoint;
}

int main() {
    Point3D point1 = {1.0, 2.0, 3.0};
    Point3D point2 = {4.0, 5.0, 6.0};

    double distance = calculateDistance(point1, point2);
    Point3D midpoint = calculateMidpoint(point1, point2);

    std::cout << "Point 1: (" << point1.x << ", " << point1.y << ", " << point1.z << ")\n";
    std::cout << "Point 2: (" << point2.x << ", " << point2.y << ", " << point2.z << ")\n";
    std::cout << "Distance between points: " << distance << "\n";
    std::cout << "Midpoint between points: (" << midpoint.x << ", " << midpoint.y << ", " << midpoint.z << ")\n";

    return 0;
}
