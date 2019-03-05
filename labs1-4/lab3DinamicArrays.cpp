#include <iostream>
#include <stdlib.h>


using namespace std;

void task3_1(){
    //int arrSize;
    //cin>>arrSize;
    const int n=7;
    int *arr= new int[n];
    arr[0]=3;
    arr[1]=4;
    arr[2]=5;
    arr[3]=6;
    arr[4]=4;
    arr[5]=4;
    arr[6]=3;
    /*for(int i = 0; i<arrSize; i++){
        arr[i]=rand()%10;
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;
    }*/
    int counterF=0;
    int counterL=/**arrSize*/n-1;
    int *first=&arr[counterF];
    int *last=&arr[counterL];
    bool res=true;
    do{
        if(*first==*last){
            cout<<*first<<"="<<*last<<endl;
            *first=arr[counterF+1];
            counterF++;
            *last=arr[counterL-1];
            counterL--;

        }else{
            cout<<*first<<"!="<<*last;
            cout<<"массив не симетричний"<<endl;
            res=false;
            break;
        }
    }while(counterL-counterF>-1);
    if(res){
        cout<<"массив є симетричнм"<<endl;
    }
    delete [] arr;
}

void push_back(int *&arr, int aSize, int value, int indexOfEntry){
    int *newArr= new int[aSize+1];
    int loseCounter=0;
    aSize++;
    for(int i=0;i<aSize;i++){
        if(i==indexOfEntry){
            newArr[i]=value;
            loseCounter++;
        }else{
            newArr[i]=arr[i-loseCounter];
        }
    }
    delete[] arr;
    arr=newArr;
}

void pop_back(int *&arr, int &aSize){
    aSize--;
    int *newArr= new int[aSize];
    for(int i=0;i<aSize;i++){
        newArr[i]=arr[i];
    }
    delete[] arr;
    arr=newArr;
}

void task3_2(){
    int n=0; //количество элементов одномерного массива
    int k=0; //номер элемента,который нужно удалить
    cout<<"Enter number of elements of massive : ";
    cin>>n;
    int *mass=new int[n];//одномерный динамический массив

     //Заполним элементы массива случайными числами

     for(int i=0;i<n;i++)
     {
        mass[i]=(1+rand()%10);
     }
     //Выведем полученный массив

     cout<<endl;
     for(int i=0;i<n;i++){
        cout<<mass[i]<<"; ";
     }
     cout<<endl;
     cout<<"Enter the value that needed to delete: ";
     cin>>k;
     //Удалим заданный элемент массива
     int delCount=0;
     for(int i=0;i<n;i++){
        cout<<"mass["<<i<<"]="<<mass[i]<<" k="<<k<<endl;
        if(mass[i]==k){
                delCount++;
             //*(mass+i)=*(mass+(i+1));
            for(int j=i;j<n;j++){
                    mass[j]=mass[j+1];
                    //*(mass+j)=*(mass+(j+1));
            }
            if(i<n-2){
                i--;
            }
         }
     }
    /**for(int i=0;i<n;i++){
        if(*(mass+i)>99999){
            int *massTMP=mass;
        }
    }*/
    for(int i=0;i<delCount-1;i++){
        pop_back(mass,n);
    }

     //Выведем массив без удалённого элемента
     cout<<endl;
     for(int i=0;i<n-1;i++){
        cout<<*(mass+i)<<"; ";
     }
     delete [] mass;
}

void task3_3(){
    const int arrSize=10;
    int val;
    int index;
    int* arr= new int [arrSize];
    for(int i = 0; i<arrSize; i++){
        arr[i]=rand()%10;
        cout<<"arr["<<i<<"]="<<arr[i]<<"; ";
    }
    cout<<"Введите значение"<<endl;
    cin>>val;
    cout<<"Введите индекс вхождения"<<endl;
    cin>>index;
    push_back(arr,arrSize,val,index);
    cout<<endl;
    for(int i = 0; i<arrSize+1; i++){
        cout<<"arr["<<i<<"]="<<arr[i]<<"; ";
    }

}

void task3_4(){

    int arr1Size=0;
    int arr2Size=0;

    cout<<"Enter size of first Array"<<endl;
    cin>>arr1Size;
    cout<<"Enter size of second Array"<<endl;
    cin>>arr2Size;

    int* arr1= new int [arr1Size];
    int* arr2= new int [arr2Size];
    for(int i = 0; i<arr1Size; i++){
        arr1[i]=rand()%10;
        cout<<"arr1["<<i<<"]="<<arr1[i]<<"; ";
    }
    cout<<endl;
    for(int i = 0; i<arr2Size; i++){
        arr2[i]=rand()%10;
        cout<<"arr2["<<i<<"]="<<arr2[i]<<"; ";
    }
    cout<<endl;
    int* arr= new int[arr1Size+arr2Size];
    for(int i = 0; i<arr1Size; i++){
        arr[i]=arr1[i];
    }
    for(int i = 0; i<arr2Size; i++){
        arr[i+arr1Size]=arr2[i];/**<  */
    }
    for(int i = 0; i<(arr1Size+arr2Size); i++){
        cout<<"arr["<<i<<"]="<<arr[i]<<"; ";
    }
}

void task3_5(){
    int rows;
    cout<<"r"<<endl;
    cin>>rows;
    int cols;
    cout<<"c"<<endl;
    cin>>cols;
    int** arr= new int* [rows];
    for(int i=0;i<rows;i++){
            arr[i]=new int [cols];
    }
    ///////////////////////////////////

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=rand()%10;
            cout<<"["<<i<<"]["<<j<<"]="<<arr[i][j]<<"; ";
        }
        cout<<endl;
    }
    int del=0;
    cout<<"del (1->max):"<<endl;
    cin>>del;
    int** newArr = new int* [rows-1];
    int loseC=0;
    for(int i=0;i<rows-1;i++){
            if(i==del){
                loseC++;
                newArr[i]=arr[i+loseC];
            }else{
                newArr[i]=arr[i+loseC];
                //cout<<*arr[i]<<" " <<*newArr[i]<<endl;
            }
    }
    for(int i=0;i<rows-1;i++){
        for(int j=0;j<cols;j++){
            cout<<"["<<i<<"]["<<j<<"]="<<newArr[i][j]<<"; ";
        }
        cout<<endl;
    }


    ////////////////////////////////////
    for(int i=0;i<rows; i++){
        delete[] arr[i];
    }
    arr=newArr;
    delete[]arr;
    //cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<"; ";
    //cout<<endl;
}

void task3_6(){
    int rows;
    cout<<"r"<<endl;
    cin>>rows;
    int cols;
    cout<<"c"<<endl;
    cin>>cols;
    int** arr= new int* [rows];
    for(int i=0;i<rows;i++){
            arr[i]=new int [cols];
    }
    //////////////////////////
    int* entry= new int [rows];
    cout<<"Введите через пробел строку длиной в "<<cols<<endl;
    for(int i=0; i<cols;i++){
        cin>>entry[i];
    }
    cout<<"Entry:"<<endl;
    for(int i=0; i<cols;i++){
        cout<<entry[i]<<", ";
    }
    cout<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=rand()%10;
            cout<<"["<<i<<"]["<<j<<"]="<<arr[i][j]<<"; ";
        }
        cout<<endl;
    }
    cout<<"Enter the position"<<endl;
    int pos;
    cin>>pos;
    ////////////////////////////
    int** newArr = new int* [rows+1];
    int loseC=0;
    for(int i=0;i<rows+1;i++){
            if(i==pos){
                loseC--;
                newArr[i]=entry;
            }else{
                newArr[i]=arr[i+loseC];
                //cout<<*arr[i]<<" " <<*newArr[i]<<endl;
            }
    }
    for(int i=0;i<rows+1;i++){
        for(int j=0;j<cols;j++){
            cout<<"["<<i<<"]["<<j<<"]="<<newArr[i][j]<<"; ";
        }
        cout<<endl;
    }
/////////////////////////////////////////
    for(int i=0;i<rows; i++){
        delete[] arr[i];
    }
    arr=newArr;
    delete[]arr;

}

void task3_7(){

    int rows;
    cout<<"r"<<endl;
    cin>>rows;
    int cols;
    cout<<"c"<<endl;
    cin>>cols;
    int** arr= new int* [rows];
    for(int i=0;i<rows;i++){
            arr[i]=new int [cols];
    }
    ///////////////////////////////////
    int nullC=0;
    int* nulls =new int[rows];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=rand()%10;
            cout<<"["<<i<<"]["<<j<<"]="<<arr[i][j]<<"; ";
            if(arr[i][j]==0){
                if(nulls[nullC-1]!=i){
                    nulls[nullC]=i;
                    nullC++;
                }
            }
        }
        cout<<endl;
    }
    cout<<"Массив после удаления нулевых рядков"<<endl;

    int** newArr = new int* [rows-nullC];
    int loseC=0;
    int iter=0;
    for(int i=0;i<rows-nullC;i++){
            if(i==nulls[iter]){
                loseC++;
                iter++;
                newArr[i]=arr[i+loseC];
            }else{
                newArr[i]=arr[i+loseC];
                //cout<<*arr[i]<<" " <<*newArr[i]<<endl;
            }
    }
    for(int i=0;i<rows-nullC;i++){
        for(int j=0;j<cols;j++){
            cout<<"["<<i<<"]["<<j<<"]="<<newArr[i][j]<<"; ";
        }
        cout<<endl;
    }


    ////////////////////////////////////
    for(int i=0;i<rows; i++){
        delete[] arr[i];
    }
    arr=newArr;
    delete[]arr;
}

void task3_8(){
int rows;
    cout<<"r"<<endl;
    cin>>rows;
    int cols;
    cout<<"c"<<endl;
    cin>>cols;
    int** arr= new int* [rows];
    for(int i=0;i<rows;i++){
            arr[i]=new int [cols];
    }
    ///////////////////////////////////
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=rand()%10;
            cout<</*"["<<i<<"]["<<j<<"]="<<*/arr[i][j]<<"; ";
        }
        cout<<endl;
    }
    cout<<"транспонована матриця:"<<endl;

    int** newArr = new int* [cols];
    for(int i=0;i<rows;i++){
            newArr[i]=new int [rows];
    }

    //i-j =c ; i+c; j+c;
    int diff=0;
    if(rows>cols){
        diff=rows-cols;
    }else{
        diff=cols-rows;
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<"; ";
            if(rows>cols){
                newArr[i-diff][j+diff]=arr[j][i];
            }else{
                newArr[i+diff][j-diff]=arr[j][i];
            }

        }

    }
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<</*"["<<i<<"]["<<j<<"]="<<*/newArr[i][j]<<"; ";
        }
        cout<<endl;
    }

    ////////////////////////////////////
    for(int i=0;i<rows; i++){
        delete[] arr[i];
    }
    arr=newArr;
    delete[]arr;
}
/*
int main(){
    task3_8();
    return 0;
}*/
