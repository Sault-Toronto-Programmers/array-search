#include <iostream>

using namespace std;

int main()
{
    int arr[]={44,33, 22, 55, 66, 77};
    int num, option, i, size;
    bool found;
    do{
        found = false;
        cout<<"\nSearch for number ";
        cout<<"\n1. Using for loop 2. Using while loop 3. Using for each loop 4. Exit";
        cin>>option;
        cout<<"\nEnter the number you want to search: ";
        cin>>num;
        switch(option){
            case 1:
                for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
                    if(arr[i] == num){
                        found = true;
                        break;
                    }
                }
                if(found){
                    cout<<"\nNumber found at position "<<i+1;
                }else{
                    cout<<"\nNumber not found in array";    
                }
            break;
            case 2:
                i=0;
                size = sizeof(arr)/sizeof(arr[0]);
                while(i<size){
                    if(arr[i] == num){
                        found = true;
                        break;
                    }
                    i++;
                }
                if(found){
                    cout<<"\nNumber found at position "<<i+1;
                }else{
                    cout<<"\nNumber not found in array";    
                }
            break;
            case 3:
                //c++ does not have a for loop but java does, go ahead and use it!
                
            break;
                
        }
    }while(option != 4);
    

    return 0;
}