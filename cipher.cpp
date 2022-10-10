    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        string s;
        cout<<"Enter a string you want to encrypt: ";
        getline(cin,s);
        char ch;
        for(int i=0;i<s.size();i++)
        {
            ch = ((s[i]-'a' + 3)%26) + 'a';
            s[i] = ch;
        }   
        cout<<"Encrypted word: "<<s;
        cout<<endl<<"Press 1 to decrypt: ";
        int x;
        cin>>x;
        for(int i=0;i<s.size();i++)
        {
            ch = ((s[i]-'a' + 23)%26) + 'a';
            s[i] = ch;
        }
        cout<<"Decrypted word: "<<s;
    }
