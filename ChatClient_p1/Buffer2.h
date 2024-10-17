#pragma once

#include <vector>
#include <string>

class Buffer
{
public:

	std::vector<uint8_t> m_BufferData;
	int m_WriteIndex;
	int m_ReadIndex;

	Buffer(int size = 512)
	{
		m_BufferData.resize(size);
		m_WriteIndex = 0;
		m_ReadIndex = 0;
	}

	~Buffer() {}

	void WriteUInt32LE(uint32_t value)
	{
		m_BufferData[m_WriteIndex++] = static_cast<uint8_t>(value);
		m_BufferData[m_WriteIndex++] = static_cast<uint8_t>(value >> 8);
		m_BufferData[m_WriteIndex++] = static_cast<uint8_t>(value >> 16);
		m_BufferData[m_WriteIndex++] = static_cast<uint8_t>(value >> 24);
	}

	uint32_t ReadUInt32LE()
	{
		uint32_t value = 0;

		value |= static_cast<uint8_t>(m_BufferData[m_ReadIndex++]);
		value |= static_cast<uint8_t>(m_BufferData[m_ReadIndex++]) << 8;
		value |= static_cast<uint8_t>(m_BufferData[m_ReadIndex++]) << 16;
		value |= static_cast<uint8_t>(m_BufferData[m_ReadIndex++]) << 24;

		return value;
	}

	void WriteString(const std::string& str)
	{
		size_t strLength = str.length();
		for (int i = 0; i < strLength; i++)
		{
			

			m_BufferData[m_WriteIndex++] = str[i];
		}
	}

	std::string ReadString(uint32_t length)
	{
		std::string str;
		for (uint32_t i = 0; i < length; i++)
		{
			str.push_back(m_BufferData[m_ReadIndex++]);
		}
		return str;
	}
};
