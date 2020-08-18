#pragma once
#include <cstdint>
namespace WaterMelon
{
	/// <summary>
	/// Defines a list with allowed primitive types.
	/// </summary>
	enum class PrimitiveType
	{
		Null,
		Bool, //bool
		Int8, //int8_t
		Byte, // char
		Int16, //int16_t
		Int32, //int32_t
		Int64, //int64_t	
		UInt16, //int16_t
		UInt32, //int32_t
		UInt64, //int64_t	
		String, //char*
		Float, //float
		Double, //double
		Quad, //long double
		NonPrimitive, // user struct/class/table
	};
	/// <summary>
	/// A container allowing `auto` types.
	/// </summary>
	class Type
	{

		/*
			Private fields.
		*/

		void * _buffer;
		size_t _size;
	public:

		/*
			Constructors
		*/

		Type() : _buffer(nullptr), _size(0), VarType(PrimitiveType::NonPrimitive) {};
		Type(void* buffer, size_t lenght) : _buffer(buffer), _size(lenght), VarType(PrimitiveType::NonPrimitive) {};
		Type(bool b) : _buffer((void*)&b), _size(sizeof(bool)), VarType(PrimitiveType::Bool) {};
		Type(char character) : _buffer((void*)&character), _size(sizeof(char)), VarType(PrimitiveType::Byte) {};
		Type(uint8_t byte) : _buffer((void*)&byte), _size(sizeof(uint8_t)), VarType(PrimitiveType::Byte) {};
		Type(int16_t sh) : _buffer((void*)&sh), _size(sizeof(int16_t)), VarType(PrimitiveType::Int16) {};
		Type(uint16_t ush) : _buffer((void*)&ush), _size(sizeof(int16_t)), VarType(PrimitiveType::UInt16) {};
		Type(int32_t num) : _buffer((void*)&num), _size(sizeof(int32_t)), VarType(PrimitiveType::Int32) {};
		Type(uint32_t uinteg) : _buffer((void*)&uinteg), _size(sizeof(uint32_t)), VarType(PrimitiveType::UInt32) {};
		Type(int64_t ll):_buffer((void*)&ll), _size(sizeof(int64_t)), VarType(PrimitiveType::Int64) {};
		Type(uint64_t ull ): _buffer((void*)&ull), _size(sizeof(uint64_t)), VarType(PrimitiveType::UInt64) {};
		Type(char* string, size_t s) : _buffer((void*)string), _size(s) {};
		Type(float f) : _buffer((void*)&f), _size(sizeof(float)), VarType(PrimitiveType::Float) {};
		Type(double d) : _buffer((void*) &d), _size(sizeof(double)), VarType(PrimitiveType::Double) {};
		Type(long double quad) : _buffer((void*)&quad), _size(sizeof(long double)), VarType(PrimitiveType::Quad) {};
		
		/*
			Public fields
		*/
		
		/// <summary>
		/// Variable type.
		/// </summary>
		PrimitiveType VarType;

		/*
			Functions
		*/
		void Set(Type* t);
		void Erase();
		/*
			Operators
		*/
		~Type();
	};
}

