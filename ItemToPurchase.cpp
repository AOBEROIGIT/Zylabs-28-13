#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
ItemToPurchase::ItemToPurchase()
{
   itemName = "none";
   itemPrice = 0;
   itemQuantity = 0;
}

string ItemToPurchase::GetName()
{
   return itemName;
}
void ItemToPurchase::SetName(string param)
{
   itemName = param;
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