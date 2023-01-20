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
    Pan();
    virtual ~Pan() {};
    int GetVolume();
    void print(bool need) override;
};

