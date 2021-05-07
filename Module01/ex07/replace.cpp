#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

int		main(int argc, char *argv[])
{
	std::string line;
	std::string filename;
	std::string outputFile;
	size_t pos;

    if (argc == 4)
	{
		filename = argv[1];
		outputFile = filename + ".replaced";
		std::ifstream ifs(filename);
		std::ofstream ofs(outputFile);
		if (!argv[2] || !argv[3] || !argv[2][0] || !argv[3][0])
		{
			std::cout << "One or both strings were empty" << std::endl;
			return -1;
		}
		if (ifs.fail())
		{
			std::cout << "Failed to open file" << std::endl;
			return -1;
		}
		if (ofs.fail())
		{
			std::cout << "Failed to create output file" << std::endl;
			return -1;
		}
		while (ifs)
		{
			getline(ifs, line, '\n');
			pos = line.find(argv[2]);
			while (pos != std::string::npos)
			{
				line.replace(pos, strlen(argv[2]), argv[3]);
				pos = line.find(argv[2], pos + strlen(argv[3]));
			}
			if (ifs)
				ofs << line << std::endl;
		}
		ifs.close();
		ofs.close();
	}
	else
		std::cout	<< "Incorrect number of arguments" << std::endl << "usage: "
					<< argv[0] << " file <string_1> <string_2>" << std::endl;
	return (0);
}
