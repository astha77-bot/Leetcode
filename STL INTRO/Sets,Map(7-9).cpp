/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <set>
#include <map>
using namespace std;

//7

void setdemo(){
    set<int> s;
    //set sort the input in log(N) time unlike vector. 
    s.insert(1);
    s.insert(-1);
    s.insert(10);
    s.insert(2);
    
    for(int x: s){
        cout<<x<<" ";
    }
    auto it=s.find(-1);
    if(it==s.end){
        cout<<"not present/n";
    }
    else{
        cout<<"present"<<endl;
        cout<<*it;
    }
    
    auto it2 = s.upper_bound(-1); //unlike vector since here set is sorted, we don't have to define A.begin & A.end here.
    
    s.erase(1);
}
//8
void setdemo2(){
    
}
//9
void mapdemo(){
    
    map<int,int>A;
    map<char,int>count;
    string x="astha vijayvargiya";
    for(char c: x){
        count[c]++;
    } //count the occurance to character in string.
    cout<<count['a']<<" "<<count['z']<<" ";
    
    x.find('a');
    x.erase('z');
    //all of these is done in log(N) time;
}

int main()
{
   setdemo();//always include set, vector etc in include.
   // -10 -1 1 2
    return 0;
    
}
