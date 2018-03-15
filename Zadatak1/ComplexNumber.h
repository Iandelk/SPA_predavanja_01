#pragma once

class ComplexNumber
{
private:
	int a, b;

public:
	ComplexNumber();
	ComplexNumber(int a, int b);
	ComplexNumber(ComplexNumber a, ComplexNumber b);
	void set_real(int a);
	void set_imaginary(int a);
	int get();



};