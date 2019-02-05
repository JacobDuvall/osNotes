#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _course
{
    int student_id;
    int marks;
    char subject[20];   
};
typedef struct _course course;

int main()
{
    course *ptr;


    int i, no_of_records;
    printf("Enter number of records: ");
    scanf("%d", &no_of_records);
    ptr = (course*) malloc(no_of_records*sizeof(course));
    //ptr = calloc(no_of_records, sizeof(course));

    // Iterate through the no_of_records to get information from the user for each record
    for(i = 0; i < no_of_records; ++i) {
        printf("Enter the student id,name of the subject and marks respectively:\n");
        
        scanf("%d", &ptr[i].student_id);
	scanf("%s", &ptr[i].subject);
	scanf("%d", &ptr[i].marks);
	//course tempcourse;
	//scanf("%d %s %d", &tempcourse.student_id, tempcourse.subject, &tempcourse.marks);
	//ptr[i].student_id = tempcourse.student_id;
	//ptr[i]. marks = tempcourse.marks;
	//strcpy(ptr[i].subject, tempcourse.subject);
	//OR
	//scanf("%d %s %d", &ptr[i].student_id, ptr[i].subject, &ptr[i].marks);
	//OR
	//course tempcourse;
	//scanf("%d %s %d", &tempcourse.student_id, tempcourse.subject, &tempcourse.marks);
	//ptr[i] = tempcourse
	//THIS ABOVE ONE IS BAD because it assigns temporary memory to ptr[i] which could be overrided and invalid in the future
	//changing what ptr[] is poiting to BAD
	//memcpy(&ptr[i], &tempcourse, sizeof(course)); instead, should copy into the allocated memory
    }

    printf("Displaying Student Information:\n");
    for(i = 0; i < no_of_records ; ++i) {
        printf("Student ID: %d\n",(ptr+i)->student_id);
        printf("%s\t%d\n", (ptr+i)->subject, (ptr+i)->marks);
    }
    free(ptr); //for malloc()
    return 0;
}//git tag v1.0 "my finished code" for commit
