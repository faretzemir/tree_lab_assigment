//Name: Liyana Aisyah
//ID: 1171101659
//Major: CE

//Name: Faretz Emir
//ID: 1171100781
//Major: CE

//Question 1


#include<stdio.h>


int main()

{

	int x, r, l, h, a, counter=0;
	float mass, weight=0;
	
	printf("MAXIMUM WEIGHT CALCULATOR\n[1]  Sphere\n[2]  Cube\n[3]  Cone\n");
	
	
do {

	printf("Enter a choice (0 to Quit) : ");
	scanf("%d", &x);
	
	if(x==1)
	{printf("----SPHERE----\n");
	printf("Radius of sphere (meters): ");
	scanf("%d", &r);
	mass=(float)7700*4*3.142*r*r*r/3;
	printf("Weight of sphere         : %.2f", mass);
	weight=weight+mass;
	printf("\n--------------\n");
	counter++;}
	
	else if(x==2)
	{printf("----CUBE----\n");
	printf("Length of cube (meters): ");
	scanf("%d", &l);
	mass=(float)7700*l*l*l;
	printf("Weight of cube         : %.2f", mass);
	weight=weight+mass;
	printf("\n--------------\n");
	counter++;}
	
	else if(x==3)
	{printf("----CONE----\n");
	printf("Height of cone (meters): ");
	scanf("%d", &h);
	printf("Radius of cone (meters): ");
	scanf("%d", &r);
	mass=(float)7700*3.142*r*r*h/3;
	printf("Weight of cone         : %.2f", mass);
	weight=weight+mass;
	printf("\n--------------\n");
	counter++;}
	
	else if(x!=0)
	printf("Option not available. Try again\n");
	

} while (x!=0);


	printf("NUMBER OF ITEMS            : %d\n", counter);
	printf("TOTAL WEIGHT               : %.2f\n", weight);
	printf("AVERAGE WEIGHT             : %.2f\n", weight/counter);
	printf("MAX WEIGHT                 : 800000.00\n");
	printf("ANALYSIS                   : ");
	if (weight>800000)
		printf("NOT SAFE\n");
		
	else
		printf("SAFE\n");






return 0;
}