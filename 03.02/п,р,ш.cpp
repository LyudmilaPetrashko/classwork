// Example program
#include <iostream>
#include <vector>
using namespace std;

struct z{
    int size;
    int* a=new int[size];
    z(int n=1){
        vector<int> arr(0);
        int k=0;
        for(int i=2; n!=1; i++){
            
            while((n%i)==0){
                arr.push_back(i);
                n/=i;
                k++;
        }
        }
        size=k;
         for(int y=0; y<k; y++){
             a[y]=arr[y];
            
          }
        }
       
       bool operator==(const z& val3){
                if(size==val3.size){
                    int i=1,j=1, size2=val3.size;
                    for(int p=0; p<size; p++){
                      i=i*a[p];
                    }
                    for( int q=0; q<size2; q++){
                        j=j*val3.a[q];
                    }
                    if(i==j) return 1;
                    else return 0;
                } else return 0;
                
                }
        
        z operator+(const z& val1){
            int i=1,j=1, sum, size2=val1.size;
            z s;
            for(int p=0; p<size; p++){
                i=i*a[p];
            }
            for( int q=0; q<size2; q++){
                j=j*val1.a[q];
            }
            sum=i+j;
            return z(sum);
            }
            
            z operator-(const z& val2){
                if(*this==val2){
                    return 0;}
                    else{
            int i=1,j=1, dif, size2=val2.size;
            for(int p=0; p<size; p++){
                i=i*a[p];
            }
            for( int q=0; q<size2; q++){
                j=j*val2.a[q];
            }
            dif=i-j;
            return z(dif);
            }}
            
            
            
        void display(z h){
            int sizeh=h.size;
            for(int x=0; x<sizeh; x++){
                cout<<h.a[x]<<" ";
            }
            }
        
        };
        
                
                
        

int main()
{ int aq,bq, g;
z c, d;
cin>>aq>>bq;
z AQ(aq);
z BQ(bq);
c=AQ+BQ;
cout<<"sum: ";
c.display(c);
d=AQ-BQ;
cout<<endl<<"dif: ";
d.display(d);
g=(AQ==BQ);

cout<<endl<<"==: "<<g;

return 0;
}
