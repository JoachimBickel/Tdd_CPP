#pragma once

#include <span>
#include <vector>

#include "Models.h"

namespace Tdd::TimeBookings {

class TimeBookingValidator {
public:
    std::vector<TimeBookingWithValidation> ValidateTimeBookings(
        std::span<const TimeBooking> timeBookings);
};

}
