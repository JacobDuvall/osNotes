#include <stdio.h>

int main (int argc, char ** argv) {
	
	int mything =27;

	printf("mything => %d\n", mything);
	printf("mything => %p\n", &mything);

	//scanf("%d", &mything);
	//printf("mything => %d\n", mything);
	
	//pointers
	int *p= NULL;;
	printf("p => %p", p);
	//printf("*p => %d\n", *p); // printing nil is breaking things
	
	//p value set
	p =  &mything; //p is an address so setting it equal to the address of mything copies the address of mything into p. 
        printf("p => %p\n", p);
	printf("*p => %d\n", *p);

	/*
	 * p = 0x38321312a
	 * *p = [0x3821312a]->
	 */
	float carnival;
	carnival = 3.14;

	int *p2 = NULL;
	// printf("*p2 => %d\n", *p2); //core dump
	printf("p2 => %p\n", p2);

	// func is a function pointing to a function pointing to an integer
	// http://cseweb.ucsd.edu/~ricko/rt_lt.rule.html
	/*int *(*func()) (); //right to left rule
	int *func();
	int *func;
	int func;
	*/

	int **p3; //double pointer, pointer to a pointer to an int
	p3 = &p;
	//mything{27} <- p {0x38321312a} <- p3 {0x38abd3823}
	
	printf("&p => %p\n", &p);
	printf("&p3 => %p\n", &p3);
	printf("**p3 => %d\n", **p3);

	int array[6] = {1,2,3,4,5,6}; //array can be treated the same as a pointer
	int *p4 = array;

	printf("sizeof(int) => %ld\n", sizeof(int));
	printf("sizeof(float) => %ld\n", sizeof(float));
	printf("sizeof(long) => %ld\n", sizeof(long));
	printf("sizeof(char) => %ld\n", sizeof(char));
	printf("sizeof(short) => %ld\n", sizeof(short));

	printf("----------\n");

	printf("array  => %p \n", array); //points to the first value in the array
	printf("&array[0] => %p \n", &array[0]); // proven it points to first value in the array
	
	p4 = &array[0];
	printf("array[1] => %d\n", array[1]);
	printf("&array[1] => %p\n", &array[1]);
	printf("*p4 => %d \n", *p4);
	++p4; //increment address;
	printf("*p4 => %d \n", *p4);

	for (int i = 0; i < 6; ++i) {
	
	}

	return 0;

}
