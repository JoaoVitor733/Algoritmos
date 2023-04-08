#include <iostream>
using namespace std;
/* Elabore um algoritmo que mostre o calendário de um determinado mês. Os dados de entrada são o mês 
(cujos dados devem ser mostrados) e o dia da semana em que esse mês inicia. Assuma que esse mês está
em um ano que não é bissexto, porém considere meses de 28, 30 e 31. O resultado deve ser como 
mostrado abaixo. Ex: janeiro, começando na 5a feira:
*/
int main(){
    short int month, day, contDays = 1,dayMax;
    bool flag = true;
    do{ cout << "\nEnter the month: ";
        cin >> month;
    }while(month < 1 || month > 12);
    do{ cout << "\nEnter the day of the week that begins the month: ";
        cin >> day;
    }while(day < 1 || day > 7);
    if(month == 2) dayMax = 28;
    else if((month == 4) || (month == 6) || (month == 9)  || (month == 11)) dayMax = 30;
         else dayMax = 31;
    cout << "\n Sun Mon Tue Wed Thu Fri sat \n";
    for(int i = 1; i < 7; i++){//days
        for(int j=1; j < 8; j++){//weeks
            if((flag && (day > j ))|| contDays > dayMax) cout << "\t";
            else{ 
                cout << " " << contDays << "\t"; 
                flag = false; 
                if(contDays <= dayMax) contDays++;
            }         
        }
        cout << "\n";
    }
}