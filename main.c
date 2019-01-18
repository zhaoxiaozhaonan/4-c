#include <stdio.h>

struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};

int main(){

    printf("进入学生成绩管理系统\n");
    struct student arr[1000];
    int index=0;
    
    while(1){
        printf("1--添加学生成绩\n");
        printf("2--删除最后一个学生成绩\n");
        printf("3--显示所有学生成绩\n");
        printf("4--业务1：所有总分不及格的学生（总分小于180）\n");
        printf("5--业务2：每一课都不及格的学生\n");
        printf("6--业务3：显示总分最高的学生\n");
        printf("7--业务4：显示平均分最高的学生\n");
        printf("8--退出\n");
        printf("请选择所需项目：\n");
        int code;
        scanf("%d",&code);
        
        if (code==1) {
            /* code */
        }
         if (code==2) {
            /* code */
        }
         if (code==3) {
            /* code */
        }
         if (code==4) {
            /* code */
        }
         if (code==5) {
            /* code */
        }
         if (code==6) {
            /* code */
        }
         if (code==7) {
            /* code */
        }
         if (code==8) {
           printf("点击回车退出系统\n");
           break;
        }

        

    
    }
    

    return 0;

}