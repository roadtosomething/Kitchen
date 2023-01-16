#pragma once
#include "KitchenObject.h"
#include <string>
class Stove :
    virtual public KitchenObject
{
protected:
    std::string Color;
public:
    Stove(int inventoryNumber, std::string Color);
    virtual ~Stove() {};
    std::string GetColor();
    std::string ToString() override;
};

