#include <iostream>
#include <math.h>

using namespace std;

    void task2(){
        int sum=0;
        for(int i=0;i<7;i++){
            int a=0;
            cin>>a;
            if(a>0 && a%3==0){
                sum+=a;
            }
        }
        cout<<"����� �������� ����� ��i ����� �� 0 �� ����� ����� ="<<sum<<endl;
    }

    void task3(){
        int sum=0;
        for(int i=0;i<8;i++){
            int a=0;
            cin>>a;
            if(a<=0) {
                sum+=a;
            }
        }
        cout<<"����� �������� ����� ��i <=0 "<<sum<<endl;
    }

    void task4W(){
        int sum=0;
        for(int i=0;i<5;i++){
            int a=0;
            cin>>a;
            if(a%7==0 || a%3==0){
               sum+=a;
            }
        }
        cout<<"����� �������� ����� ��i %3 %7 = "<<sum<<endl;
    }

    void task4(){
        int arr [5];
        cout<<"������� 5 ��������"<<endl;
        for(int i=0;i<5;i++){
            cin>>arr[i];//����� 5 �������
        }
        int sum=0;
        for(int i=0;i<5;i++){
            cout<<"["<<i<<"]"<<"-"<<arr[i];
        }
        cout<<endl;
        for(int i=0;i<5;i++){//�� ������ ���� �����, �� ������� ��� ������� �� 7 ��� 3
              if(arr[i]%3==0 || arr[i]%7==0){
                sum+=arr[i];
                //sum=sum+arr[i];
              }
        }
        cout<<"����� ="<<sum<<endl;
    }

    void task5W(){
        cout<<"Enter n"<<endl;
        int n;
        cin>>n;
        for(int i=0;i<6; i++){
           cout<<n+i*3<<", ";
        }
    }

    void task5(){
        cout<<"Enter n"<<endl;
        int n;
        cin>>n;
        int arr[6];
        for(int i=0;i<6; i++){
            arr[i]=n+(3*i);
        }
        for(int i=0;i<6;i++){
            cout<<"["<<i<<"]"<<"-"<<arr[i];
        }
    }

    void task9(){
        int sum=0;
        for(int i=0;i<6;i++){
            int a=0;
            cin>>a;
            if((sqrt(a)-(int)sqrt(a))<0.0001){///////
                sum+=a;
            }
        }
        cout<<sum<<endl;
    }


    int task12(int n){
        //cout<<"Enter n"<<endl;
        //int n;
        //cin>>n;
        int res=0;
        for(int i=0;i<n;i++){
            res+=(1+(2*i));
        }
        //cout<<res<<"+"<<endl;
        return res;
    }

    void task13(){
        int sum=0;
        for(int i=1;i<=10;i++){
            sum+=task12(i);
        }
        cout<<"sum="<<sum<<endl;
    }

     void task14(){
        cout<<"������ ���� ��������� ����� �� ������ ��������"<<endl;
        int day;
        cin>>day;

        double resA = 10;
        for(int i=0;i<day-1;i++){
            resA+=(resA*0.1);
        }
        cout<<"resA= "<< resA<<endl;


        double resB = 10;
        for(int i=0;i<7;i++){//�
            resB+=(resB+(resB*0.1));
        }
        cout<<"resB= "<< resB<<endl;
     }

     void task14_1(){

        cout<<"������ ������ ��� ����������� ������"<<endl;
        int day;
        cin>>day;
        double days[day];
        double resA = 10;
        for(int i=0;i<day-1;i++){
            resA+=(resA*0.1);
            days[i]=resA;
        }
        //cout<<"resA= "<< resA<<endl;
        for(int i=0;i<day-1;i++){
            cout<<"�� "<<i+2<<"-��� ���� ������ ����� "<<days[i]<<" ��������."<<endl;
        }


        double resB = 10;
        for(int i=0;i<7;i++){//�
            resB+=(resB+(resB*0.1));
        }
        cout<<"������� �� "<<day<<" ��� ������ ����� "<< resB<<" ��������"<<endl;
     }


    void task15(int untill){
        int sum=0;
        for(int i=1;i<=untill;i++){
            sum+=task12(i);
        }
        cout<<"sum="<<sum<<endl;
    }

    void task17(){
        int ameb= 1;
        cout<<"������ ������ ����� ������� �����:"<<endl;
        int hours;
        cin>>hours;
        int ameba[hours/3];
        for(int i=0;i<hours/3;i++){
            ameb*=2;
            ameba[i]=ameb;
        }
        for(int i=0;i<hours/3;i++){
            cout<<"�� "<<(i+1)*3<<"-����� "<<ameba[i]<<" �����."<<endl;
        }

        //cout<<ameb<<" �����"<<endl;
    }

    void task18(){
    int n;
    cout<<"������ n"<<endl;
    cin>>n;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                cout<<i<<" - ";
                for(int j=1;j<=i;j++){
                    if(i%j==0){
                        cout<<"("<<j<<")";

                    }
                }
                cout<<";"<<endl;
            }
        }
    }

    void task19(){
    int n;

    cout<<"������ n"<<endl;
    cin>>n;
    int sum=0;
        for(int i=1;i<n;i++){
            if(n%i==0){
                cout<<i<<";"<<endl;;
                sum+=i;
            }
        }
        if(sum==n){
            cout<<"���������";
        }else{
            cout<<"����� �� ��������� ���� ������� = "<<sum<<endl;
        }
    }
    /*
 int main(){

    task19();
    return 0;
 }*/
