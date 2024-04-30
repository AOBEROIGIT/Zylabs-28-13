#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    ItemToPurchase(const string& name, const string& description, int price, int quantity);

    void SetName(const string& name);
    string GetName() const;

    void SetPrice(int price);
    int GetPrice() const;

    void SetQuantity(int quantity);
    int GetQuantity() const;

    void SetDescription(const string& description); 
    string GetDescription() const; 

    void PrintItemCost() const; 
    void PrintItemDescription() const; 

private:
    string itemName;
    string itemDescription; 
    int itemPrice;
    int itemQuantity;
};

#endif
