#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
ItemToPurchase::ItemToPurchase()
{
   itemName = "none";
   itemDescription = "none";
   itemPrice = 0;
   itemQuantity = 0;
}
ItemToPurchase::ItemToPurchase(string param1, string param2, int param3, int param4)
{
    itemName = param1;
    itemDescription = param2;
    itemPrice = param3;
    itemQuantity = param4;
}
string ItemToPurchase::GetName()
{
   return itemName;
}
void ItemToPurchase::SetName(string param)
{
   itemName = param;
}
string ItemToPurchase::GetDescription()
{
    return itemDescription;
}
void ItemToPurchase::SetDescription(string param)
{
    itemDescription = param;
}
int ItemToPurchase::GetPrice()
{
   return itemPrice;
}
void ItemToPurchase::SetPrice(int param)
{
   itemPrice = param;
}
int ItemToPurchase::GetQuantity()
{
   return itemQuantity;
}
void ItemToPurchase::SetQuantity(int param)
{
   itemQuantity = param;
}