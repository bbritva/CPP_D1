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
}
