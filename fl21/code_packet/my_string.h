#pragma once
#include<iostream>

class my_string {

	friend std::ostream& operator<<(std::ostream& o, const my_string& s);

protected:
	unsigned int length;
	char* characters;

public:
	my_string();
	my_string(const char* c_str, unsigned int length);
	my_string(const my_string&);
	my_string(my_string&&);

	virtual ~my_string();

	my_string& operator=(const my_string&);
	my_string& operator=(my_string&&);

	my_string operator+(const my_string&) const;
	virtual char& operator[](unsigned int index);
	virtual unsigned int get_length() const;
	virtual void print();  
	virtual const char & operator[](unsigned int index) const;
};

std::ostream& operator<<(std::ostream& o, const my_string& s); 