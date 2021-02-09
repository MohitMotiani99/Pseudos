#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    map<int,string> mp;
    mp[0]="o' clock";
    mp[1]="one";
    mp[2]="two";
    mp[3]="three";
    mp[4]="four";
    mp[5]="five";
    mp[6]="six";
    mp[7]="seven";
    mp[8]="eight";
    mp[9]="nine";
    mp[10]="ten";
    mp[11]="eleven";
    mp[12]="twelve";
    mp[13]="thirteen";
    mp[14]="fourteen";
    mp[15]="quarter";
    mp[16]="sixteen";
    mp[17]="seventeen";
    mp[18]="eighteen";
    mp[19]="nineteen";
    mp[20]="twenty";
    mp[30]="half";
    mp[40]="fourty";
    mp[50]="fifty";
    
    string ans="";
    if(m==0)
    ans=mp[h]+" "+mp[0];
    else if(m<=30){
        if(m<=20 && m!=15 && m!=1)
        ans=mp[m]+" minutes past "+mp[h];
        else if(m!=15 && m!=30 && m!=1)
        ans=mp[(m/10)*10]+" "+mp[m%10]+" minutes past "+mp[h];
        else if(m!=1)
        ans=mp[m]+" past "+mp[h];
        else
        ans=mp[m]+" minute past "+mp[h];
    }
    else{
        if(m==40 || m==50)
        ans=mp[m]+" minutes past "+mp[h];
        else 
        {
            h=h%12+1;
            m=60-m;
            if(m<=20 && m!=15 && m!=1)
        ans=mp[m]+" minutes to "+mp[h];
        else if(m!=15 && m!=30 && m!=1)
        ans=mp[(m/10)*10]+" "+mp[m%10]+" minutes to "+mp[h];
        else if(m!=1)
        ans=mp[m]+" to "+mp[h];
        else
        ans=mp[m]+" minute to "+mp[h];
        }
    }
    
    return ans;
    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
