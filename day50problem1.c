//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main() {
    char date[20];
    scanf("%s", date);   
    char day[3], month[3], year[5];
    const char *months[] = 
        {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    sscanf(date, "%2s/%2s/%4s", day, month, year);
    int m = (month[0]-'0')*10 + (month[1]-'0');  

    printf("%s-%s-%s\n", day, months[m-1], year);

    return 0;
}
