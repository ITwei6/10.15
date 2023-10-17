#include <iostream>

using namespace std;


//template <class T>
//
//T fun(T x, T y)
//{
//	return x + y;
//}
////
////int main()
////{
////	fun(1, 2);
////	fun(1.2, 2);
////	fun<double>(1.2, 1);
////
////
//// }
//
//int getLCA(int a, int b)
//{
//    if (a == 1)return a;
//    if (b == 1)return b;
//    //首先判断a和b是否构成祖先关系。如果构成祖先关系，那么该祖先就是最近祖先
//   
//  /*  if (b == a * 2 + 1 || b == a * 2) return a;
//    if (a == b * 2 + 1 || a == b * 2) return b;*/
//
//   /* while (a != b)
//    {
//        if (b % 2 == 1)b = (b - 1) / 2;
//        else if (b % 2 == 0)b = b / 2;
//    }*/
//
//    //a和b开始往上找
//    while (a != b)
//    {
//       //不再同一层
//        if (b / 2 >= a) b = b / 2;
//        // a=2  b=12
//        else if (a / 2 >= b) a = a / 2;
//        // a=12 b=2;
//        else
//        {
//            //在同一层
//            a = a / 2;
//            b = b / 2;
//        }
//    }
//
//
//    return a;
//}
//
////int main()
////{
////    cout << getLCA(3, 100) << endl;
////    return 0;
////}
//int main()
//{
//    int num;
//    cin >> num;
//    int ret1 = 0, ret2 = 0, ret3 = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        int bit = (num >> i) & 1;
//        if (bit == 1)
//        {
//            ret1++;
//        }
//        else
//        {
//            if (ret2 == 0)
//            {
//                ret1 -= ret2;
//                ret2 = ret1 > ret2 ? ret1 : ret2;
//            }
//            else
//            {
//                ret1=- ret2;
//                ret2 = ret1 > ret2 ? ret1 : ret2;
//             
//
//            }
//               
//                
//        }
//        //0011100110
//    }
//    cout << ret2 << endl;
//}
bool Prime(int n)
{
    if (n <= 1)return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;

}
int main()
{

    int num;
    cin >> num;
    int n[2];

    int ret, len = INT_MAX;
    for (int i = 2; i < num; i++)
    {
        if (Prime(i))
        {
            ret = num - i;
            if (Prime(ret))
            {
                //两个素数 ret 和  i;
                if (abs(ret - i) < len)
                {
                    len = abs(ret - i);
                    if (ret > i)
                    {
                        n[0] = i;
                        n[1] = ret;
                    }
                    else
                    {
                        n[0] = ret;
                        n[1] = i;
                    }
                }
            }


        }
    }
    cout << n[0] << endl;
    cout << n[1] << endl;



}