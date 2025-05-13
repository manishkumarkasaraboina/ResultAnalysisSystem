#include <stdio.h>
#include <stdlib.h>
void database1();
void database2();
void database3();
#define max 20
struct student {
    char name[30];
    char branch[5];
    char id[10];
};
struct student stud[max] = {
    {"SAKETH", "CSE", "GCTCA1"},
    {"UDAY", "CSE", "GCTCA2"},
    {"MANISH", "CSE", "GCTCA3"},
    {"AKSHITH", "CSE", "GCTCA4"},
    {"DEVENDRA", "CSE", "GCTCA5"},
    {"NIKHIL", "CSE", "GCTCA6"},
    {"VENU GOPAL", "CSE", "GCTCA7"},
    {"ROHITH", "CSE", "GCTCA8"},
    {"VAMSHI", "CSE", "GCTCA9"},
    {"SAITEJA", "CSE", "GCTCA10"},
    {"SRAVAN", "CSE", "GCTCA11"},
    {"CHAITANYA", "CSE", "GCTCA12"},
    {"SAI KIRAN", "CSE", "GCTCA13"},
    {"VIKRANTH", "CSE", "GCTCA14"},
    {"MUDASSIR", "CSE", "GCTCA15"}
};
int main() {
    int ch;
    while (1) {
        printf("\n 1. Sem 1 results");
        printf("\n 2. Sem 2 results");
        printf("\n 3. First Year results");
        printf("\n 4. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                database1();
                break;
            case 2:
                database2();
                break;
            case 3:
            	database3();
            	break;
            case 4:
                exit(0);
                break;
            default:
                printf("\n Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
void database1() {
    char s[10];
    int option, i, j, flag = 1, n;
    int marks[5], credits[5] = {4, 4, 3, 3, 3};
    char subjects[5][20] = {"PPS 1", "BEM", "BEE", "AP", "EG"};
    char grades[7][3] = {"O", "A+", "A", "B+", "B", "C", "F"};
    int total_credits = 0;
    float gpa1= 0.0,cgpa1;
    printf("\n Roll Number: ");
sn:
    scanf("%s", s);
    for (j = 0; j < sizeof(stud) / sizeof(stud[0]); j++) {
        if (strcmp(s, stud[j].id) != 0) {
            flag = 1;
        } else if (strcmp(s, stud[j].id) == 0) {
            printf("\nStudent name: %s", stud[j].name);
            printf("\nStudent Branch: %s\n", stud[j].branch);
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        printf("\nPlease enter a valid Roll number: ");
        goto sn;
    }
    printf("\nPlease press 1 to confirm your details or 2 to re-enter your Roll Number: ");
    scanf("%d", &n);
    if (n == 2) {
        printf("\nPlease enter your number: ");
        goto sn;
    }
    while (1) {
        printf("1. Enter marks\n");
        printf("2. Display marks\n");
        printf("3. Main\n");
        printf("Select an option: ");
        scanf("%d", &option);
        if (option == 1) {
            printf("\nEnter the marks for each subject:\n");
            for (i = 0; i < 5; i++) {
                printf("%s: ", subjects[i]);
                scanf("%d", &marks[i]);
            }
            printf("\nMarks entered successfully!\n");
        } else if (option == 2) {
            printf("\nResult of %s %s %s\n", stud[j].name, stud[j].branch, stud[j].id);
            printf("Marks and Grades for each subject:\n");
            for (i = 0; i < 5; i++) {
                printf("%s: %d, Grade: ", subjects[i], marks[i]);
                if (marks[i] >= 90 && marks[i] <= 100) {
                    printf("%s\n", grades[0]);
                    gpa1 += 10.0 * credits[i];
                } else if (marks[i] >= 80 && marks[i] < 90) {
                    printf("%s\n", grades[1]);
                    gpa1 += 9.0 * credits[i];
                } else if (marks[i] >= 70 && marks[i] < 80) {
                    printf("%s\n", grades[2]);
                    gpa1 += 8.0 * credits[i];
                } else if (marks[i] >= 60 && marks[i] < 70) {
                    printf("%s\n", grades[3]);
                    gpa1 += 7.0 * credits[i];
                } else if (marks[i] >= 50 && marks[i] < 60) {
                    printf("%s\n", grades[4]);
                    gpa1 += 6.0 * credits[i];
                } else if (marks[i] >= 40 && marks[i] < 50) {
                    printf("%s\n", grades[5]);
                    gpa1 += 5.0 * credits[i];
                } else if (marks[i] < 40) {
                    printf("%s\n", grades[6]);
                    gpa1 += 0.0 * credits[i];
                } else {
                    printf("Invalid marks entered!\n");
                }
                total_credits += credits[i];
            }
            cgpa1=gpa1/5;
            gpa1 = gpa1/total_credits;
            printf("\nGPA IN FIRST SEM: %.2f\n", gpa1);
            printf("\nCGPA IN FIRST SEM: %.1f\n",cgpa1);
        } else if (option == 3) {
            main();
        } else {
            printf("Invalid option.\n");
        }
    }
}
void database2() {
    char s[10];
    int option, i, j, flag = 1, n;
    int marks[6], credits[6] = {4, 4, 4, 4, 3, 2};
    char subjects[6][20] = {"PPS 2", "MVC", "DM", "SD", "EC", "ENG"};
    char grades[7][3] = {"O", "A+", "A", "B+", "B", "C", "F"};
    int total_credits = 0;
    float gpa2 = 0.0,cgpa2; 
    printf("\n Roll Number: ");
sn:
    scanf("%s", s);
    for (j = 0; j < sizeof(stud) / sizeof(stud[0]); j++) {
        if ((strcmp(s, stud[j].id) != 0)) {
            flag = 1;
        } else if (strcmp(s, stud[j].id) == 0) {
            printf("\nStudent name: %s", stud[j].name);
            printf("\nStudent Branch: %s\n", stud[j].branch);
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        printf("\nPlease enter a valid Roll number: ");
        goto sn;
    }
    printf("\nPlease press 1 to confirm your details or 2 to re-enter your Roll Number: ");
    scanf("%d", &n);
    if (n == 2) {
        printf("\nPlease enter your Roll number: ");
        goto sn;
    }
    while (1) {
        printf("1. Enter marks\n");
        printf("2. Display marks\n");
        printf("3. Main\n");
        printf("Select an option: ");
        scanf("%d", &option);
        if (option == 1) {
            printf("\nEnter the marks for each subject:\n");
            for (i = 0; i < 6; i++) {
                printf("%s: ", subjects[i]);
                scanf("%d", &marks[i]);
            }
            printf("\nMarks entered successfully!\n");
        } else if (option == 2) {
            printf("\nResult of %s %s %s\n", stud[j].name, stud[j].branch, stud[j].id);
            printf("Marks and Grades for each subject:\n");
            for (i = 0; i < 6; i++) {
                printf("%s: %d, Grade: ", subjects[i], marks[i]);
                if (marks[i] >= 90 && marks[i] <= 100) {
                    printf("%s\n", grades[0]);
                    gpa2 += 10.0 * credits[i];
                } else if (marks[i] >= 80 && marks[i] < 90) {
                    printf("%s\n", grades[1]);
                    gpa2 += 9.0 * credits[i];
                } else if (marks[i] >= 70 && marks[i] < 80) {
                    printf("%s\n", grades[2]);
                    gpa2 += 8.0 * credits[i];
                } else if (marks[i] >= 60 && marks[i] < 70) {
                    printf("%s\n", grades[3]);
                    gpa2 += 7.0 * credits[i];
                } else if (marks[i] >= 50 && marks[i] < 60) {
                    printf("%s\n", grades[4]);
                    gpa2 += 6.0 * credits[i];
                } else if (marks[i] >= 40 && marks[i] < 50) {
                    printf("%s\n", grades[5]);
                    gpa2 += 5.0 * credits[i];
                } else if (marks[i] < 40) {
                    printf("%s\n", grades[6]);
                } else {
                    printf("Invalid marks entered!\n");
                }
                total_credits += credits[i];
            }
            cgpa2=gpa2/6;
            gpa2 =gpa2/total_credits;
            printf("\nGPA IN SECOND SEM: %.2f\n", gpa2);
            printf("\nCGPA IN SECOND SEM: %.1f\n",cgpa2);
        } else if (option == 3) {
            main();
        } else {
            printf("Invalid option.\n");
        }
    }
}
void database3()
{
	 char s[10];
    int option, i, j, flag = 1, n,credits2[6]={4, 4, 4, 4, 3, 2};
    int marks1[5],marks2[6],credits1[5] = {4, 4, 3, 3, 3};
    char subjects1[5][20] = {"PPS 1", "BEM", "BEE", "AP","EG"};
    char subjects2[6][20] = {"PPS 2", "MVC", "DM", "SD", "EC", "ENG"};
    char grades[7][3] = {"O", "A+", "A", "B+", "B", "C", "F"};
    int total_credits1 = 0, total_credits2 = 0;
    float gpa1= 0.0,cgpa1,gpa2=0.0,cgpa2,cgpa,gpa;
    
     printf("\n Roll Number: ");
sn:
    scanf("%s", s);
    for (j = 0; j < sizeof(stud) / sizeof(stud[0]); j++) {
        if (strcmp(s, stud[j].id) != 0) {
            flag = 1;
        } else if (strcmp(s, stud[j].id) == 0) {
            printf("\nStudent name: %s", stud[j].name);
            printf("\nStudent Branch: %s\n", stud[j].branch);
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        printf("\nPlease enter a valid Roll number: ");
        goto sn;
    }
    printf("\nPlease press 1 to confirm your details or 2 to re-enter your Roll Number: ");
    scanf("%d", &n);
    if (n == 2) {
        printf("\nPlease enter your number: ");
        goto sn;
    }
    while (1) {
        printf("1. Enter marks\n");
        printf("2. Display marks\n");
        printf("3. Main\n");
        printf("Select an option: ");
        scanf("%d", &option);
         if (option == 1) {
            printf("\nEnter the marks for each subject for sem1:\n");
            for (i = 0; i < 5; i++) {
                printf("%s: ", subjects1[i]);
                scanf("%d", &marks1[i]);
            }
            printf("\nMarks entered successfully for sem1 !\n");
            printf("\nEnter the marks for each subject:\n");
            for (i = 0; i < 6; i++) {
                printf("%s: ", subjects2[i]);
                scanf("%d", &marks2[i]);
            }
            printf("\nMarks entered successfully for sem2!\n");
            
           
        } else if (option == 2) {
            printf("\nResult of %s %s %s\n", stud[j].name, stud[j].branch, stud[j].id);
            
             printf("Marks and Grades for each subject of sem1:\n");
            for (i = 0; i < 5; i++) {
                printf("%s: %d, Grade: ", subjects1[i], marks1[i]);
                if (marks1[i] >= 90 && marks1[i] <= 100) {
                    printf("%s\n", grades[0]);
                    gpa1 += 10.0 * credits1[i];
                } else if (marks1[i] >= 80 && marks1[i] < 90) {
                    printf("%s\n", grades[1]);
                    gpa1 += 9.0 * credits1[i];
                } else if (marks1[i] >= 70 && marks1[i] < 80) {
                    printf("%s\n", grades[2]);
                    gpa1 += 8.0 * credits1[i];
                } else if (marks1[i] >= 60 && marks1[i] < 70) {
                    printf("%s\n", grades[3]);
                    gpa1 += 7.0 * credits1[i];
                } else if (marks1[i] >= 50 && marks1[i] < 60) {
                    printf("%s\n", grades[4]);
                    gpa1 += 6.0 * credits1[i];
                } else if (marks1[i] >= 40 && marks1[i] < 50) {
                    printf("%s\n", grades[5]);
                    gpa1 += 5.0 * credits1[i];
                } else if (marks1[i] < 40) {
                    printf("%s\n", grades[6]);
                    gpa1 += 0.0 * credits1[i];
                } else {
                    printf("Invalid marks entered!\n");
                }
                total_credits1 += credits1[i];
            }
            cgpa1=gpa1/5;
            gpa1 = gpa1/total_credits1;
            printf("\nGPA IN FIRST SEM: %.2f\n", gpa1);
            printf("\nCGPA IN FIRST SEM: %.1f\n",cgpa1);
            
            
			printf("Marks and Grades for each subject of sem2:\n");
            for (i = 0; i < 6; i++) {
                printf("%s: %d, Grade: ", subjects2[i], marks2[i]);
                if (marks2[i] >= 90 && marks2[i] <= 100) {
                    printf("%s\n", grades[0]);
                    gpa2 += 10.0 * credits2[i];
                } else if (marks2[i] >= 80 && marks2[i] < 90) {
                    printf("%s\n", grades[1]);
                    gpa2 += 9.0 * credits2[i];
                } else if (marks2[i] >= 70 && marks2[i] < 80) {
                    printf("%s\n", grades[2]);
                    gpa2 += 8.0 * credits2[i];
                } else if (marks2[i] >= 60 && marks2[i] < 70) {
                    printf("%s\n", grades[3]);
                    gpa2 += 7.0 * credits2[i];
                } else if (marks2[i] >= 50 && marks2[i] < 60) {
                    printf("%s\n", grades[4]);
                    gpa2 += 6.0 * credits2[i];
                } else if (marks2[i] >= 40 && marks2[i] < 50) {
                    printf("%s\n", grades[5]);
                    gpa2 += 5.0 * credits2[i];
                } else if (marks2[i] < 40) {
                    printf("%s\n", grades[6]);
                    gpa2 += 0.0 *credits2[i];
                } else {
                    printf("Invalid marks entered!\n");
                }
                total_credits2 += credits2[i];
            }
            cgpa2=gpa2/6;
            gpa2 =gpa2/total_credits2;
            printf("\nGPA IN SECOND SEM: %.2f\n", gpa2);
            printf("\nCGPA IN SECOND SEM: %.1f\n",cgpa2);
            gpa=(gpa1+gpa2)/2;
            printf("\n GPA IN FIRST YEAR:%.1f",gpa);
            cgpa=(cgpa1+cgpa2)/2;
            printf("\n CGPA OF 1ST YEAR:%.1f\n",cgpa);
        } else if (option == 3) {
            main();
        } else {
            printf("Invalid option.\n");
        }
    }
}
