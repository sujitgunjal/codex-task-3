# include <iostream>
using namespace std;

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

 int calculateDaysRemaining(Days today){
    
    int n ;
    switch(today){
        case 0:
            n = (7-today);
            break;
        case 1:
            n = (7-today);
            break;
         case 2:
            n = (7-today);
            break;
         case 3:
            n = (7-today);
            break;
         case 4:
            return(n-today);
            break; 
        case 5:
            n = (7-today);
            break; 
        case 6:
            n = (7-today);
            break; 
        
        default:
            break;


            
    }
    return n;




}

int main(){
    Days currentDay =Wednesday;
    int daysRemaining = calculateDaysRemaining(currentDay);
    cout<<"The number of days remaining in a week are: "<<daysRemaining<<endl;
    
    return 0;
}