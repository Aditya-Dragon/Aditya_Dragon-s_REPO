#include <iostream>

using namespace std;
class player
{
private:
    int match_played;
    int total_run;
public :
    char name[50];
    double avg;
    void set_data(int m,int r)
    {
        match_played=m;
        total_run=r;
    }
    int get_matchp()
    {
        return match_played;
    }
    int get_run()
    {
        return total_run;
    }
};
int main()
{
    int n,mp,tr,maxm=0,maxr=0;
    double maxav=0.0;
    cout << "Enter number of players" << endl;
    cin>>n;
    player group[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter details of player--" <<(i+1)<< endl;
        cout << "Enter name--"<<endl;
        cin>>group[i].name;
        cout << "Enter match played--"<<endl;
        cin>>mp;
        cout << "Enter total run scored--"<<endl;
        cin>>tr;
        group[i].set_data(mp,tr);
        group[i].avg=(double)group[i].get_run()/group[i].get_matchp();
        if(group[i].get_matchp()>maxm)
            maxm=group[i].get_matchp();
        if(group[i].get_run()>maxr)
            maxr=group[i].get_run();
       if(group[i].avg>maxav)
            maxav=group[i].avg;
            
    }
   
    cout << "Maximum match played--"<<maxm<<endl;
    cout << "Maximum run scored--"<<maxr<<endl;
    cout << "Average run--"<<maxav<<endl;
    return 0;
}
