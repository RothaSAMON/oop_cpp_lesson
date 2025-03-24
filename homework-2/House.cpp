#include "Apartment.cpp"

class House {
private:
    Apartment* apartments;
    int numApartments;

public:
    // Constructor
    House(int numApartments, int apartmentCapacity) : numApartments(numApartments) {
        apartments = new Apartment[numApartments];
        for (int i = 0; i < numApartments; ++i) {
            apartments[i] = Apartment(apartmentCapacity);
        }
    }

    // Copy Constructor
    House(const House& other) : numApartments(other.numApartments) {
        apartments = new Apartment[numApartments];
        for (int i = 0; i < numApartments; ++i) {
            apartments[i] = other.apartments[i];
        }
    }

    // Destructor
    ~House() {
        delete[] apartments;
    }

    // Add a resident to an apartment
    void addResidentToApartment(int apartmentIndex, const Man& man) {
        if (apartmentIndex >= 0 && apartmentIndex < numApartments) {
            apartments[apartmentIndex].addResident(man);
        } else {
            cout << "Invalid apartment index!" << endl;
        }
    }

    // Display all apartments
    void display() const {
        for (int i = 0; i < numApartments; ++i) {
            apartments[i].display();
        }
    }
};