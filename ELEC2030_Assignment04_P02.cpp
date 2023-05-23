#include <iostream>
#include <iomanip>

using namespace std;

class Time{
private:
    int day, hour, minute, second;
public:
    Time(int inday, int inhour, int inminute, int insecond){
        // your code here
        this -> day = inday;
        this -> hour = inhour;
        this -> minute = inminute;
        this -> second = insecond;
    }

    void Timeconsumption(Time other){

        // time consumed
        int time2 = other.second + other.minute*60+ other.hour*3600 + other.day*24*3600; //convert to second 
        int time1 = this->second + (this->minute)*60 + (this->hour)*3600 + (this->day)*24*3600;
        int time_consumed; 
        if (time2>=time1){time_consumed = time2 - time1;}
        else {time_consumed = time1 - time2;}

        // time format 
        int outday = time_consumed/24/3600;
        int outhour = (time_consumed-outday*24*3600)/3600;
        int outminute = (time_consumed-outday*24*3600-outhour*3600)/60;
        int outsecond = time_consumed-outday*24*3600-outhour*3600-outminute*60;

        // output format 
        cout<<setw(3) << setfill('0')<<outday<<" ";
        cout<<setw(2) << setfill('0')<<outhour<<":";
        cout<<setw(2) << setfill('0')<<outminute<<":";
        cout<<setw(2) << setfill('0')<<outsecond<<endl;
    }
};

int main(){
    int day, hour, minute, second;
    cin >> day>> hour >> minute >> second;
    Time time1(day,hour,minute,second);
    cin >> day >> hour >> minute >> second;
    Time time2(day,hour,minute,second);
    time1.Timeconsumption(time2);
    return 0;
}