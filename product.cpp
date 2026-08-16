#include <iostream>
using namespace std;

class Product
{
    string product_name;
    int id;
    int quantity;
    float price;

public:
    void getData()
    {
        cout << "Enter Product Name: ";
        cin >> product_name;

        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void putData()
    {
        cout << "\nProduct Details" << endl;
        cout << "Product Name: " << product_name << endl;
        cout << "Product ID: " << id << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
    }

    void calculateBill()
    {
        float bill = quantity * price;
        cout << "Total Bill: " << bill << endl;
    }
};

int main()
{
    Product p;

    p.getData();
    p.putData();
    p.calculateBill();

    return 0;
}