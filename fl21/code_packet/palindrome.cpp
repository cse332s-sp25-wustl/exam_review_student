#include "palindrome.h"
using namespace std;

palindrome::palindrome(const char* c_str, unsigned int l) : my_string(c_str, l/2) {
	cout << "palindrome constructor 1" << endl;
}

palindrome::palindrome(const palindrome& p) : my_string(p) {
	cout << "palindrome constructor 2" << endl;
}

palindrome::~palindrome() {
	cout << "palindrome destructor" << endl;
}

char& palindrome::operator[](unsigned int index) {
	if (index < length) {
		return characters[index];
	}
	else if (index < get_length()) {
		return characters[get_length() - index - 1];
	}
	else {
		throw out_of_range("index out of bounds");
	}
}

const char& palindrome::operator[](unsigned int index) const {
	if (index < length) {
		return characters[index];
	}
	else if (index < get_length()) {
		return characters[get_length() - index - 1];
	}
	else {
		throw out_of_range("index out of bounds");
	}
}

unsigned int palindrome::get_length() const {
	return length * 2;
}

void palindrome::print() {
	cout << "printing palindrome" << endl;
	cout << *this << endl;
}

ostream& operator<<(ostream& o, const palindrome& s) {
	for (unsigned int i = 0; i < s.length; ++i) {
		o << *(s.characters + i);
	}
	for (unsigned int i = 0; i < s.length; ++i) {
		o << *(s.characters + s.length - i - 1);
	}
	return o;
}
