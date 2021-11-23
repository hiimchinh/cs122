#include "Inventory.h"
#include <iostream>
using namespace std;

void useInventoryClass()
{
    Inventory item;
    int itemNumber, quantity;
    double cost;
    cout << "Please input item number of the item: ";
    cin >> itemNumber;
    item.setItemNumber(itemNumber);
    cout << "Please input cost of the item: ";
    cin >> cost;
    item.setCost(cost);
    cout << "Please input quantiy of the item: ";
    cin >> quantity;
    item.setQuantity(quantity);
    cout << "Item number is: " << item.getItemNumber() << endl;
    cout << "Cost: " << item.getCost() << endl;
    cout << "Quantity: " << item.getQuantity() << endl;
    cout << "Total cost is: " << item.getTotalCost() << endl;
}

Inventory::Inventory()
{
    itemNumber = 0;
    quantity = 0;
    cost = 0;
    totalCost = 0;
}

Inventory::Inventory(int itemNumber, double cost, int quantity)
{
    this->itemNumber = itemNumber;
    this->cost = cost;
    this->quantity = quantity;
}

void Inventory::setTotalCost()
{
    totalCost = cost * quantity;
}

void Inventory::setItemNumber(int itemNumber)
{
    while (itemNumber < 0)
    {
        cout << "Item number cannot be smaller than zero! " << endl;
        cout << "Please input another number: ";
        cin >> itemNumber;
    }
    this->itemNumber = itemNumber;
}

void Inventory::setCost(double cost)
{
    while (cost < 0)
    {
        cout << "The cost of the item cannot be smaller than zero! " << endl;
        cout << "Please input another number: ";
        cin >> cost;
    }
    this->cost = cost;
    this->setTotalCost();
}

void Inventory::setQuantity(int quantity)
{
    while (quantity < 0)
    {
        cout << "Quantity of the item cannot be smaller than zero! " << endl;
        cout << "Please input another number: ";
        cin >> quantity;
    }
    this->quantity = quantity;
    this->setTotalCost();
}