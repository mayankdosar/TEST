#include <iostream>
#include <vector>

 using namespace std;

 int main()
 {
     vector<int> list;
     int x = 0;
     while(x != 42)
     {
         scanf("%d",&x);
         if(x!=42)
         list.push_back(x);
     }
     for(int i=0 ; i < (signed)(list.size()) ; i++)
     {
         printf("%d\n",list.at(i));
     }
     return 0;
 }
