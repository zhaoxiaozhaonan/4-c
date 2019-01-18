#include <stdio.h>

struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
int index = 0;
int main()
{

    printf("进入学生成绩管理系统\n");
    struct student arr[1000];

    while (1)
    {
        printf("1--添加学生成绩\n");
        printf("2--删除最后一个学生成绩\n");
        printf("3--显示所有学生成绩\n");
        printf("4--业务1：所有总分不及格的学生（总分小于180）\n");
        printf("5--业务2：每一科都不及格的学生\n");
        printf("6--业务3：显示总分最高的学生\n");
        printf("7--业务4：显示平均分最高的学生,且没有布局过科目\n");
        printf("8--退出\n");
        printf("请选择所需项目：\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入学生姓名\n");
            scanf("%s", arr[index].name);

            printf("请输入学生语文成绩\n");
            scanf("%d", &(arr[index].yuwen));

            printf("请输入学生数学成绩\n");
            scanf("%d", &(arr[index].shuxue));

            printf("请输入学生英语成绩\n");
            scanf("%d", &(arr[index].yingyu));

            index++;
            printf("添加完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {

            if (index > 0)
            {
                index--;
                printf("删除成功，点击回车继续\n");
            }
            else
            {
                printf("删除失败，没有可删除的成绩，点击回车继续\n");
            }
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {

            if (index > 0)
            {
                for (int i = 0; i < index; i++)
                {
                    printf("学生%s的语文成绩为%d,数学成绩为%d,英语成绩为%d\n", arr[i].name, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
                }
            }
            else
            {
                printf("无可显示的学生成绩\n");
            }
            printf("点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {

            for (int i = 0; i < index; i++)
            {
                int sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;

                if (sum < 180)
                {
                    printf("第%d名学生%s成绩不及格\n", i + 1, arr[i].name);
                }
            }
            printf("筛选完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {

            for (int i = 0; i < index; i++)
            {

                if (arr[i].yuwen < 60 && arr[i].shuxue < 60 && arr[i].yingyu < 60)
                {
                    printf("第%d名学生%s的每一科都不及格\n", i + 1, arr[i].name);
                }
            }
            printf("筛选完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 6)
        {
            int max = 0;
            int ID = 0;

            for (int i = 0; i < index; i++)
            {
                int sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;

                if (max < sum)
                {
                    max = sum;
                    ID = i + 1;
                }
            }
            printf("第%d名学生%s的总成绩最高，最高为%d\n", ID, arr[ID - 1].name, max);
            printf("筛选完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 7)
        {
            double aver;
            double pingjun = 0;
            int IDD = 0;

            for (int i = 0; i < index; i++)
            {

                if (arr[i].yuwen >= 60 && arr[i].shuxue >= 60 && arr[i].yingyu >= 60)
                {

                    aver = (arr[i].yuwen + arr[i].shuxue + arr[i].yingyu) / 3.0;

                    if (pingjun < aver)
                    {
                        pingjun = aver;
                        IDD = i + 1;
                    }
                }
            }
            printf("第%d名学生%s的平均成绩最高，最高为%lf\n", IDD, arr[IDD - 1].name, pingjun);
            printf("筛选完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 8)
        {
            printf("点击回车退出系统\n");
            break;
        }
    }

    return 0;
}