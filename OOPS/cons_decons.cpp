#include <iostream>
using namespace std;

class Patient
{
private:
    int id;
    string name;
    int age;

public:

    // =====================================================
    // 1. DEFAULT CONSTRUCTOR
    // =====================================================
    // No arguments are passed.
    // It automatically runs when an object is created.

    Patient()
    {
        id = 0;
        name = "Unknown";
        age = 0;

        cout << "Default Constructor called" << endl;
    }


    // =====================================================
    // 2. PARAMETERIZED CONSTRUCTOR
    // =====================================================
    // Arguments are passed while creating the object.
    // Used to initialize an object with specific values.

    Patient(int i, string n, int a)
    {
        id = i;
        name = n;
        age = a;

        cout << "Parameterized Constructor called" << endl;
    }


    // =====================================================
    // 3. COPY CONSTRUCTOR
    // =====================================================
    // Creates a new object by copying an existing object.
    //
    // p3 = p2 means:
    // p3 gets the same data as p2.

    Patient(const Patient &p)
    {
        id = p.id;
        name = p.name;
        age = p.age;

        cout << "Copy Constructor called" << endl;
    }


    // Function to display patient information
    void display()
    {
        cout << "ID   : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
        cout << endl;
    }


    // =====================================================
    // DESTRUCTOR
    // =====================================================
    // Destructor is automatically called when an object
    // is destroyed.
    //
    // It is mainly used for cleanup of resources.

    // ~Patient()
    // {
    //     cout << "Destructor called for " << name << endl;
    // }
};


int main()
{
    // =====================================================
    // DEFAULT CONSTRUCTOR EXAMPLE
    // =====================================================

    Patient p1;

    p1.display();


    // =====================================================
    // PARAMETERIZED CONSTRUCTOR EXAMPLE
    // =====================================================

    Patient p2(101, "Rahul", 20);

    p2.display();


    // =====================================================
    // COPY CONSTRUCTOR EXAMPLE
    // =====================================================

    Patient p3 = p2;

    p3.display();


    // =====================================================
    // DESTRUCTOR
    // =====================================================
    // When main() ends, objects p1, p2 and p3 are destroyed.
    // Their destructors are automatically called.

    return 0;
}