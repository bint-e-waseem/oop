#include <iostream>
using namespace std;
class Duration {
private:
    int minutes;
public:
    // Constructor
    Duration(int m = 0) : minutes(m) {}
    // Operator + to combine durations
    Duration operator+(const Duration &d) const {
        return Duration(minutes + d.minutes);
    }
    // Display function
    void print() const {
        cout << minutes << " minutes";
    }
};

class Activity {
private:
    string name;
    Duration timeSpent;
public:
    // Constructor
    Activity(string n, Duration t) : name(n), timeSpent(t) {}

    // Display function
    void showActivity() const {
        cout << "Activity: " << name << endl;
        cout << "Time Spent: ";
        timeSpent.print();
        cout << endl;
    }
};

class Athlete {
private:
    string username;
    Activity favActivity;

public:
    // Constructor
    Athlete(string u, Activity a) : username(u), favActivity(a) {
        cout << username << " created" << endl;
    }

    // Destructor
    ~Athlete() {
        cout << username << " destroyed" << endl;
    }

    // Display function
    void showAthleteInfo() const {
        cout << "Athlete Username: " << username << endl;
        favActivity.showActivity();
    }
};

int main() {
    // 1. Create two Duration objects and add them
    Duration d1(30);
    Duration d2(45);
    Duration total = d1 + d2;

    cout << "Total Duration: ";
    total.print();
    cout << endl << endl;

    // 2. Create an Activity object using Duration
    Activity act("Running", total);

    // 3. Create an Athlete object
    Athlete ath("Marcin", act);

    cout << endl;

    // 4. Display all info
    ath.showAthleteInfo();

    return 0;
}

