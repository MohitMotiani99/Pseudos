class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        if(month==1||month==2)
            year--;
        if(month==1)
            month=11;
        else if(month==2)
            month=12;
        else
            month-=2;
        int t=(13*month-1)/5;
        int d=year%100;
        int c=year/100;
        
        int f=day+t+d+d/4 +c/4 - (2*c);
        //cout<<day<<" "<<t<<" "<<d<<" "<<d/4<<" "<<c/4<<" "<<2*c<<endl;
        //cout<<day+t+d+d/4 +c/4-2*c<<endl;
        //cout<<f<<" ";
        int r=f%7;
        if(r<0)
            r+=7;
        //cout<<r<<endl;
        switch(r){
            case 0:
                return "Sunday";
            case 1:
                return "Monday";
            case 2:
                return "Tuesday";
            case 3:
                return "Wednesday";
            case 4:
                return "Thursday";
            case 5:
                return "Friday";
            case 6:
                return "Saturday";
        }
        
        /*int d=year%100;
        int r=0;
        r+=d/4;
        */
        return "";
    }
};
