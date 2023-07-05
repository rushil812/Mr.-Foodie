    #include<bits/stdc++.h> 
     using namespace std;
     long long i=1e9;
    void print(int N)
    {
        if(N>i)
        return;
        cout<<N<<" ";
        print(N+1);
    }
    int main(){
        int n;
        cin>>n;
       print(n);
       return 0;
    }