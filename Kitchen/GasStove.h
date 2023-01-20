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
    GasStove();
    ~GasStove() {};
    int GetGasConsuption();
    void print(bool need) override;
};

