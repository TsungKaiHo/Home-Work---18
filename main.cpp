//
//  main.cpp
//  Home Work 18
//
//  Created by 何宗愷 on 2019/5/30.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
        char num1[20];
        int num2,num[256]={0};
        printf("       計算每個數字出現的次數               \n");
        printf("輸入一個連串整數：");
        scanf("%s",num1);
        for(num2=0;num2<strlen(num1);num2++)
            num[(int)num1[num2]]++;
        for(num2=0;num2<256;num2++)
            if(num[num2]!=0)
                printf("數字 %c 出現 %d 次\n",(char)num2,num[num2]);
    return 0;
}
