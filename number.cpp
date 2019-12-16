#include <iostream>
#include <cstdio>

using namespace std;

class Number{
private:
    int a; int b; int c; int d;
    /*a와 b는 범위 c와 d는 조건 c의 배수이면서 d의 배수가 아니어야 한다 */
public:
    void number(int a,int b,int c, int d)
    {
      this->a = a;
      this->b = b;
      this->c = c;
      this->d = d;
    }
    int Solution()
    {
        int ans = 0;
          for(int i = a; i <= b; i++)
          {
                if(i%c == 0 && i%d != 0)
                {
                    ans++;
                }
          }
          return ans;
    }

};

int main()
{
    FILE* fp1 = fopen("number.inp","r");
    FILE* fp2 = fopen("number.out","w");
    int T;  /* testcase number */
    int a; int b; int c; int d;
    /*a와 b는 범위 c와 d는 조건 c의 배수이면서 d의 배수가 아니어야 한다 */

    int answer;/* 정답 개수 */

    fscanf(fp1,"%d",&T);
    Number n1;

    while(T--)
    {
        fscanf(fp1,"%d %d %d %d",&a,&b,&c,&d);
        n1.number(a,b,c,d);
        answer = n1.Solution();
        fprintf(fp2,"%d\n",answer);
    }

    return 0;
}
