/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector> //very important to add these both
#include<algorithm>

using namespace std;

bool f( int x, int y){ //comparator function to sort vector in descending order.
    return x>y;
}

int main()
{
    vector<int> A={11,2,3,14};
    //1
    sort(A.begin(),A.end()); 
    //2,3,11,14
    //O(NlongN)
    
    //2
    bool present=binary_search(A.begin(),A.end(),3); //true
    present=binary_search(A.begin(),A.end(),4); //False

    //3
    A.push_back(100); //inserts 100 in the vector array
    
    //4 
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123); //A={2,3,11,14,100,100,100,100,123}
    
    //lower bounds and upperbongs here can be only solved if its sorted.
    vector<int>::iterator it =lower_bound(A.begin(),A.end(),100); //>= (take you to first element which is >=)
    vector<int>::iterator it2 =upper_bound(A.begin(),A.end(),100); //> (take you to first element which is >)
    
    cout<< *it <<" "<<*it2<<endl;
    cout<< it2-it<<endl; //4 O(1) time
    
    //5
    sort(A.begin(),A.end(),f);// sort the vector into decreasing order
    
    vector<int>::iterator it3;
    for(it3=A.begin();it3!=A.end();it3++){ //one of the way to print vector 
        cout<< *it3 <<" "<<endl;
    }
    
    //6
    // same as 5th but shorter
    auto it =lower_bound(A.begin(),A.end(),100); //>= (take you to first element which is >=)
    auto it2 =upper_bound(A.begin(),A.end(),100); //> (take you to first element which is >)
    
    for( int &x:A){
        x++;  //refrence 
    }
    for(int x: A){
        cout<<x<<" ";
    }

    return 0;
}

