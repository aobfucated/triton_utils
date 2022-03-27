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

	uint32_t to_dword(const std::vector<uint8_t>& v)
	{
		assert(v.size() == 4);
		uint32_t t = 0;
		memcpy(&t, v.data(), 4);
		return t;
	}

	uint16_t to_word(const std::vector<uint8_t>& v)
	{
		assert(v.size() == 2);
		uint16_t t = 0;
		memcpy(&t, v.data(), 2);
		return t;
	}

		

}