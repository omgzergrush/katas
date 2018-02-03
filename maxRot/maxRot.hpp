#pragma once

#include <string>
#include <vector>

class MaxRotate
{
public:
	static long long maxRot(long long n);
private:
	static void rotateRecursive(std::string, std::string);
	static std::vector<std::string> numberSequences;
	static long long getLargestAndClearVector(void);
};

void MaxRotate::rotateRecursive(std::string s, std::string beginningOfPrevious)
{
	std::string oldString = beginningOfPrevious + s;
	MaxRotate::numberSequences.push_back(oldString);

	if (s.length() <= 1)
	{
		return;
	}

	char f = s.front();
	s.erase(s.begin()); // erase first char
	s.push_back(f);

	rotateRecursive(s.substr(1), beginningOfPrevious + s.substr(0,1));
}

std::vector<std::string> MaxRotate::numberSequences;

long long MaxRotate::getLargestAndClearVector()
{
	long long largest = 0;
	for (auto it : MaxRotate::numberSequences)
	{
		long long candidate = std::strtoll(it.c_str(), nullptr, 0);
		if (candidate > largest) largest = candidate;
	}
	MaxRotate::numberSequences.clear();
	return largest;
}

long long MaxRotate::maxRot(long long n) {
	std::string original = std::to_string(n);
	MaxRotate::rotateRecursive(original, "");
	return MaxRotate::getLargestAndClearVector();
}
