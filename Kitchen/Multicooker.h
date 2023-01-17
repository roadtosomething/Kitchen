#pragma once
#include "ElectricStove.h"
#include "Pan.h"
#include <string>
class Multicooker :
    public ElectricStove, public Pan
{
private:
    bool hasFastCooking;
public:
    Multicooker(int inventoryNumberr, std::string Color, int volume, int power, bool hasFastCooking);
    ~Multicooker() {};
    bool isHasFasCooking();
    void print() override;
};

