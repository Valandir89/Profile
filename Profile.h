#pragma once
#include <string>
#include <vector>

class Profile
{
private:

	std::string name{};
	int age{};
	std::string country{};
	std::string pronouns{};
	std::vector<std::string>hobbies{};

public:
	Profile(std::string n, int a, std::string c, std::string p = "they/them");

	std::string view_profile();
	void add_hobby(std::string new_hobby);


};	