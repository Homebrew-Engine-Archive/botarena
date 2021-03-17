#pragma once

struct CORE_EXPORT SpecialNumber
{
	static const int DivideBy2RoundUp;
	static const int DivideBy2RoundDown;
	static const int MultiplyBy2;
	static const int Any;
	static const int AnyPositive;
	static const int AnyNegative;
	static const int All;

	static bool IsSpecialNumber(int n)
	{
		ATLASSERT(DivideBy2RoundUp != DivideBy2RoundDown != MultiplyBy2 != Any != All);
		ATLASSERT(Any && DivideBy2RoundUp && DivideBy2RoundDown && All && MultiplyBy2 && AnyPositive && AnyNegative);

		if (n == DivideBy2RoundUp)
			return true;

		if (n == DivideBy2RoundDown)
			return true;

		if (n == MultiplyBy2)
			return true;

		if (n == All)
			return true;

		if (n == AnyPositive || n == AnyNegative)
			return true;

		return n == Any;
	}
};

#ifdef _MY_DEBUG
struct IntegerTypeID
{
	enum Enum
	{
		Standard,
		PlayerOrCreatureLife,
		CreaturePower,
		TurnNumberDelta,
		MaximumValue,
		MinimumValue
	};
};

typedef CStateSupportIntegerType<Integer<int, IntegerTypeID::PlayerOrCreatureLife>> Life_;
typedef CStateSupportIntegerType<Integer<int, IntegerTypeID::CreaturePower>> Power_;

typedef Integer<int, IntegerTypeID::PlayerOrCreatureLife> Life;
typedef Integer<int, IntegerTypeID::CreaturePower> Power;
typedef Integer<int, IntegerTypeID::TurnNumberDelta> TurnNumberDelta;
typedef Integer<int, IntegerTypeID::MaximumValue> MaximumValue;
typedef Integer<int, IntegerTypeID::MinimumValue> MinimumValue;

#define GET_INTEGER(I)	(I).Get()

#else
typedef int_ Life_;
typedef int_ Power_;

typedef int Life;
typedef int Power;
typedef int TurnNumberDelta;
typedef int MaximumValue;
typedef int MinimumValue;

#define GET_INTEGER(I)	(I)
#endif