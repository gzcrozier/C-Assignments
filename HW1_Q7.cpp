#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;

    Point(double x, double y){
        Point::x = x;
        Point::y = y;
    }
};

struct Rectangle {
    double x1;
    double x2;
    double y1;
    double y2;
    
    Rectangle(double x1, double x2, double y1, double y2){
        Rectangle::x1 = min(x1,x2);
        Rectangle::x2 = max(x1,x2);
        Rectangle::y1 = min(y1,y2);
        Rectangle::y2 = max(y1,y2);
    }

    Rectangle(Point p1, Point p2){
        // : Rectangle(p1.x, p2.x, p1.y, p2.y) Fuctionality depends on compiler version.
        Rectangle::x1 = min (p1.x, p2.x);
        Rectangle::x2 = max (p1.x, p2.x);
        Rectangle::y1 = min (p1.y, p2.y);
        Rectangle::y2 = max (p1.y, p2.y);
    }
};

int main(){

    Rectangle recs[2] = {Rectangle(12.0, 3.0, 1.0, -3.0),
        Rectangle(Point(-3.5, -1.9), Point(-12.5, 2.1))
    };
    double area;
    double perimeter;
    double w;
    double h;
    for (int i=0 ; i < 2; i = i + 1){
        w = recs[i].x2 - recs[i].x1;
        h = recs[i].y2 - recs[i].y1;
        perimeter = (w + h) * 2;
        area = w*h;
        cout << "Rect[" << i << "] :" << endl;
        cout << "x1: " << recs[i].x1 << ", x2: " << recs[i].x2 << ", y1: " << recs[i].y1 << ", y2: " << recs[i].y2 << endl;
        cout << "(area: " << area << ", perimeter: " << perimeter << ")" << endl;
    }
    return 0;
}