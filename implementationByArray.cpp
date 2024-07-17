#include<iostream>
#include <bits/stdc++.h>
using namespace std;


class Stack {

    int *arr ;
    int top ;
    int size ;
   // consttructor 
   public:
   Stack(int s ){
    arr = new int[size ];
     top = -1 ;
     size = s ;

   }

   // push 
   void push(int x){
    if(top==size-1){
        cout<< "stack overflow" << endl ;
    }
    else{
        top++ ;
        arr[top] = x ;
        cout<<"push "<<x <<endl;
    }
   }

   // pop

   void pop(){
    if(top==-1){
        cout<< "stack underflow" << endl ;
    }else{
        top-- ;
    }
   }

   // peek 
   int peek(){
    if(top==-1){
        cout<< "stack underflow" << endl ;
    }else{

        return arr[top];
    }
   }

   // is empty 
   bool isEmpty(){
    if(top == -1 ){
        return true ;
    }
   }

   // size 

   int isSize(){

    return top+1 ;
   }


} ;

int main()
{
       Stack S(5) ;

       S.push(5);
       S.push(6);
       S.push(9);
       S.push(8);


    return 0;
}