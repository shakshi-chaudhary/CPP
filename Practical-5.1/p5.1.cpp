#include <iostream>
#include <string>
using namespace std;

int main()
{
    string p,w[100],temp="";
    int f[100]={0},n=0;

    cout <<"Enter paragraph: ";
    getline(cin,p);

    for(int i=0;i<=p.length();i++)
    {
        if(p[i]==' ' || p[i]=='\0')
        {
            if(temp!="")
            {
                for(int k=0;k<temp.length();k++)
                    if(temp[k]>='A' && temp[k]<='Z')
                        temp[k]+=32;

                int j;
                for(j=0;j<n;j++)
                    {
                    if(w[j]==temp)
                    {
                        f[j]++;
                        break;
                    }
                }
                if(j==n)
                {
                    w[n]=temp;
                    f[n++]=1;
                }
                temp="";
            }
        } else temp+=p[i];
    }

    cout<<"Word Frequency: ";
    for(int i=0;i<n;i++)
        cout<<w[i]<<" : "<<f[i]<<endl;

    return 0;
}
