#include <stdio.h>

int main(void)
{
	typedef enum{false, true} bool;
	
	bool test = false;
	
	if (test == true){
		printf("true");
	}
	if (test == false){
		printf("false");
	}
}

  