#include "House.cpp"

int main() {
    // Create a house with 2 apartments, each with a capacity of 3 residents
    House house(2, 3);

    // Create some residents
    Man man1("John Doe", 30);
    Man man2("Jane Smith", 25);
    Man man3("Alice Brown", 28);
    Man man4("Bob White", 35);

    // Add residents to apartments
    house.addResidentToApartment(0, man1);
    house.addResidentToApartment(0, man2);
    house.addResidentToApartment(1, man3);
    house.addResidentToApartment(1, man4);

    // Display the house details
    house.display();

    return 0;
}