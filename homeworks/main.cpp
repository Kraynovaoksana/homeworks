#include <iostream>
#include <cmath>
class Point {
private:
    float x, y;
public:
    void get(float a, float b) {
        x = a, y = b;
    }
    float dist() {
        return sqrt(pow(x,2) + pow(y,2));
    }
};

int main() {
    Point p1;
    p1.get(3, 4);
    std::cout << p1.dist() << std::endl;
    return 0;
}