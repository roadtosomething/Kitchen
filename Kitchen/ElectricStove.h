#pragma once
#include "Stove.h"
#include <string>
class ElectricStove :
    public Stove
{
private:
    int power;
public:
    ElectricStove(int inventoryNumber, std::string Color, int power);
    virtual ~ElectricStove() {};
    int GetPower();
    std::string ToString() override;
};

