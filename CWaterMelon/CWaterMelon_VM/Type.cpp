#include "pch.h"
#include "Type.h"

void WaterMelon::Type::Set(Type* t)
{
	if(_buffer == nullptr)
	{
		_buffer = t->_buffer;
		return;
	}
	else
	{
		Erase();
		_buffer = t->_buffer;
	}
}

void WaterMelon::Type::Erase()
{
	memset(_buffer, 0, _size);
	delete _buffer;
	_buffer = nullptr;
}

WaterMelon::Type::~Type()
{
	this->Erase();
}
