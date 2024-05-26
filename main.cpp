#include <iostream>
#include <string>
class Person {
protected:
    std::string name;
    int age;
    char gender;

public:
    Person(std::string name, int age, char gender) : name(name), age(age), gender(gender) {}

    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Gender: " << gender << std::endl;
    }
};

class Student : public Person {
private:
    float averageGrade;
    std::string groupNumber;

public:
    Student(std::string name, int age, char gender, float averageGrade, std::string groupNumber)
        : Person(name, age, gender), averageGrade(averageGrade), groupNumber(groupNumber) {}

    void displayInfo() {
        Person::displayInfo();
        std::cout << "Average Grade: " << averageGrade << std::endl;
        std::cout << "Group Number: " << groupNumber << std::endl;
    }
};
class Fruit {
protected:
    std::string name;
    std::string color;

public:
    Fruit(std::string name, std::string color) : name(name), color(color) {}

    std::string getName() const {
        return name;
    }

    std::string getColor() const {
        return color;
    }
};

class Apple : public Fruit {
public:
    Apple(std::string color) : Fruit("Apple", color) {}
};

class Banana : public Fruit {
public:
    Banana() : Fruit("Banana", "Yellow") {}
};

int main() {
    Student student1("John", 20, 'M', 85.5, "G123");
    std::cout << "Student Information:\n";
    student1.displayInfo();
    std::cout << std::endl;
    Apple a("Red");
    Banana b;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";

    return 0;
}
