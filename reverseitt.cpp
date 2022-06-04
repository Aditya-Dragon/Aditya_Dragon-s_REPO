#include <iostream>
#include<string>
using namespace std;

   	string reversitt(string s)
	{
	    char c;
	    int len = s.length();
        int n=len-1;
        for(int i=0;i<(len/2);i++)
        {
            c=s[i];
            s[i]=s[n];
            s[n]=c;
             n = n-1;
        }
        return s;
	}

int main()
{
  string s,s1;
  cout<<"enter a string"<<endl;
  cin>>s;
  s1=reversitt(s);
  cout<<s1<<endl;
  return 0;
}
