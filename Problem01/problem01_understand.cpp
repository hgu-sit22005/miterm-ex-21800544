#include <iostream>
#include <random>
#include <ctime>

char* generate_3_digit()
{
	char* res = new char[10];

	for(int i = 0; i < 10; i++)
	{
		res[i] = i + '0';
		std::cout<<i<<": "<<res[i]<<std::endl;
	}

	for(int i = 0; i < 3; i++)
	{
		// Pick a number
		int index = rand() % (10 -i);
		std::cout<<"index : "<< index<<std::endl;
		std::cout<<"res[i] : "<< res[i]<<std::endl;
		std::cout<<"-----------------------"<<std::endl;
		int temp = res[i];
		res[i] = res[index];
		res[index] = temp;
		std::cout<<"res[index] : "<< res[index]<<std::endl;
		std::cout<<"res[i] : "<< res[i]<<std::endl;
		std::cout<<"-----------------------"<<std::endl;
		// Exclude the number
		std::cout<<"res[index] : "<< res[index]<<std::endl;
		std::cout<<"res[9-i] : "<< res[9-i]<<std::endl;
		std::cout<<"-----------------------"<<std::endl;
		temp = res[index];
		res[index] = res[9-i];
		res[9-i] = temp;
		std::cout<<"res[index] : "<< res[index]<<std::endl;
		std::cout<<"res[9-i] : "<< res[9-i]<<std::endl<<std::endl;
	}
	for(int i = 0; i < 10; i++)
	{
		std::cout<<i<<": "<<res[i]<<std::endl;
	}

	delete [] res;
	return res;
}

int main(){

// Game initalization
	char guess[3];
	int trials = 0;

	char* answer = generate_3_digit();
}
