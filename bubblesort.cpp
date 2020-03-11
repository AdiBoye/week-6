# include <iostream>
using namespace std;
void bsort(int a[],int n);
void swap(int B[],int a,int d);
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int data[size];
    for (int i = 0;i<size;i++){
        cout<<"Enter the element "<<i+1<<endl;
        cin>>data[i];
    }
    bsort(data,size);
    for (int i = 0; i< size;i++){
        cout<<data[i];
    }
    return 0;
}
void bsort(int a[],int n){
    for (int i=0;i<n;i++){
        for (int j =0;j < n -i -1;j++){
            if(a[j]>a[j+1]){
                swap(a,j,j+1);
            }
        }
    }
}
void swap(int B[],int a,int d){
    int temp = B[a];
    B[a]=B[d];
    B[d]=temp;
}
