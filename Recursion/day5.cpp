#include<iostream>
using namespace std;
// bool isSorted(int arr[],int size){
//     if((size==0)||(size==1))
//         return true;
//     if(arr[0]>arr[1])
//         return false;
//     return isSorted(arr+1,size-1);
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,9,8};
//     int size=8;
//     bool ans=isSorted(arr,size);
//     if(ans){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted"<<endl;
//     }
//     return 0;
// }

// void isSum(int arr[],int size,int sum){
//     if(size==0){
//         cout<<"sum is"<<sum<<endl;
//         return;
//     }
//     return isSum(arr+1,size-1,sum+arr[0]);
// }


// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     int sum=0;
//     isSum(arr,size,sum);
//     return 0;
// }

void print(int arr[],int size){
    cout<<"Array is " << size << endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool isfound(int arr[],int size,int key){
    print(arr,size);
  
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    int ans=isfound(arr+1,size-1,key);
    return ans;
}

int main(){
    int arr[]={1,2,3,4,5};
    int key=3;
    int size=5;
    bool ans=isfound(arr,size,key);
    if(ans){
        cout<<"Key is found"<<endl; 
    }
    else{
        cout<<"Key is not found"<<endl;
    }
    return 0;
}