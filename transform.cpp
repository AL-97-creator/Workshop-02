#include <iostream>
#include <cstdio>

int transform(int decimal){
    int track=decimal;
    int place=0;
    while (track!=0){
        track=track/2;
        place++;
    }
    int array[place];
    int temp=decimal;
    int k=0;
    while (temp>0){
        array[k] = temp % 2;
        temp = temp/2;
        k++;
    }
    int size=(sizeof(array)/sizeof(*array));
    for (int i=0; i<size; i++){
        std::cout << array[size-1-i];
    }
std::cout << " " << std::endl;
return 0;
}

int main(){
    int decimal;
    printf("Enter a base 10 number: ");
    scanf("%d", &decimal);
    transform(decimal);
}
