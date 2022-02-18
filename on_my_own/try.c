#include<stdio.h>

int main(){
	int value;
	char shape;
	int dragon = 0, wizard = 0;
	char ans = 'n';

	while (ans != 'y'){
		printf("Enter the shape of the card in small letter(Heart = h, Diamond = d, etc) : ");
	scanf(" %c",&shape);
	printf("Enter the value : ");
	scanf(" %d",&value);
	if(shape == 'h' && value>2 && value<11)
		wizard++;
	else if(shape == 'd' || shape == 'c' || shape == 'h')
		dragon++;
	else 
		wizard++;
	printf("Do you want to end the game (y/n) : ");
	scanf("   %c",&ans);
	}
	if(dragon > wizard)
		printf("Dragons win!");
	else
		printf("Wizards wins!");
	return 0;
}