#pragma once 
#include<vector>
namespace ttutils
{

	uint64_t to_qword(const std::vector<uint8_t>& v)
	{
		assert(v.size() == 8);
		uint64_t t = 0;
		memcpy(&t, v.data(), 8);
		return t;
	}


}