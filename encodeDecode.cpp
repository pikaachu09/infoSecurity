2.	#include<bits/stdc++.h>
3.	using namespace std;
4.	int main()
5.	{
6.	    string str;
7.	    getline(cin, str);
8.	    int n=str.length();
9.	
10.	    string str2;
11.	    str2="";
12.	
13.	    for(int i=0; i<n; i++)
14.	    {
15.	        str2+=((((str[i] - 'b') + n ) %256 +256)%256 + 'b');
16.	    }
17.	
18.	    cout <<"Original string  : "<<str<<endl;
19.	    cout <<endl;
20.	    cout <<"Encrypted string : "<<str2<<endl;
21.	    cout <<endl;
22.	
23.	    string str3;
24.	    str3="";
25.	
26.	    for(int i=0; i<n; i++)
27.	    {
28.	        str3+=((((str2[i] - 'b') - n ) %256 +256)%256 + 'b');
29.	    }
30.	
31.	    cout <<"Decrypted string : "<<str3<<endl;
32.	    cout <<endl;
33.	
34.	    return 0;
35.	}
