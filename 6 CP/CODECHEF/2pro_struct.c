#include <stdio.h>

struct Student
{
    int marks;
    int id;
    char fav_char;
    // int roll = 5; // can't initialize value here in case of structure
} Niraj, Bishnu, Abinash;

struct Point
{
 int x,y;
};

int main()
{
    // struct Student Niraj, Bishnu, Abinash;   //declaring structure variables

    struct Point p1={0,1};  // A valid initialization. member x gets value 0 and y
   // gets value 1.  The order of declaration is followed.

   // Accessing members of point p1
   p1.x = 20;
   printf ("x = %d, y = %d", p1.x, p1.y);

    Niraj.id = 1;
    Bishnu.id = 9;
    Abinash.id = 3;

    printf("Niraj id =%d\n", Niraj.id);
    printf("Bishnu id =%d\n", Bishnu.id);
    printf("Abinash id =%d\n", Abinash.id);

    return 0;
}