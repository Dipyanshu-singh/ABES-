#include <iostream>
using namespace std;

class hospital
{
private:
    bool admitted = false;

public:
    string name;
    int age;
    string disease;
    int room_no;

    void Admit()
    {
        if (admitted)
        {
            cout << "Patient is already admitted." << endl;
        }
        else
        {
            admitted = true;
            cout << "Patient admitted successfully." << endl;
            cout << "Room Number: " << room_no << endl;
        }
    }

    void Discharge()
    {
        if (admitted)
        {
            admitted = false;
            cout << "Patient discharged successfully." << endl;
        }
        else
        {
            cout << "Patient is not admitted." << endl;
        }
    }

    void Details()
    {
        cout << "\n--- Patient Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
        cout << "Room Number: " << room_no << endl;

        if (admitted)
            cout << "Status: Admitted" << endl;
        else
            cout << "Status: Discharged" << endl;
    }
};

int main()
{
    hospital P1;

    cout << "Enter patient name: ";
    getline(cin, P1.name);

    cout << "Enter age: ";
    cin >> P1.age;

    cout << "Enter disease: ";
    cin >> P1.disease;

    cout << "Enter room number: ";
    cin >> P1.room_no;

    cout << "\nWhat do you want? (Admit/Discharge/Details): ";
    char choice;
    cin >> choice;

    if (choice == 'a' || choice == 'A')
    {
        P1.Admit();
    }
    else if (choice == 'd' || choice == 'D')
    {
        P1.Discharge();
    }
    else if (choice == 'i' || choice == 'I')
    {
        P1.Details();
    }
    else
    {
        cout << "Invalid choice";
    }
}