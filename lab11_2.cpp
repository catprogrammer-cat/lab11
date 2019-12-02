#include <iostream>
#include <stdlib.h>     
#include <time.h>
#include <stdio.h> // for gets, puts;
#include <conio.h> // for getch();
#include <string.h> // for strlen (s); necessary in online compiler
#include <cctype>

using namespace std;

struct MedicalPreparations {
    char *name; // student name
    int year; // group
    int month;
    int day;
};

int main(){

    FILE* f;

    f = fopen("f11.txt", "wt"); //create file to push a result of work programm
    if (f == NULL) {
        cout << "Cannot open file to view\n";
        return 1;
    }

    

    struct MedicalPreparations preparations[5];

    // Employee Worker work[5];

    
    preparations[0].name = "alcohol";
    preparations[0].year = 2120;
    preparations[0].month = 12;
    preparations[0].day = 2;

    preparations[1].name = "lorem";
    preparations[1].year = 2120;
    preparations[1].month = 12;
    preparations[1].day = 2;

    preparations[2].name = "FullFlex";
    preparations[2].year = 2020;
    preparations[2].month = 5;
    preparations[2].day = 7;

    preparations[3].name = "ipsum";
    preparations[3].year = 2019;
    preparations[3].month = 12;
    preparations[3].day = 1;

    preparations[4].name = "elipse";
    preparations[4].year = 2018;
    preparations[4].month = 2;
    preparations[4].day = 14;

    int current_date[3]={2019,12,2}; //year month day
    int current_date_to_day = (current_date[0] * 365) + (current_date[1] * 30) + current_date[2]; 

    // convertion all date information in days
    int dates_preparation[5];
    for(int i=0;i<5;i++){
        dates_preparation[i] = (preparations[i].year * 365) + (preparations[i].month * 30) + preparations[i].day;
    }
    fputs("Current date: ", f);
    fprintf(f, "%d", current_date[2]);
    fputs(".", f);
    fprintf(f, "%d", current_date[1]);
    fputs(".", f);
    fprintf(f, "%d", current_date[0]);
    fputs("\n", f);
    fputs("\n", f);
    
    for(int i=0;i<5;i++){
        if(current_date_to_day < dates_preparation[i]){
            cout << "The " << preparations[i].name << " is fresh" << endl;
            fputs("Name:\t", f);
            fprintf(f, "%s", preparations[i].name);
            fputs(";", f);
            fputs("\n", f);

            fputs("Date:\t", f);
            fprintf(f, "%d", preparations[i].day);
            fputs(".", f);
            fprintf(f, "%d", preparations[i].month);
            fputs(".", f);
            fprintf(f, "%d", preparations[i].year);
            fputs("\n", f);
            fputs("\n", f);
            
            
        }
    }

    //output all information about workers

    // for(int i=0;i<5;i++){
    //     fputs("Surname:\t", f);
    //     fprintf(f, "%s", worker[i].surname);
    //     fputs(";", f);
    //     fputs("\n", f);
    //     ///
    //     fputs("Position:\t", f);
    //     fprintf(f, "%s", worker[i].position);
    //     fputs(";", f);
    //     fputs("\n", f);
    //     ///
    //     fputs("Education:\t", f);
    //     fprintf(f, "%s", worker[i].education);
    //     fputs(";", f);
    //     fputs("\n", f);
    //     ///
    //     fputs("Birth year:\t", f);
    //     fprintf(f, "%d", worker[i].birth_year);
    //     fputs(";", f);
    //     fputs("\n", f);
    //     ///
    //     fputs("Salary:\t\t", f);
    //     fprintf(f, "%d", worker[i].salary);
    //     fputs(";", f);
    //     fputs("\n", f);
    //     fputs("\n", f);
        
        
    // }

    // fputs("Size_y = ", f3);
    // fprintf(f3, "%d", size_y);
    // fputs("\n", f3);
    // fputs("\n", f3);



    // double counter = 0;
    // for(int i = 0;i<5;i++){
    //     if ( worker[i].education != "High" ){
    //         counter++;
    //     }
    // }
    // double all_workers = 5;
    // double percentage = (counter * 100) / all_workers; 
    // cout << counter << endl;
    // cout << "Percentage of workers which doesent have high education " << percentage << "%" << endl;
    // fputs("Percentage of workers which doesent have high education :\t", f);
    // fprintf(f, "%f", percentage);
    // fputs("%", f);
    // fputs(";", f);



    system("pause");
    return 0;
}
