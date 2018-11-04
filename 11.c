#include <stdio.h>
#include <stdlib.h> 

int n;
struct Student *students;

struct Student {
	char Name[1001];
	int ID;
	int Grade;
};

void sortGrade ( struct Student students[] )
{
	int i , j ;
	for ( i=0 ; i<n ; i++ ) {
		for ( j=0 ; j<n-i ; j++ ) {
    	    if (students[j].Grade<students[j+1].Grade) {
				struct Student tmp = students[j];
				students[j] = students[j+1];
				students[j+1] = tmp;
			}
	    }
	}
	for ( i=0 ; i<n ; i++)
		printf("%s %d %d\n" , students[i].Name , students[i].ID , students[i].Grade );
}

int main (void)
{
	scanf("%d" , &n );
	students = (struct Student *) malloc (n*sizeof(struct Student));
	int i;
	for ( i=0 ; i<n ; i++) {
		scanf("%s" , students[i].Name);
		scanf("%d" , &students[i].ID);
		scanf("%d" , &students[i].Grade);
	}
	sortGrade (students);
	free(students);
	return (0);
}
