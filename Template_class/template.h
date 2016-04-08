#pragma once
template <class M>
M maximum(M value1, M value2, M value3)
{
	M maimumvalue = value1;
	if (value2 > maimumvalue) {
		maimumvalue = value2;
	}
	if (value3 > maimumvalue) {
		maimumvalue = value3;
	}

	return maimumvalue;
}