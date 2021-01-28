#include "Profile.h"
#include <iostream>
#include <string>

Profile::Profile(std::string n, int a, std::string c, std::string p) :name{ n }, age{ a }, country{ c }, pronouns{ p }{}

std::string Profile::view_profile()
{
	std::string bio = "Name: " + name + "\nAge: " + std::to_string(age) + "\nPronouns: " + pronouns;
		for (auto s : hobbies)
			std::cout << s << " ";
		return bio + "s";
}

void Profile::add_hobby(std::string new_hobby)
{
	hobbies.push_back(new_hobby);
}
