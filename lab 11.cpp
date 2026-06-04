#include <iostream>
#include <cmath>
using namespace std;
class Shape {
protected:
    string name;
    string type;

public:

    Shape(string n, string t) : name(n), type(t) {}

   
    virtual double getArea() { return 0.0; }
    virtual double getVolume() { return 0.0; }
    void showInfo() {
        cout << "Shape Name: " << name << endl;
        cout << "Shape Type: " << type << endl;
    }
};
class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(string n, double b, double h)
        : Shape(n, "2D Shape"), base(b), height(h) {}

    double getArea() override {
        return 0.5 * base * height;
    }

    double getVolume() override {
        return 0.0;  
    }
};
class Cube : public Shape {
private:
    double side;

public:
    Cube(string n, double s)
        : Shape(n, "3D Shape"), side(s) {}

    double getArea() override {
        return 6 * side * side;
    }

    double getVolume() override {
        return side * side * side;
    }
};
class Cylinder : public Shape {
private:
    double radius, height;

public:
    Cylinder(string n, double r, double h)
        : Shape(n, "3D Shape"), radius(r), height(h) {}

    double getArea() override {
    	double PI = 3.14;
    	return 2 * PI * radius * (radius + height);
        return PI * radius * radius * height;
    }

    double getVolume() override {
    	double PI = 3.14;
        return PI * radius * radius * height;
    }
};

int main() {
    Shape *sh;  
    Triangle t("Triangle", 10, 5);
    sh = &t;
    sh->showInfo();
    cout << "Area: " << sh->getArea() << endl;
    cout << "Volume: " << sh->getVolume() << endl << endl;
    Cube c("Cube", 4);
    sh = &c;
    sh->showInfo();
    cout << "Area: " << sh->getArea() << endl;
    cout << "Volume: " << sh->getVolume() << endl << endl;
    Cylinder cy("Cylinder", 3, 7);
    sh = &cy;
    sh->showInfo();
    cout << "Area: " << sh->getArea() << endl;
    cout << "Volume: " << sh->getVolume() << endl << endl;

    return 0;
}

