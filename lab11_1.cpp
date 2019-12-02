#include <iostream>
#include <stdlib.h>     
#include <time.h>
#include <stdio.h> // for gets, puts;
#include <conio.h> // for getch();
#include <string.h> // for strlen (s); necessary in online compiler
#include <cctype>

using namespace std;

struct Employee {
    char *surname; // student name
    char *position; // group
    char *education;
    int  birth_year;
    int salary;
};

int main(){

    FILE* f;


    f = fopen("f11.txt", "wt"); //create file to push a result of work programm
    if (f == NULL) {
        cout << "Cannot open file to view\n";
        return 1;
    }

    

    struct Employee worker[5];

    // Employee Worker work[5];

    
    worker[0].surname = "Ivanov";
    worker[0].position = "Not married";
    worker[0].education = "Medium";
    worker[0].birth_year = 2001;
    worker[0].salary = 21045;

    
    worker[1].surname = "Milos";
    worker[1].position = "Married";
    worker[1].education = "High";
    worker[1].birth_year = 1986;
    worker[1].salary = 120576;

    
    worker[2].surname = "Vkus";
    worker[2].position = "Married";
    worker[2].education = "High";
    worker[2].birth_year = 1990;
    worker[2].salary = 60780;
    
    
    worker[3].surname = "Gates";
    worker[3].position = "Married";
    worker[3].education = "High";
    worker[3].birth_year = 1980;
    worker[3].salary = 560567;

    worker[4].surname = "Mask";
    worker[4].position = "Married";
    worker[4].education = "High";
    worker[4].birth_year = 1970;
    worker[4].salary = 809000;

    //output all information about workers

    for(int i=0;i<5;i++){
        fputs("Surname:\t", f);
        fprintf(f, "%s", worker[i].surname);
        fputs(";", f);
        fputs("\n", f);
        ///
        fputs("Position:\t", f);
        fprintf(f, "%s", worker[i].position);
        fputs(";", f);
        fputs("\n", f);
        ///
        fputs("Education:\t", f);
        fprintf(f, "%s", worker[i].education);
        fputs(";", f);
        fputs("\n", f);
        ///
        fputs("Birth year:\t", f);
        fprintf(f, "%d", worker[i].birth_year);
        fputs(";", f);
        fputs("\n", f);
        ///
        fputs("Salary:\t\t", f);
        fprintf(f, "%d", worker[i].salary);
        fputs(";", f);
        fputs("\n", f);
        fputs("\n", f);
        
        
    }

    // fputs("Size_y = ", f3);
    // fprintf(f3, "%d", size_y);
    // fputs("\n", f3);
    // fputs("\n", f3);



    double counter = 0;
    for(int i = 0;i<5;i++){
        if ( worker[i].education != "High" ){
            counter++;
        }
    }
    double all_workers = 5;
    double percentage = (counter * 100) / all_workers; 
    cout << counter << endl;
    cout << "Percentage of workers which doesent have high education " << percentage << "%" << endl;
    fputs("Percentage of workers which doesent have high education :\t", f);
    fprintf(f, "%f", percentage);
    fputs("%", f);
    fputs(";", f);



    system("pause");
    return 0;
}
