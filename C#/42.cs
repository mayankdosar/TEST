using System;
namespace DecisionMaking
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;
            int i = 1;
            while(i>0)
            {
                n = Convert.ToInt32(Console.ReadLine());
                if (n == 42)
                {
                    i = 0;
                }
                else
                {
                     Console.WriteLine(n);
                }
            }
        }
    }
}
