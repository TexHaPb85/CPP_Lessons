
#include <iostream>
#include <stdlib.h>

using namespace std;

void task3V1(){
    const int a = 5;
    const int b = 6;
    int firstArr[a];
    int secondArr[b];
    for(int i=0; i<a; i++){
        firstArr[i]= rand() % 100;
    }
    for(int i=0; i<b; i++){
        secondArr[i]=rand() % 100;
    }
    for(int i=0; i<a; i++){
        cout<<"firstArray["<<i<<"]="<<firstArr[i]<<endl;
    }
    for(int i=0; i<b; i++){
        cout<<"secondArray["<<i<<"]="<<secondArr[i]<<endl;
    }
    int tmp=0;
    tmp=firstArr[0];
    firstArr[0]=secondArr[b-1];
    secondArr[b-1]=tmp;
    //swap(firstArr[0],secondArr[b-1]);
    for(int i=0; i<a; i++){
        cout<<"-firstArray["<<i<<"]="<<firstArr[i]<<endl;
    }
    for(int i=0; i<b; i++){
        cout<<"-secondArray["<<i<<"]="<<secondArr[i]<<endl;
    }
}

void task4V1(){
    const int a = 3;
    const int b = 14;
    int fir[a];//={1,2,3};
    int sec[b];//={34,32,4,1,2,10,324,-21,1,2,3,1,2,3};
    for(int i=0; i<a; i++){
        fir[i]=(rand()%10);
        cout<<"fir["<<i<<"]="<<fir[i]<<", ";
    }
    cout<<endl;
    for(int i=0; i<b; i++){
        sec[i]=(rand()%10);
        cout<<"sec["<<i<<"]="<<sec[i]<<", ";
    }
    cout<<endl;
    //int same [b/a];
    //int counter=0;
    if(sizeof(fir)/4>sizeof(sec)/4){
        cout<<sizeof(fir)/4<<">"<<sizeof(sec)/4<<" Array size exception"<<endl;
    }else{
        //cout<<sizeof(fir)/4<<" - "<<sizeof(sec)/4<<endl;
        for(int i=0; i<b; i++){
            if(fir[0]==sec[i]){
                    //int err=0;
                for(int j=0;j<a;j++){
                     if(fir[j]!=sec[i+j]) {
                        cout<<fir[j]<<"!="<<sec[i+j]<<endl;
                        //counter-=err;
                        break;
                     }else{
                         cout<<"index = "<<i<<endl;
                         /**if(counter==0){
                            same[counter]=i;
                            counter++;
                            err++;
                         }else if(counter>0 && same[counter-1]!=i){
                            same[counter]=i;
                            counter++;
                            err++;
                         }*/
                     }
                }
            }
        }
        /**if(counter<=0){
            cout<<"there no same array in this"<<endl;
        }*/
    }
    /**cout<<counter<<endl;
    for(int i =0; i<counter; i++){
        cout<<same[i]<<endl;
    }*/
}
///Variant 5

//int[] swap

void task3V5(){
    const int a = 12;
    int sec[a]={34,32,4,0,2,3,324,0,0,1,0,3};
    int counter=0;
    for(int i=0; i<a; i++){
         if(sec[i]==0){
            swap(sec[i],sec[counter]);
            counter++;
         }
    }
    for(int i=0; i<a; i++){
        cout<<"firstArray["<<i<<"]="<<sec[i]<<endl;
    }
}

 /**int main(){

    task3V5();
    return 0;
 }*/
