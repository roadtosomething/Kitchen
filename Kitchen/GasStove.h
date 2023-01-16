#pragma once
#include "Stove.h"
#include <string>
class GasStove :
    public Stove
{
private:
    int gasConsuption;
public:
    GasStove(int inventoryNumber, std::string Color, int gasConsuption);
    virtual ~GasStove() {};
    int GetGasConsuption();
    std::string ToString() override;
};

