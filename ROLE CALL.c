//ROLE CALL
#include<stdio.h>
#define MAX_STUDENTS 50
int validitycheckint(int numread,int x){//TO CHECK IF THE INPUT VALID IS ACTUALLY AN INTERGER
    if(numread!=1){
printf("the value entered is invalid.\n");
    printf("Enter a valid value.\n");
    scanf("%*[^\n]");
    }
}
int main(){
char student_names[MAX_STUDENTS][50];//ARRAY TO STORE STUDENT NAMES
int attendance[MAX_STUDENTS]={20},numread;//ARRAY TO STORE attendance(0 FOR ABSENT,1 FOR PRESENT)
int num_students;//INPUT THE NUMBER OF STUD
do{
printf("Enter number of students:\n");
numread=scanf("%d",&num_students);
validitycheckint(numread,num_students);
}while(numread==0);
printf("Enter the names of students:\n");
for(int i=0;i<num_students;i++){
    printf("student %d:",i+1);
    scanf("%s",student_names[i]);
}
//ROLL CALL
printf("\nRoll call:\n");
for(int i=0;i<num_students;i++){
       h:
           do{
        printf("is %s is present?(1 for Yes,0 for No):",student_names[i]);
        numread = scanf("%d",&attendance[i]);
        validitycheckint(numread, attendance[i]);
        if(attendance[i]>1 || attendance<0){
        printf("invalid input.\n");
        goto h;
         }
         }while(numread==0);
}
//DISPLAY ATTENDANCE
printf("\nAttendance Report:\n");
for(int i=0;i<num_students;i++){
printf("%s:%s\n",student_names[i],attendance[i]?"present":"Absent");

}
return 0;
}

















