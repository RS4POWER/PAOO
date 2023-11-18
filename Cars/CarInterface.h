
#pragma once

namespace Vehicles {
    class CarInterface {
    public:
        virtual ~CarInterface() = default;

        virtual const char* GetBrand() const = 0;
        virtual int GetYear() const = 0;
        virtual double GetPrice() const = 0;

        virtual void DisplayInfo() const = 0;
    };
}
