#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
#include <vector>
using namespace std;

/* Type your code here */
class ItemToPurchase
{
private:
string itemName;
string itemDescription;
int itemPrice;
int itemQuantity;
public:
ItemToPurchase();
ItemToPurchase(string param1, string param2, int param3, int param4);
void SetName(string param);
string GetName();
void SetDescription(string param);
string GetDescription();
void SetPrice(int param);
int GetPrice();
void SetQuantity(int param);
int GetQuantity();
void PrintItemCost();
void PrintItemDescription();
};
#endif