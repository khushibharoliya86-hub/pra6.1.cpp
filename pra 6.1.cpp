#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,score[10],sum=0;
    char id[10][6],name[10][25];
    float p;
    int highest_score=INT_MIN;
    int lowest_score=INT_MAX;
    cout<<"************************************************************************\n";
    cout<<"SPORTS EVENT SCORE ANALYSIS\n";
    cout<<"************************************************************************\n";
    cout<<"Enter Number Of Participate:";
    cin>>n;
    //input information
    for(int i=0; i<n; i++)
    {
        cout<<"Enter Participate ID:";
        cin>>id[i];
        cout<<"Enter Participate Name:";
        cin>>name[i];
        cout<<"Enter Participate Score:";
        cin>>score[i];

    }
//display information
    cout<<"-------------------------------------------------------------\n";
    cout<<"Participant Performance\n";
    cout<<"-------------------------------------------------------------\n";
    cout<<left<<setw(5)<<"ID"<<left<<setw(10)<<"Name"<<"Score"<<endl;
    cout<<"-------------------------------------------------------------\n";
    for(int i=0; i<n; i++)
    {
        cout<<left<<setw(5)<<id[i]<<left<<setw(10)<<name[i]<<score[i]<<endl;

    }
    cout<<"-------------------------------------------------------------\n";
    for(int i=0; i<n; i++)
    {
        sum+=score[i];
    }
    p=(float)sum/n;

    cout<<left<<setw(20)<<"Total Marks:"<<sum<<endl;
    cout<<left<<setw(20)<<"Average Score:"<<p<<endl;
    //find highest score
    for(int i=0; i<n; i++)
    {
        if(highest_score<score[i])
        {
            highest_score=score[i];

        }

    }
    cout<<left<<setw(20)<<"Highest Score:"<<highest_score<<endl;
    //find lowest score
    for(int i=0; i<n; i++)
    {
        if(lowest_score>score[i])
        {
            lowest_score=score[i];

        }

    }
    cout<<left<<setw(20)<<"Lowest Score:"<<lowest_score<<endl;










    return 0;
}
