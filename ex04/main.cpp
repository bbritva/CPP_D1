//
// Created by Gregorio Velva on 8/29/21.
//
#include <fstream>
#include <iostream>

bool	check(int argc, char *argv[])
{
	if (argc != 4 || !argv)
		return (false);
	return(true);
}

void	make_replace(std::string &str, std::string &s1, std::string &s2)
{
	unsigned long i = 0;

	while (i < str.length())
	{
		i = str.find(s1);
		if (i == std::string::npos)
			break;
		str = str.substr(0, i) + s2 + str.substr(i + s1.length());
	}
}

int main(int argc, char *argv[])
{
	std::ofstream	fout;
	std::ifstream	fin;
	std::string		str;
	std::string		buff;

	if (!check(argc, argv))
		return (0);
	fin.open(argv[1]);
	if (!fin.is_open())
		return(0);
	while(!fin.eof()){
		getline(fin, buff);
		str += buff;
		if (!fin.eof()){
			str += '\n';
		}
	}
	std::cout << str << std::endl;
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	make_replace(str, s1, s2);
	std::cout << str << std::endl;
}
