#include <stdio.h>
#include <string.h>
int main()
{
    int Rollno, math, history, geography, science, english;
    char middlename[20], firstname[20], lastname[20];
    float total, persentage, cgpa;
    char dob[11], grade[11], remark[30], status[5], reasult[57];
    char failsubject[60];

    printf(" MARKSHEET OF SESSION (2025-26)\n");
    printf("\nEnter your middle name = ");
    scanf("%s", middlename);
    printf("\nEnter your first name = ");
    scanf("%s", firstname);
    printf("\nEnter your lastname = ");
    scanf("%s", lastname);
    printf("\nenter your dob=(dd/mm/yy )");
    scanf("%s", dob);
    printf("\nenter Roll no= \n");

    scanf("%d", &Rollno);
    printf("enter math mark:\n");
    scanf("%d", &math);
    printf("enter science mark\n");
    scanf("%d", &science);
    printf("enter english mark\n");
    scanf("%d", &english);
    printf("enter  history mark\n");
    scanf("%d", &history);
    printf("enter geography mark\n");
    scanf("%d", &geography);

    total = math + english + history + geography + science;
    printf(" total is %f \n", total);
    persentage = total / 5;
    // cgpa
    cgpa = persentage / 9.5;
    printf(" cgpa is %f\n", cgpa);

    // check pass or fail
    if (math < 35)
        strcat(failsubject, "math");
    if (english < 35)
        strcat(failsubject, "english");
    if (science < 35)
        strcat(failsubject, "science");
    if (history < 35)
        strcat(failsubject, "history");
    if (geography < 35)
        strcat(failsubject, "geography");

    if (strlen(failsubject) > 0)
        strcpy(status, "fail");
    else
        strcpy(status, "pass");

    // remark
    if (persentage >= 90)
        strcpy(remark, "excelent performance");
    else if (persentage >= 80)
        strcpy(remark, "very good");
    else if (persentage >= 70)
        strcpy(remark, "good");
    else
        strcpy(remark, "need improvement");

    // calculation of grade
    printf(" persentage is%f \n", persentage);
    if (persentage >= 90 && persentage <= 100)
        strcpy(grade, "A");

    else if (persentage >= 80 && persentage < 90)
        strcpy(grade, "B");

    else if (persentage >= 60 && persentage < 80)
        strcpy(grade, "C");
    else
        strcpy(grade, "D");

    printf("\n===========================================        \n");
    printf("          STUDENT MARKSHEET\n");
    printf(" ============================================    \n");
    printf("NAME         = %s%s%s\n", firstname, middlename, lastname);
    printf("Roll no      =%d\n", Rollno);
    printf("dob          =%s\n", dob);
    printf("---------------------------------------------\n");

    printf("subject         | mark\n ");
    printf("math           |%d\n", math);
    printf("english         |%d\n", english);
    printf("science         |%d\n", science);
    printf("history         |%d\n", history);
    printf("geography       |%d\n", geography);
    printf("----------------------------------------------\n");

    printf("total          = %.2f\n", total);
    printf("persentage     =%.2f\n", persentage);
    if (strcmp(status, "fail") == 0)
        printf(" fail subject    =%s\n", failsubject);

    printf("grade          =%s\n", grade);
    printf("remark         =%s\n", remark);
    printf("status         =%s\n", status);
    printf("cgpa           =%f\n", cgpa);

    return 0;
}