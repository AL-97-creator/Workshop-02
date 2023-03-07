#include <iostream>
#include <cstdio>
#include <cstdlib>

int subtraction(int array1[], int array2[],int len1, int len2){
    std::string sub;
    std::string zer= "0";
    std::string one= "1";
    std::string zerone= "01";
    for (int i=0;i<len1;i++){
        if (array1[i]==0 && array2[i]==0){
            sub.append(zer);
        } else if (array1[i]==1 && array2[i]==1){
            sub.append(one);
        } else if (array1[i]==1 && array2[i]==0){
            sub.append(zer);
        } else if (array1[i]==0 && array2[i]==1){
            sub.append(zerone);
        }
    }
    std::cout << sub << std::endl;
    return 0;
}


int main(){
    printf("Enter the 1st binary number: ");
    int bin1;
    scanf("%d", &bin1);
    int track=bin1;
    int place=0;
    while (track!=0){
        track=track/2;
        place++;
    }
    int binarr1[place];
    int temp=bin1;
    int k=0;
    while (temp>0){
        binarr1[k] = temp % 2;
        temp = temp/2;
        k++;
    }
    int size=(sizeof(binarr1)/sizeof(*binarr1));
    int temp2;
    for (int i=0; i<(size/2); i++){
        temp2=binarr1[i];
        binarr1[i]=binarr1[size-i-1];
        binarr1[size-i-1]=temp2;
    }
    printf("Enter the 2nd binary number: ");
    int bin2;
    scanf("%d", &bin2);
       int track2=bin2;
    int place2=0;
    while (track2!=0){
        track2=track2/2;
        place2++;
    }
    int binarr2[place2];
    int temp4=bin2;
    int c=0;
    while (temp4>0){
        binarr2[c] = temp4 % 2;
        temp4 = temp4/2;
        c++;
    }
    int size2=(sizeof(binarr2)/sizeof(*binarr2));
    int temp3;
    for (int i=0; i<(size2/2); i++){
        temp3=binarr2[i];
        binarr2[i]=binarr2[size-i-1];
        binarr2[size-i-1]=temp3;
    }

    int sub = subtraction(binarr1,binarr2,place,place2);
}