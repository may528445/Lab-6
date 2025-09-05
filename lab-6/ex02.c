#include <stdio.h>
#include <string.h>

typedef struct {
    char name[101];
    int age;
    float score;
} Student;

static void strip_nl(char *s){ size_t n=strlen(s); if(n&&s[n-1]=='\n') s[n-1]='\0'; }

int main(void){
    Student s[3];
    for(int i=0;i<3;i++){
        printf("Student %d's name: ", i+1);
        fflush(stdout);
        if(!fgets(s[i].name, sizeof(s[i].name), stdin)) return 0;
        strip_nl(s[i].name);
        printf("Student %d's age: ", i+1);
        scanf("%d", &s[i].age);
        printf("Student %d's score: ", i+1);
        scanf("%f", &s[i].score);
        int c; while((c=getchar())!='\n' && c!=EOF);
        if(i<2) printf("\n");
    }
    printf("\nStudent 1 name is \"%s\", age %d, score %.1f.\n", s[0].name, s[0].age, s[0].score);
    printf("Student 2 name is \"%s\", age %d, score %.1f.\n", s[1].name, s[1].age, s[1].score);
    printf("Student 3 name is \"%s\", age %d, score %.1f.\n", s[2].name, s[2].age, s[2].score);
    int idx=0;
    for(int i=1;i<3;i++) if(s[i].score>s[idx].score) idx=i;
    printf("The highest scores belongs to %s at %.1f scores!\n", s[idx].name, s[idx].score);
    return 0;
}
