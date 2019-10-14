#include <iostream>
#include <random>
#include <ctime>

char* generate_3_digit()
{
	char *res=new char[10];
	for (int i=0; i<10; i++)
	{
		res[i]=i+'0';
	}

	for (int i=0; int i<3; i++)
	{
		int index=random()%(10-i);

		temp=res[i];
		res[i]=res[index];
		res[index]=temp;

		temp=res[index];
		res[index]=res[9-i];
		res[9-i]=temp;
	}	
	return res;
}

int main()
{
	// Game initalization
	char guess[3];
	int trials = 0;

	char* answer = generate_3_digit();
		
	int strike = 0, ball = 0, out = 0;
	while(strike != 3)
	{
		trials++;

		strike = 0;
		ball = 0;
		out = 0;

		std::cout << "Guess three number: (ex. 1 2 3)" << std::endl;
		std::cin >> guess[0] >> guess[1] >> guess[2];
		
		for (int i=0; i<3; i++)
		{
			if ( guess[i]==answer[i] ) 
			{
				strike++;
				continue;
			}
			else
			{
				bool b_flag=false;
				for (int j=0; j<3; j++)
				{
					if (guess[i]==answer[j] ) ball ++;
					b_flag=true;
					break;
				}
				if( b_flag!=true)
				{
					out++;

				}
			}
		}

		std::cout<<answer<<std::endl;
		std::cout<<"S : "<<s<<"B : "<<b<<"O : "<<o <<std::cout;
























	
		std::cout << "S:" << strike << " B:" << ball << " O:"<< out << std::endl;
	}
	
	std::cout << "You have found the right number with " << trials << " trials" << std::endl;

	delete[] answer;
	return 0;
}