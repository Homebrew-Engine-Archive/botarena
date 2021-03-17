namespace Epoch {
namespace Mathematic {

template <typename ValueType>
struct Average
{
	Average()
		: _Total(0)
		, _Count(0)
	{}

	operator ValueType() const
	{
		return GetAverage();
	}

	ValueType GetAverage() const
	{
		if (!_Count)
			return 0;
		return _Total / _Count;	
	}

	void AddValue(ValueType value)
	{
		_Total += value;
		++_Count;
	}

	void Reset()
	{
		_Total = 0;
		_Count = 0;
	}

	ValueType		_Total;
	unsigned int	_Count;
};

}
}