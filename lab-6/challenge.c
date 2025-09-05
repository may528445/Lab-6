#include <stdio.h>
#include <string.h>

typedef struct {
    char name[21];
    int id;
    int g[4];
    double avg;
} Student;

int main(void){
    Student s[3];
    const char* subj[4] = {"Math","English","Science","History"};
    for(int i=0;i<3;i++){
        printf("Enter name, ID, and 4 grades for student %d:\n", i+1);
        scanf("%20s %d %d %d %d %d", s[i].name, &s[i].id, &s[i].g[0], &s[i].g[1], &s[i].g[2], &s[i].g[3]);
    }
    printf("\nStudent Averages:\n");
    for(int i=0;i<3;i++){
        s[i].avg = (s[i].g[0]+s[i].g[1]+s[i].g[2]+s[i].g[3])/4.0;
        printf("%s (ID: %d): %.2f\n", s[i].name, s[i].id, s[i].avg);
    }
    int top_i=0;
    for(int i=1;i<3;i++) if(s[i].avg>s[top_i].avg) top_i=i;
    printf("\nTop Student: %s with %.2f\n", s[top_i].name, s[top_i].avg);
    double subj_sum[4]={0,0,0,0};
    for(int j=0;j<4;j++) for(int i=0;i<3;i++) subj_sum[j]+=s[i].g[j];
    printf("\nSubject Averages:\n");
    for(int j=0;j<4;j++) printf("%s: %.2f\n", subj[j], subj_sum[j]/3.0);
    int top_s=0;
    for(int j=1;j<4;j++) if(subj_sum[j]>subj_sum[top_s]) top_s=j;
    printf("\nTop Subject: %s with average %.2f\n", subj[top_s], subj_sum[top_s]/3.0);
    return 0;
}
