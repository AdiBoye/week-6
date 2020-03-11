# include <iostream>
using namespace std;
void insertSort(int A[], int c);
void swap(int A[],int c,int d);
int main(){ int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int data[size];
    for (int i =0;i<size;i++){
        cout<<"Enter the element "<<i+1<<endl;
        cin>>data[i];
    }
    insertSort(data,size);
    for (int i = 0; i<size;i++){
        cout<<data[i];
    }
}
void insertSort(int A[], int c){
    for (int j = 0;j<c;j++){
        int min = j;
        for (int i = j; i<c-1;i++){
            if (A[i+1]<A[min]){ min = i+1;}
            } swap(A,j,min);}
}

   void swap(int A[],int q,int d){
    int temp = A[q];
    A[q]=A[d];
    A[d]=temp;
}