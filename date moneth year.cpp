#include <iostream>
using namespace std;

class date{
    private:
        int day;
        int month;
        int year;
    public:
        date();
        date(int dt,int mn,int yrs){
            day=dt;
            month=mn;
            year=yrs;
        }
        void getdate(int dt,int mn,int yrs){
            cout<<"enter day month year";
            cin>>day>>month>>year;
        }
        void printdate(){
            cout<<"\n"<<day<<"-"<<month<<"-"<<year<<"\n";
        }
        void operator++();
        bool operator<(date dt);
        bool operator>(date dt);
        bool operator!=(date dt);
        bool operator==(date dt);
        void operator+(int days);
        
};

void date::operator++(){
    ++day;
}

bool date::operator<(date dt){
    if((year==dt.year)&& (month==dt.month)){
        if(day<dt.day){
            return true;
        }
        else{
            return false;
        } 
        
    }
    else if((year==dt.year)&&(month!=dt.month)){
        if(month<dt.month){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(year<dt.year){
            return true;
        }
        else{
            return false;
        }
    }
}

bool date::operator>(date dt){
    if((year==dt.year)&& (month==dt.month)){
        if(day>dt.day){
            return true;
        }
        else{
            return false;
        } 
        
    }
    else if((year==dt.year)&&(month!=dt.month)){
        if(month>dt.month){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(year>dt.year){
            return true;
        }
        else{
            return false;
        }
    }
}

bool date::operator!=(date dt){
    if((day!=dt.day)||(month!=dt.month)||(year!=dt.year)){
        return true;
    }
    else{
        return false;
    }
}

bool date::operator==(date dt){
    if((day==dt.day)&&(month==dt.month)&&(year==dt.year)){
        return true;
    }
    else{
        return false;
    }
}



void date::operator+(int days){
    int temp=day+days;
    if(month==2){
        if(temp>28){
            month=month+1;
            temp=temp%31;
            day=day+temp;
        }
        
    }
    else if((month%2!=0 || month==8 || month==10)&&(month!=9 ||month!=11)){
        if(temp>31){
            month=month+1;
            temp=temp%31;
            day=temp;
        }
        else{
            day=day+temp;
        }
    }
    else{
         if(temp>30){
            month=month+1;
            temp=temp%30;
            day=temp;
        }
        else{
            day=day+temp;
        }
    }
    
}
int main() {
    date da(8,6,2002);
    date db(9,6,2002);
    da.printdate();
    db.printdate();
    cout<<"\nda<db  "<<boolalpha<<bool(da<db)<<"\n";
    cout<<"da>db  "<<boolalpha<<bool(da>db)<<"\n";
    cout<<"da==db "<<boolalpha<<bool(da==db)<<"\n";
    cout<<"da!=db "<<boolalpha<<bool(da!=db)<<"\n";
    cout<<"\n\nadding 31 day \n";
    cout<<"old date ";
    da.printdate();
    da+31;
    cout<<"newdate ";
    da.printdate();
    cout<<"\nincrementing date by 1 day ";
    ++da;
    da.printdate();
    return 0;
}