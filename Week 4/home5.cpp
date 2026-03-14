# include <iostream>
using namespace std;
int main(){
int holidays;
cout <<"Enter the holidays:";
cin >> holidays;
int  workingdays, playtimew, playtimehour, actualtime, norm, diff_time;
norm = 30000;
workingdays = 365-holidays;
playtimew = workingdays*63; 
playtimehour = holidays * 127; 
actualtime = playtimehour + playtimew;
int hours;
int min;
diff_time= (norm - actualtime);
hours=abs(diff_time)/60;
min=abs(diff_time)%60;
if(diff_time>=0){
    cout<<"Tom sleeps well."<<hours<<"hours and "<<min<<"mins less for play.";
    }
if(diff_time<0){
  cout <<"Tom will run away."<<hours<<"hours and" <<min<<"mints for play.";
}
}