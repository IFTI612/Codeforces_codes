#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str , str2;

    getline(cin,str);



    for(int i = 0 ; i< str.size();i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'||str[i]=='y'||str[i]=='Y')
        {
            continue;
        }
        else
        {
            str2.push_back('.');
            if(str[i]>=97&&str[i]<=122)
            {
                str2.push_back(str[i]);

            }
            else
            {
                str2.push_back(str[i]+32);

            }
        }


    }

    cout<<str2<<endl;



    return 0;
}
