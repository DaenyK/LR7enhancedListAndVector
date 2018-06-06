#pragma once
#include"vector.h"

namespace Enhanced {
	template<typename T>
	class EnhancedVector : public Vector<T>
	{
	public:
		T& operator[](size_t index) throw() 
		{ 
			if (index >= cur_size)
				throw("Incorrect index");
			else
				return els[index];
		}
	};
};
