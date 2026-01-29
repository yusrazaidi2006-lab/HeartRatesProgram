#include <iostream>
using namespace std;

class HeartRates {
public:
    string name;
    int id;
    int date;
    int month;
    int year;

public:
    void idd() {
        int roll;
        cout << "Enter your 3 digit roll number: ";
        cin >> roll;

   
        id = (roll % 100) % 10;

        cout << "Your ID (3rd digit) is: " << id << endl;
    }


    HeartRates(string n, int e, int d, int m, int y) {
        name = n;
        id = e;
        date = d;
        month = m;
        year = y;
    }

    
    void set_name() {
        cout << "Enter your name: ";
        cin >> name;
    }

    
    string get_name() {
        return name;
    }

    int get_id() {
        return id;
    }

    void set_date() {
        cout << "Enter your birth date: ";
        cin >> date;

        cout << "Enter your birth month: ";
        cin >> month;

        cout << "Enter your birth year: ";
        cin >> year;

        cout << "Your date of birth is: ";
        cout << date << "/" << month << "/" << year << endl;
    }
    int get_age(){
      
    int currentYear = 2026;
    int currentMonth = 1; 
    int currentDay = 30;  

    int age = currentYear - year;

    if (month > currentMonth || (month == currentMonth && date > currentDay)) {
        age = age - 1;
    

    return age;
}

    }
    int get_MaxHeartRate (){
      int beat;
      beat=220-get_age();
      return beat;
    }
    void get_TargetHeartRate(){
    int maxHR = get_MaxHeartRate();
    double lower = 0.5 * maxHR;
    double upper = 0.85 * maxHR;

    cout << "Your target heart rate is between "
         << lower << " and " << upper << " beats per minute." << endl;
}

    void display(){
        cout<<"person's data:"<<endl;
      cout << "Name: " << name << endl;
cout << "Age: " << get_age() << endl;
cout << "ID: " << id << endl;
cout << "Date of birth: " << date << "/" << month << "/" << year << endl;
cout << "Maximum heart rate: " << get_MaxHeartRate() << endl;


    }
};

int main() {
    HeartRates h("", 0, 0, 0, 0);
    h.set_name();
    h.idd();
    h.set_date();
    cout<<"your age is:"<<h.get_age()<<endl;
    h.display();
    h.get_TargetHeartRate();
}


