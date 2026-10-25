# include <stdio.h>

int main(){
    int total, attended;
    float percentage;
    scanf("%d", &total);
    scanf ("%d", &attended);

percentage = (float)attended/total*100;
printf ("Attendence: %2f\n", percentage);
if (percentage<75){
    printf ("Not eligible for exam");
}
else {
    printf ("Eligible for exam");
}
return 0;
}
