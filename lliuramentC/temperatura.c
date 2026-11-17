#include <stdio.h>

int main(void) {
	int temperatura = 25;
	printf("Temperature: %d degrees\n", temperatura);
	
	if (temperatura >= 20) {
		printf("High temperature");
	} 
	else {
		printf("Low temperature");
	}
	return 0;
}
