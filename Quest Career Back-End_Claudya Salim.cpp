#include <stdio.h>

float num1; float result; int select;

float operand (int cal,float ans,float n2){
	switch (cal) {
		case 1:
			ans +=n2;
			break;
		case 2:
			ans -=n2;
			break;
		case 3:
			ans *=n2;
			break;
		case 4:
			ans /=n2;
			break;
	}
	return ans;
}

void list (){
	printf ("Select operator: (just enter the number)\n");
	puts ("1. Add       (+) ---> (1)");
	puts ("2. Subtract  (-) ---> (2)");
	puts ("3. Multiply  (x) ---> (3)");
	puts ("4. Divide    (/) ---> (4)");
	puts ("5. Calculate (=) ---> (5)");
}

void lanjut (){
	float num2;
	printf ("Enter next number: ");
	scanf ("%f",&num2);
	printf ("Current result: ");
	result = operand (select,result,num2);
	printf ("%f\n",result);
	printf ("\n");
	list ();
	printf ("Choice: ");
	scanf ("%d",&select);
	printf ("\n");
}

int main (){
	puts ("To use this calculator:");
	printf ("\n");
	printf ("First, enter a number: ");
	scanf ("%f",&num1);
	printf ("\n");
	list ();
	printf ("Choice: ");
	scanf ("%d",&select);
	printf ("\n");
	result = num1;
	if (select!=5){
		lanjut ();
		while (select!=5){
			lanjut ();
		}
	}
	printf ("Final result: %f",result);
	return 0;
}
