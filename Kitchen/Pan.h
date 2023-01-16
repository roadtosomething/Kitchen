#pragma once
#include "KitchenObject.h"
#include <string>
class Pan :
    virtual public KitchenObject
{
private:
    int volume;
public:
    Pan(int inventoryNumber, int volume);
    virtual ~Pan() {};
    int GetVolume();
    std::string ToString() override;
};

