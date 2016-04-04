// PA1 - Morse Data Code
// Test.cs
//
// Created by Yuancheng Zhang on 4/3/2016

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PA1_C_sharp
{
    class Test
    {
        private static LinkedList myList = new LinkedList();

        public void test1()
        {
            Console.WriteLine("Test 1: Insert data to a List");

            myList.AddLast('A', 12);
            myList.AddLast('B', 2111);
            myList.AddLast('C', 2121);
            myList.AddLast('D', 211);
            myList.AddLast('E', 1);
            myList.AddLast('F', 1121);
            myList.AddLast('G', 221);
            myList.AddLast('H', 1111);
            myList.AddLast('I', 11);
            myList.AddLast('J', 1222);
            myList.AddLast('K', 212);
            myList.AddLast('L', 1211);
            myList.AddLast('M', 22);
            myList.AddLast('N', 21);
            myList.AddLast('O', 222);
            myList.AddLast('P', 1221);
            myList.AddLast('Q', 2212);
            myList.AddLast('R', 121);
            myList.AddLast('S', 111);
            myList.AddLast('T', 2);
            myList.AddLast('U', 112);
            myList.AddLast('V', 1112);
            myList.AddLast('W', 122);
            myList.AddLast('X', 2112);
            myList.AddLast('Y', 2122);
            myList.AddLast('Z', 2211);

            myList.printAllNodes();
            Console.WriteLine();
        }

        public void test2()
        {
            Console.WriteLine("Test 2: Find and delete nodes of a List");

            myList.RemoveNode('F');
            myList.RemoveNode('R');
            myList.RemoveNode('B');
            myList.RemoveNode('Z');
            myList.RemoveNode('A');
            myList.RemoveNode('M');
            myList.RemoveNode('G');
            myList.RemoveNode('R');
            myList.RemoveNode('C');
            myList.RemoveNode('Q');
            myList.RemoveNode('Y');
            myList.RemoveNode('C');
            myList.RemoveNode('N');

            myList.printAllNodes();
            Console.WriteLine();
        }

        public void test3()
        {
            Console.WriteLine("Test 3: Sort the data");
            myList.SortList();
            myList.printAllNodes();
            Console.WriteLine();
        }
    }
}
