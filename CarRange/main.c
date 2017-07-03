//
//  main.c
//  CarRange
//
//  Created by a20161104573 on 2017/7/2.
//  Copyright © 2017年 a20161104573. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fr;
    FILE *fw;
    char str1[70];
    char str2[70];
    char year[5],month[5],date[5],time[5],branch[5],sec[5],a[11],b[11],c[11],d[11],e[11],f[11],rate[6],course[6],altitude[10],moon[5];
    int i;
    fr=fopen("//Users//a20161104573//Desktop//CarRange//GPS170510.log","r+");
    fw=fopen("//Users//a20161104573//Desktop//CarRange//output.csv","w+");
    if(fr==NULL)
    {
        printf("打开文件错误，您打开的文件可能不存在\n");
    }
    else
    {
        printf("解读GPS\n");
        fprintf(fw,"解读GPS\n");
        printf("日期,时间,经度,纬度,地面速率,地面航向,海拔高度\n");
        fprintf(fw,"日期,时间,经度,纬度,地面速率,地面航向,海拔高度\n");
        while(fscanf(fr,"%s %s\n",str1,str2)!=EOF)
        {
            for(i=0;i<2;i++)
            {
                year[i]=str1[i+55];
            }
            year[2]='\0';
            
            
            for(i=0;i<2;i++)
            {
                month[i]=str1[i+53];
            }
            month[2]='\0';
            
            
            for(i=0;i<2;i++)
            {
                date[i]=str1[i+51];
            }
            date[2]='\0';
            
            
            for(i=0;i<2;i++)
            {
                time[i]=str1[i+7];
            }
            time[2]='\0';
            
            
            
            for(i=0;i<2;i++)
            {
                branch[i]=str1[i+9];
            }
            branch[2]='\0';
            
            
            for(i=0;i<2;i++)
            {
                sec[i]=str1[i+11];
            }
            sec[2]='\0';
            
            
            for(i=0;i<2;i++)
            {
                a[i]=str1[i+16];
            }
            a[2]='\0';
            
            
            
            for(i=0;i<2;i++)
            {
                b[i]=str1[i+18];
            }
            b[2]='\0';
            
            
            
            for(i=0;i<3;i++)
            {
                c[i]=str1[i+21];
            }
            c[3]='\0';
            
            
            
            for(i=0;i<2;i++)
            {
                d[i]=str1[i+27];
            }
            d[2]='\0';
            
            
            
            for(i=0;i<2;i++)
            {
                e[i]=str1[i+29];
            }
            e[2]='\0';
            
            
            
            for(i=0;i<3;i++)
            {
                f[i]=str1[i+32];
            }
            a[3]='\0';




            
            
            for(i=0;i<5;i++)
            {
                rate[i]=str1[i+39];
            }
            rate[5]='\0';
            
            
            
            for(i=0;i<5;i++)
            {
                course[i]=str1[i+45];
            }
            course[5]='\0';
            
            
            
            for(i=0;i<4;i++)
            {
                altitude[i]=str2[i+43];
            }
            altitude[4]='\0';
            
            
            for(i=0;i<2;i++)
            {
                moon[i]=str2[i+39];
            }
            moon[2]='\0';
            
            
            printf("%s年%s月%s日,%s时%s分%s秒,%s度%s分%s秒,%s度%s分%s秒,%s公里／小时,%s度,%sm,%s颗\n",year,month,date,time,branch,sec,a,b,c,d,e,f,rate,course,altitude,moon);
            fprintf(fw,"%s年%s月%s日,%s时%s分%s秒,%s度%s分%s秒,%s度%s分%s秒,%s公里／小时,%s度,%sm,%s颗\n",year,month,date,time,branch,sec,a,b,c,d,e,f,rate,course,altitude,moon);
        }
        fclose(fr);
        fclose(fw);
    }
    return 0;
}

