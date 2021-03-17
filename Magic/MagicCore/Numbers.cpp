#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
const int SpecialNumber::DivideBy2RoundUp = std::numeric_limits<int>::min() + 1;
const int SpecialNumber::DivideBy2RoundDown = std::numeric_limits<int>::min();
const int SpecialNumber::MultiplyBy2 = std::numeric_limits<int>::min() + 2;
const int SpecialNumber::Any = std::numeric_limits<int>::max();
const int SpecialNumber::All = std::numeric_limits<int>::max() - 1;
const int SpecialNumber::AnyPositive = std::numeric_limits<int>::max() - 2;
const int SpecialNumber::AnyNegative = std::numeric_limits<int>::min() + 2;
