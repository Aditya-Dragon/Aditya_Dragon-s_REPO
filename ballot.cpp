#include<iostream>
using namespace std;

class BallotBox
{
	int votes;	
    public:
	void read(int v)
	{
		votes = v;
	}
	int count[6]={0,0,0,0,0,0};
	void counter()
	{
		
		if(votes==1)
			{
				count[0]++;
			}
		else if(votes==2)
			{
				count[1]++;
			}
		else if(votes==3)
			{
				count[2]++;
			}
		else if(votes==4)
			{
				count[3]++;
			}
		else if(votes==5)
			{
				count[4]++;
			}
		else
			{
				count[5]++;
			}
	}
};

int main()
{
	BallotBox Box;
	int v;
	cout<<"\n\tCANDIDATES ARE NUMBERED FROM 1 TO 5"<<endl;
	cout<<"\tCAST YOUR VOTES :-"<<endl;
	for(int i=1;i<=8;i++)
	{
		cin>>v;
		Box.read(v);
		Box.counter();
	}
	cout<<"\n\tRESULTS :-"<<endl;
	cout<<"Candidate 1 : "<<Box.count[0]<<endl;
	cout<<"Candidate 2 : "<<Box.count[1]<<endl;
	cout<<"Candidate 3 : "<<Box.count[2]<<endl;
	cout<<"Candidate 4 : "<<Box.count[3]<<endl;
	cout<<"Candidate 5 : "<<Box.count[4]<<endl;
	cout<<"Spoilt Ballots : "<<Box.count[5]<<endl;
	return 0;	
}
