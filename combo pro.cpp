#include <iostream>
#include <cstdlib>   
using namespace std;

class FeetInches {
private:
    int feet;
    int inches;
    void simplify() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        } else if (inches < 0) {
            
            int borrow = (abs(inches) + 11) / 12; 
            feet -= borrow;
            inches += borrow * 12; 
        }
    }

public:
    
    FeetInches() : feet(0), inches(0) {}
    FeetInches(int ft, int in) : feet(ft), inches(in) {
        simplify();
    }
    explicit FeetInches(int totalInches) {
        
        feet = totalInches / 12;
        inches = totalInches % 12;
        simplify();
    }
    void display() const {
        cout << feet << " feet, " << inches << " inches";
    }
    FeetInches operator+(const FeetInches &right) const {
        FeetInches temp;
        temp.feet = feet + right.feet;
        temp.inches = inches + right.inches;
        temp.simplify();
        return temp;
    }
    FeetInches operator-(const FeetInches &right) const {
        FeetInches temp;
        temp.feet = feet - right.feet;
        temp.inches = inches - right.inches;
        temp.simplify();
        return temp;
    }
    
    bool operator==(const FeetInches &right) const {
        return (feet == right.feet) && (inches == right.inches);
    }
    bool operator<(const FeetInches &right) const {
        int totalLeft  = feet * 12 + inches;
        int totalRight = right.feet * 12 + right.inches;
        return totalLeft < totalRight;
    }
    bool operator!=(const FeetInches &right) const {
        return !(*this == right);
    }

    bool operator<=(const FeetInches &right) const {
        return (*this < right) || (*this == right);
    }

    bool operator>=(const FeetInches &right) const {
        return !(*this < right); 
    }
};

int main() {
    
    int inchesInput;
    cout << "Enter inches for first object (integer): ";
    if (!(cin >> inchesInput)) {
        cerr << "Invalid input\n";
        return 1;
    }
    FeetInches obj1(inchesInput);
    FeetInches obj2(3, 8); 

    cout << "Object 1: ";
    obj1.display();
    cout << "\nObject 2: ";
    obj2.display();
    cout << "\n\n";
    FeetInches sum = obj1 + obj2;
    FeetInches diff = obj1 - obj2;

    cout << "Sum: ";
    sum.display();
    cout << "\nDifference (obj1 - obj2): ";
    diff.display();
    cout << "\n\n";

    
    cout << "Comparisons:\n";
    cout << "obj1 == obj2 ? " << (obj1 == obj2 ? "true" : "false") << '\n';
    cout << "obj1 != obj2 ? " << (obj1 != obj2 ? "true" : "false") << '\n';
    cout << "obj1 < obj2  ? " << (obj1 < obj2  ? "true" : "false") << '\n';
    cout << "obj1 <= obj2 ? " << (obj1 <= obj2 ? "true" : "false") << '\n';
    cout << "obj1 >= obj2 ? " << (obj1 >= obj2 ? "true" : "false") << '\n';

    return 0;
}

