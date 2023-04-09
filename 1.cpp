// #include<iostream>
// using namespace std;
// int main(){
//
// int r=1;
// int n;
// cin>>n;
// int a=64;
// int x=1;
// while(r<=n){
// int c=1;
// while(c<=r){
//
// cout<<char(n-c+1)<<" ";
// int s=x++;
// c++;
// }cout<<endl;
// r++;}
// return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i <= n;)
    {
        for (j = 1; j <= n; j++)
        {
            cout <<j;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
