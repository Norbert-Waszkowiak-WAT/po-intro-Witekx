#include<iostream>
using namespace std;

class Point {
public: 
    int x;
    int y;

    void print() {
        cout << "(" << x << "," << y << " )" << endl;
    }
}
int main() {
    Point p1;
    p1.x = 10;
    p1.y = 8;
    p1.print() << endl;

    Point p2;
    p2.x = 7;
    p2.y = 6;
    p2.print() << endl;

    Point p3;
    p3.x = 3;
    p3.y = 2;
    p3.print() << endl;

    return 0;
}