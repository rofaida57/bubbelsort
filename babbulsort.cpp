 #include<iostream>
 using namespace std;
 int perfect(int n,int i=1){
    if(i==1){
        return 0;
    }
    else if (n%i==0){
       return perfect(n,i+1)+i; 
    }
    else { return prefect (n,i+1);}
 }
 int main(){
    int n;
    int i;
    cout<<"give me n:";
    cin>>n;

    cout<<"give me numburs";
    for()
 } 