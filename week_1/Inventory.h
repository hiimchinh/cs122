#ifndef INVENTORY_H
#define INVENTORY_H

using namespace std;

class Inventory
{
private:
    int itemNumber, quantity;
    double cost, totalCost;

public:
    Inventory();
    Inventory(int itemNumber, double cost, int quantity);
    void setItemNumber(int itemNumber);
    void setQuantity(int quantity);
    void setCost(double cost);
    void setTotalCost();
    int getItemNumber() const
        { return itemNumber; }
    int getQuantity() const
        { return quantity; }
    double getCost() const
        { return cost; }
    double getTotalCost() const
        { return totalCost; }
};

#endif