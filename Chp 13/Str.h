#pragma once
#ifndef GUARD_STR_H
#define GUARD_STR_H

#include <algorithm>
#include <iterator>
#include <cstring>
#include "Vec.h"

using namespace std;
class Str {
public:
	typedef Vec<char>::size_type size_type;
	typedef char* iterator;
	typedef const char* const_iterator;

	//생성자들
	Str() : data(new Vec<char>) { }

	Str(size_type n, char c) : data(new Vec<char>(n, c)) { }

	Str(const char* cp) : data(new Vec<char) {
		copy(
			cp, cp + strlen(cp),
			back_inserter(data)
		);
	}

	template<class In> Str(In b, In e) : data(new Vec<char>)
		copy(b, e, back_inserter(data));
	}

	size_type size() const { return data->size(); }
	char& operator[](size_type i) {
		data.make_unique();
		return (*data)[i]; }
const& operator
Str& operator+=(const Str& s) {
	data.make_unique();
	copy(s.data.bgin(), s.data end()),
		(back_inserter(*data));
	return *this;
}

iterator begin() { return data->begin(); }
iterator end() { return data->end(); }
const_iterator begin() { return data->begin(); }
const_iterator end() { return data->end(); }
private:
	Ptr<> data;
};

#endif // !GUARD_STR_J

