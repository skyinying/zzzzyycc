//202610112119
//郑宇辰
#include <stdio.h>

struct Sensor{
    int temp;
    int humi;
    int valid;
};

 struct Sensor pack_sensor(int t,int h){
    struct Sensor a;
    a.temp=t;
    a.humi=h;

    if(t>=-20&&t<=50&&h>=0&&h<=100){
        a.valid=1;
    }else{
        a.valid=0;
    }
    return a;  
}

int main()
{
    int t,h;
    scanf("%d %d",&t,&h);
    struct Sensor result=pack_sensor(t,h);
    if(result.valid==1){
        printf("TEMP=%d HUMI=%d\n",result.temp,result.humi);
    }else{
        printf("ERROR: Out of Range\n");
    }
    return 0;

}
