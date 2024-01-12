/*
//1.soru

#include <stdio.h>
int main()
{
    int dizi[10],i,k,degisken;
    for(i=0;i<10;i++)
    {
        printf("dizinin %d. elemanını giriniz:",i+1);
        scanf("%d",&dizi[i]);
    
    }

    for(k=0;k<10;k++)
    {
        for(i=0;i<10;i++)
        if(dizi[i]<dizi[i+1])
        {
            degisken=dizi[i];
            dizi[i]=dizi[i+1];
            dizi[i+1]=degisken;
        }

    }

    printf("dizinin en büyük iki değeri:%d,%d",dizi[0],dizi[1]);
}

*/
/*
//2.soru
#include <stdio.h>
#include <string.h>
int main()
{
    char kelime[20];
    printf("bir kelime giriniz:");
    scanf("%s",kelime);
   int a=strlen(kelime);
    sirala(kelime,a);
    
return 0;
}

void sirala(char dizi[],int boyut)
{
    char degisken;
    int i=0;
    
    
        for(int ;i<boyut-1;i++)
        {
            for(int n=0;n<boyut-1;n++)
            {
                if(dizi[n]>dizi[n+1])
                {
                 degisken=dizi[n];
                dizi[n]=dizi[n+1];
                dizi[n+1]=degisken;
                }

            }
        
        }

    

   printf("%s",dizi);


}

*/

/*
//3.soru

#include <stdio.h>  
#define k 20

void sesli(char dizi[]){
    int i,n=0;
    for(i=0;i<k;i++){
        if(dizi[i]=='a' || dizi[i]=='e' || dizi[i]=='ı'|| dizi[i]=='i'|| dizi[i]=='o' || dizi[i]=='ö' || dizi[i]=='ü' || dizi[i]=='u'){
            n++;
        }

    }
    printf("toplam sesli harf adedi:%d",n);
}
int main()
{
    char dizi[k]; 
    printf("kelime giriniz:");
    gets(dizi);
    sesli(dizi);
    
    return 0;
}
*/

#include <stdio.h>

void ekle(int eleman,int dizi[],int boyut)
{
    int degisken;
    dizi[6]=eleman;
    for(int i=0;i<boyut;i++)
    {
        for(int j=0;j<boyut;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                degisken=dizi[i];
                dizi[i]=dizi[i+1];
                dizi[i+1]=degisken;
            }
        }
    }
   
}

int main()
{
    int dizi[]={1,3,8,12,45,57},a,boyut=7;
     for(int i=0;i<boyut;i++)
    {
         printf("dizi:%d\n",dizi[i]);
    }
    printf("diziye eklemek istediğiniz elemanı girin:");
    scanf("%d",a);
    ekle(a,dizi,boyut);
     for(int i=0;i<boyut;i++)
    {
        printf("yeni dizi:%d\n",dizi[i]);
    }

    return 0;
}

