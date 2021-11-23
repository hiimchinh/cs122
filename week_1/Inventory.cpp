#include "Inventory.h"
#include <iostream>
using namespace std;

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