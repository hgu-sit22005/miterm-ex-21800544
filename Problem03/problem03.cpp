#include <iostream>
#include <cstring>
#include <stdlib.h>

void solution01(*buff)
{
	char buff2[101]
	int index;
	for (int i=0; i<strlen(buff); i++)
	{
		if (buff[i]!='a')
			if (buff[i]!='A')
				if (buff[i]!='i')
					if (buff[i]!='I')
						if (buff[i]!='o')
							if (buff[i]!='O')
								if (buff[i]!='U')
									if (buff[i]!='u')
										if (buff[i]!='a')
											if (buff[i]!='e')
												if (buff[i]!='E')
												{
													
													buff2[index]=buff[i];
													index++;
												}
	}
	buff2[index]='/0';
	std::cout<<buff2<<std::endl;
}	

void solution02(*buff)
{
	char buff2[101];
	int index;
	for (int i=0; i<strlen(buff); i++)
	{
		switch(buff[i])
		{
			case 'a':
			case 'A':
			case 'E':
			case 'e':
			case 'i':
			case 'I':
			case 'O':
			case 'o':
			case 'u':
			case 'U':
				break;
			default:
				buff2[index]=buff[i];
				index++;
		}
		buff2[index]='/0';
		std::cout<<buff2<<std::endl;
	}
}

int main(int argc, char** argv)
{ 
	char buff[1000];
    std::cout << "Enter a string " << std::endl;
    std::cout << ">>";
    std::cin>>buf;
    solution01(buff);
    solution02(buff);
    solution03(buff);
    return 0;
}