#include <iostream>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"
#include <vector>

string ShoppingCart::GetCustomerName()
{
    return customerName;
}
string ShoppingCart::GetDate()
{
    return currentDate;
}
void ShoppingCart::AddItem(ItemToPurchase& param)
{
    cartItems.push_back(param);
}
void ShoppingCart::RemoveItem(string nameItem)
{
    for(int i=0; i<cartItems.size(); i++)
    {
        if(cartItems.at(i) == (nameItem))
        {
           cartItems.at(i).pop_back(nameItem);
        }
    }
}
int ShoppingCart::GetNumItemsInCart()
{
    return cartItems.size();
}
double ShoppingCart::GetCostOfCart()
{
    double sum = 0;
    for(int j=0; j<cartItems.size();j++)
    {
        sum = cartItems.at(j).GetPrice();
    }
    return sum;
}
void ShoppingCart::ModifyItem(ItemToPurchase& param)
{
    for(int k=0; k<cartItems.size(); k++)
    {
        if(cartItems.at(k) == param)
        {
            if(cartItems.at(k).GetName() == "none" and cartItems.at(k).GetDescription() == "none" and cartItems.at(k).GetQuantity() == 1 and cartItems.at(k).GetPrice() == 1 )
            {
                cartItems.at(k).SetName(param.GetName());
                cartItems.at(k).SetDescription(param.GetDescription());
                cartItems.at(k).SetPrice(param.GetPrice());
                cartItems.at(k).SetQuantity(param.GetQuantity());
            }
        }
    }
}
void ShoppingCart::PrintTotal()
{
     cout << customerName << "'s Shopping Cart" << " - " << currentDate << endl;
     cout << 
    for(int l=0; l<cartItems.size(); l++)
    {
       
    }
}
