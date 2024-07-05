#include <stdio.h>
#include <string.h>

int main(void) {
	char subject[51];
	float credit;
	char grade[3];
	
	float total_gpa = 0.0;
	float total_credit = 0.0;
	
	float gpa = 0.0;
	
	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s", subject, &credit, grade);
		
		if (strcmp(grade, "P") == 0) {
			continue;
		}
				
		if (strcmp(grade, "A+") == 0)
            total_gpa += 4.5 * credit;
        else if (strcmp(grade, "A0") == 0)
            total_gpa += 4.0 * credit;
        else if (strcmp(grade, "B+") == 0)
            total_gpa += 3.5 * credit;
        else if (strcmp(grade, "B0") == 0)
            total_gpa += 3.0 * credit;
        else if (strcmp(grade, "C+") == 0)
            total_gpa += 2.5 * credit;
        else if (strcmp(grade, "C0") == 0)
            total_gpa += 2.0 * credit;
        else if (strcmp(grade, "D+") == 0)
            total_gpa += 1.5 * credit;
        else if (strcmp(grade, "D0") == 0)
            total_gpa += 1.0 * credit;
        else if (strcmp(grade, "F") == 0)
            total_gpa += 0.0 * credit;
		
		total_credit += credit; 
	}

	gpa = total_gpa / total_credit;
	
	printf("%f\n", gpa);

	return 0;
}
