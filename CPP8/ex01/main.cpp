#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <array>

int random(int min, int max) //range : [min, max]
{
   static bool first = true;
   if (first) 
   {  
      srand( time(NULL) ); //seeding for the first time only!
      first = false;
   }
   return min + rand() % (( max + 1 ) - min);
}

int		main(void)
{
	std::vector<int> mirror;
	std::vector<int>::iterator it;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        int value = random(1, 100);
        mirror.push_back(value);
		std::cout << "[" << mirror[i] << "]";
    }
	std::cout << std::endl;
	std::sort(mirror.begin(), mirror.end());
	int res = 0;
	for (int i = 0; i < 9; i++)
    {
		std::cout << "[" << mirror[i] << "]";
    }
	std::cout << std::endl;
	it = mirror.begin() + 1;
	std::cout << *it << std::endl;
	std::cout << "---" << res << "---" << std::endl;
	std::cout << mirror.max_size() << std::endl;
	std::cout << UINT32_MAX << std::endl;
	return 0;
}