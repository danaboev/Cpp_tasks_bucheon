class Rectangle {
private:
    double width, height; 

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() {
        return width * height; 
    }
};



class Book {
public:
    std::string title;
    std::string author;
    void display() {
        std::cout << title << " by " << author << std::endl;
    }
}; 


