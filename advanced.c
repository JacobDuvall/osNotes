#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct _book {

	int bookid : 3;

};
typedef struct _book book;

union _magazine {
	int id;
	float value;
	char title[20];
}; //size of this union will be 20
typedef union _magazine magazine;

int intcmp(const void * x, const void *y) {

	return (*(int*) x -*(int*)y);
}
//union give set of memory and allow union object to be represented by any one of these^ three values

//below look at size difference between union and struct
/*struct _magazine {
        int id;
        float value;
        char title[20];
}; //size of this struct will be 28
typedef struct _magazine magazine;
*/
int main(int argc, char *argv[]) {


	printf("Book size: %ld\n", sizeof(book));
	book textbook;
	textbook.bookid = 8; //1000
	printf("Textbook.id: %d\n", textbook.bookid);
	textbook.bookid = 2; //10
        printf("Textbook.id: %d\n", textbook.bookid);
	textbook.bookid = 7;//111 BINARY
        printf("Textbook.id: %d\n", textbook.bookid);
	textbook.bookid = 7;//111 BINARY
        printf("Textbook.id: %ud\n",(unsigned) textbook.bookid);

	/*
	 * 0x 01234567 //want to store this in memory
	 * //significant bit storing order
	 *
	 * Big Endian
	 * [01] 0x100
	 * [23] 0x101
	 * [45] 0x102
	 * [67] 0x013 
	 * 
	 * Little Endian
	 * [67] 0x100
         * [45] 0x101
         * [23] 0x102
         * [01] 0x013 
	 *
	 *
	 *
	 *
	 */

	printf("union size: %ld\n", sizeof(magazine));
	
	magazine time;
	
	time.id = 1234;
	printf("id: %d, value: %f, title: '%s'\n", time.id, time.value, time.title);
	
	time.value = 19.99;
	printf("id: %d, value: %f, title: '%s'\n", time.id, time.value, time.title);
	
	strcpy(time.title, "Person of the year");
	printf("%p, %p\n", &time.id, &time.value);	
	printf("id: %d, value: %f, title: '%s'\n", time.id, time.value, time.title);

	//---------------------------------------- arrays now
	
	int array[] = {10,23,256,5,32};
	
	qsort(array, 5, sizeof(int), intcmp);
	for(int i = 0; i < 5; ++i) {
		printf("=> %d\n", array[i]);
	}


	return 0;
}
