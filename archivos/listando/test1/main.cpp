#include <iostream>
#include <dirent.h>

int main()
{
	DIR* dir;
	dirent* ent;
	if(DIR* dir = opendir("/"))
	{
		while(dirent* ent = readdir(dir))
		{
			std::cout << ent->d_name << "\n";
		}
		closedir(dir);
	}

	return 0;
}
