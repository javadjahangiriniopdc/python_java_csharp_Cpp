using System;

namespace ConsoleApp1
{
    class Program
    {
        static bool perfectnumber(int n)
        {
            int k, sum;
            k = 1;
            sum = 0;
            while (k < n)
            {

                if (n % k == 0)
                    sum += k;

                k++;
            }

            if (sum == n)
                return true;

            return false;
        }


        static void Main(string[] args)
        {
            int k;
            int n;
            Console.WriteLine("C# enter a number:");
            n = int.Parse(Console.ReadLine());
            k = 1;
            var watch = new System.Diagnostics.Stopwatch();
            watch.Start();
            while (k<=n)
            {
                if(perfectnumber(k))
                    Console.WriteLine(k);
                k++;
            }

            watch.Stop();

            Console.WriteLine($"Execution Time: {watch.ElapsedMilliseconds} ms");
        }
    }
}

// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//





