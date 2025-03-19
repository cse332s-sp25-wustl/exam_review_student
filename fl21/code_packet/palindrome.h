#pragma once

#include "my_string.h"

class palindrome : public my_string {

	friend std::ostream& operator<<(std::ostream& o, const palindrome& s);

public:
	palindrome(const char*, unsigned int);
	palindrome(const palindrome&);

	~palindrome();

	char& operator[](unsigned int index) override;
	const char& operator[](unsigned int index) const override;
	unsigned int get_length() const override;
	void print() override;
};

std::ostream& operator<<(std::ostream& o, const palindrome& s);
