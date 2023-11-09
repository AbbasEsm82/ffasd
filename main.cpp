#include <iostream>
using namespace std;

void Daryaft (float a[],int n){
    for(int i=0;i<n;i++){
        cout <<"plase type number "<<(i+1)<<" :";
        cin >> a[i];
    }
}

float Jam (float a[],int n){
    float temp=0;
    for(int i=0;i<n;i++){
        temp+=a[i];
    }
    return temp;
}

float Miangin(float jam,int n){
    float temp=0;
    temp=(jam/n);
    return temp;
}
void Makos (float a[],int n){
    float temp=0;
    int s=n-1;
    for(int i=0;i<(n/2);i++){
        temp=a[i];
        a[i]=a[s];
        a[s]=temp;
        s--;}
}






int main()
{
    int n ;

    cout << "how many numbers :";
    cin >> n;
    float a[n];
    Daryaft(a,n);

    cout<<"arrays is :";
    for(int i=0;i<n;i++){
        cout << a[i]<< " ";}
        cout << endl;

    float jam=Jam(a,n);
    cout << "Jam :"<< jam<<endl;

    float miangin = Miangin(jam,n);
    cout << "Miangin :"<< miangin<<endl;


    Makos(a,n);
    cout<<"Makos arrays is :";
    for(int i=0;i<n;i++){
        cout << a[i]<< " ";}


}


