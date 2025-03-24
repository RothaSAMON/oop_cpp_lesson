#include "Man.cpp"

class Apartment {
private:
    Man** residents;
    int numResidents;
    int capacity;

public:
    // Default Constructor
    Apartment() : capacity(0), numResidents(0), residents(nullptr) {}

    // Constructor
    Apartment(int capacity) : capacity(capacity), numResidents(0) {
        residents = new Man*[capacity];
    }

    // Copy Constructor
    Apartment(const Apartment& other) : capacity(other.capacity), numResidents(other.numResidents) {
        residents = new Man*[capacity];
        for (int i = 0; i < numResidents; ++i) {
            residents[i] = new Man(*other.residents[i]);
        }
    }

    // Destructor
    ~Apartment() {
        for (int i = 0; i < numResidents; ++i) {
            delete residents[i];
        }
        delete[] residents;
    }

    // Add a resident
    void addResident(const Man& man) {
        if (numResidents < capacity) {
            residents[numResidents++] = new Man(man);
        } else {
            cout << "Apartment is full!" << endl;
        }
    }

    // Display residents
    void display() const {
        cout << "Apartment Residents:" << endl;
        for (int i = 0; i < numResidents; ++i) {
            residents[i]->display();
        }
    }
};