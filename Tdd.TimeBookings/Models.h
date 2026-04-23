#pragma once

#include <chrono>
#include <optional>
#include <string>

namespace Tdd::TimeBookings {

struct Break {
    std::chrono::system_clock::time_point From;
    std::chrono::system_clock::time_point To;
};

struct TimeBooking {
    std::chrono::system_clock::time_point Start;
    std::chrono::system_clock::time_point End;
    std::optional<Break> Break;
};

struct ValidationResult {
    bool IsValid;
    std::string ValidationError;
};

struct TimeBookingWithValidation {
    Tdd::TimeBookings::TimeBooking TimeBooking;
    Tdd::TimeBookings::ValidationResult ValidationResult;
};

}
