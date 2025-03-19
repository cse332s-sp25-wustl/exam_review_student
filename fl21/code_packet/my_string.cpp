#include "my_string.h"
#include <iostream>
#include<exception>

using namespace std;

my_string::my_string() : length(0), characters(nullptr) {
	cout << "my_string constructor 1" << endl;
}

my_string::my_string(const char* c_str, unsigned int l) : length(l), characters(nullptr) {
	cout << "my_string constructor 2" << endl;
	characters = new char[length];
	for (unsigned int i = 0; i < length; ++i) {
		characters[i] = c_str[i];
	}
}

my_string::my_string(const my_string& s) : length(0), characters(nullptr) {
	cout << "my_string constructor 3" << endl;
	if (s.length > 0) {
		length = s.get_length();
		characters = new char[length];
		for (unsigned int i = 0; i < length; ++i) {
			characters[i] = s[i];
		}
	}
}

my_string::my_string(my_string&& s) : length(s.length), characters(s.characters) {
	cout << "my_string constructor 4" << endl;
	s.length = 0;
	s.characters = nullptr; 
}

my_string::~my_string() {
	cout << "my_string destructor" << endl;
	delete[] characters;
}

my_string& my_string::operator=(const my_string& s) { 
	cout << "my_string assignment 1" << endl;
	if (this == &s) {
		return *this;
	}
	if (s.length == 0) {
		length = 0;
		delete[] characters;  
		characters = nullptr;
	}
	else {
		length = s.length;
		delete[] characters;     // 53
		characters = new char[length];
		for (unsigned int i = 0; i < length; ++i) {
			characters[i] = s.characters[i];
		}
	}
	return *this;
}
my_string& my_string::operator=(my_string&& s) {
	cout << "my_string assignment 2" << endl;
	if (this == &s) {
		return *this;
	}
	delete[] characters; 
	characters = s.characters;
	length = s.length;
	s.characters = nullptr;      // 69
	s.length = 0;
	return *this;
}

char& my_string::operator[](unsigned int index) {
	if (index < length) {
		return *(characters + index);
	}
	throw std::out_of_range("index out of bounds");
}

my_string my_string::operator+(const my_string& s) const {
	unsigned int str_length = get_length() + s.get_length();
	char* arr = new char[str_length];
	for (unsigned int i = 0; i < get_length(); ++i) {
		arr[i] = characters[i];
	}
	for (unsigned int i = 0; i < s.get_length(); ++i) {
		arr[i + get_length()] = s[i];
	}
	my_string new_s(arr, str_length);
	delete[] arr;
	return new_s;
}

const char & my_string::operator[](unsigned int index) const {
	if (index < length) {
		return *(characters + index);
	}
	throw std::out_of_range("index out of bounds");
}

unsigned int my_string::get_length() const {
	return length;
}

void my_string::print() {
	cout << "printing my_string" << endl;
	cout << *this << endl;
}

ostream& operator<<(ostream& o, const my_string& s) {
	for (unsigned int i = 0; i < s.length; ++i) {
		o << *(s.characters + i);
	}
	return o;
}