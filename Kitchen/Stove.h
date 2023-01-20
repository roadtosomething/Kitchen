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
    Stove();
    virtual ~Stove() {};
    std::string GetColor();
    void print(bool need) override;
};

