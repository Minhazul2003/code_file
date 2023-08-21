#include<stdio.h>
#include<string.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Student {
    char name[100];
    int roll;
    int class;
    struct Date dob;
};

int main(){
    struct Student st1 = {
        .roll = 10,
        .class = 3,
        .dob = {3, 5, 2003}

    };
     printf("Roll = %d\n", st1.roll);
     st1.roll = 12;
     printf("Updated Roll = %d\n", st1.roll);

    char name[100] = "Minhazul islam";
    strcpy(st1.name, name);
    printf("Name = %s\n", st1.name);

    char NAME[100] = "Islam Minhazul";
    strcpy(st1.name, NAME);
    printf("Updated Name = %s", st1.name);
    return 0;

}

//struct Time {
//
//    int hour;
//    int minute;
//
//};
//struct Interval{
//    struct Time start;
//    struct Time end;
//};
//
//
//
//int main(){
//    struct Interval st1 = {
//        .start = {5, 30},
//        .end = {10, 15}
//
//    };
//    if (st1.end.minute < st1.start.minute){
//        st1.end.minute+=60;
//        st1.end.hour--;
//    }
//
//    printf("%d:%d", (st1.end.hour-st1.start.hour), (st1.end.minute-st1.start.minute));
//
//    return 0;
//
//}
