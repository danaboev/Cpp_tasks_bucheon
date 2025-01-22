
class Vehicle {
public:
    virtual void start() = 0; // Aniq virtual funksiya
    virtual void stop() = 0;  // Aniq virtual funksiya
    virtual void displayInfo() = 0; // Aniq virtual funksiya
};

class Car : public Vehicle {
private:
    int numberOfDoors;
public:
    Car(int doors);
    void start() override;
    void stop() override;
    void displayInfo() override;
};

class Bike : public Vehicle {
private:
    string type;
public:
    Bike(string bikeType);
    void start() override;
    void stop() override;
    void displayInfo() override;
};

class Garage {
private:
    vector<Vehicle*> vehicles;
public:
    void addVehicle(Vehicle* vehicle);
    void startAll();
    void stopAll();
    void displayAll();
};