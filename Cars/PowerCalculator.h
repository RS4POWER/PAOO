// PowerCalculator.h
#pragma once

namespace Utilities {
    class PowerCalculator {
    public:
        virtual ~PowerCalculator() = default;

        virtual double calculatePower() const = 0;
    };
} // namespace Utilities
