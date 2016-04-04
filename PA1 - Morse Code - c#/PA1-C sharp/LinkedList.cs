// PA1 - Morse Data Code
// LinkedList.cs
//
// Created by Yuancheng Zhang on 4/3/2016

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PA1_C_sharp
{
    class LinkedList
    {
        private Node head;

        public void printAllNodes()
        {
            int count = 1;
            Node current = head;
            while (current != null)
            {
                //Console.WriteLine("#{0:d2}: {1}, {2}", count, current.letter, current.morse);
                Console.Write("{0} ", current.letter);
                current = current.next;
                count++;
            }
            Console.WriteLine();
        }

        public void AddFirst(char letter, int morse)
        {
            if (head == null)
            {
                head = new Node();
                head.letter = letter;
                head.morse = morse;
                head.next = null;
                head.prev = null;
            }
            else
            {
                Node toAdd = new Node();

                toAdd.letter = letter;
                toAdd.morse = morse;

                head.prev = toAdd;
                toAdd.next = head;
                toAdd.prev = null;

                head = toAdd;
            }
        }

        public void AddLast(char letter, int morse)
        {
            if (head == null)
            {
                head = new Node();
                head.letter = letter;
                head.morse = morse;
                head.next = null;
                head.prev = null;
            }
            else
            {
                Node toAdd = new Node();
                toAdd.letter = letter;
                toAdd.morse = morse;

                Node current = head;
                while (current.next != null)
                {
                    current = current.next;
                }
                current.next = toAdd;
                toAdd.next = null;
                toAdd.prev = current;
            }
        }

        public void RemoveNode(char letter)
        {
            if (head != null)
            {
                Node current = head;
                while (current != null)
                {
                    if (current.letter == letter)
                    {
                        if (current == head && current.next == null)
                        {
                            // only one node
                            current = null;
                            head = null;
                        }
                        else if (current == head)
                        {
                            // the first node
                            head = current.next;
                            current.next.prev = null;
                            current = null;
                        }
                        else if (current.next == null)
                        {
                            // the last node
                            current.prev.next = null;
                            current = null;
                        } 
                        else
                        {
                            // a middle node
                            current.prev.next = current.next;
                            current.next.prev = current.prev;
                            current = null;
                        }
                        break;
                    }
                    current = current.next;
                }
            }
        }

        public void SortList()
        {
            // at least two nodes there
            if (head != null && head.next != null)
            {
                // For the first node
                Node minMorse = head;
                Node current = minMorse.next;
                Node newHead = null;
                Node newTail = null;

                // find the min morse node
                while (current != null)
                {
                    if (current.morse < minMorse.morse)
                    {
                        minMorse = current;
                    }
                    current = current.next;
                }

                // relink the old list
                if (minMorse == head)
                {
                    // the first one
                    head = minMorse.next;
                    minMorse.next.prev = null;
                }
                else if (minMorse.next == null)
                {
                    // the last one
                    minMorse.prev.next = null;
                }
                else
                {
                    // in the middle
                    minMorse.next.prev = minMorse.prev;
                    minMorse.prev.next = minMorse.next;
                }
                minMorse.next = null;
                minMorse.prev = null;
                newHead = minMorse;
                newTail = minMorse;

                // For the rest nodes
                minMorse = head;
                while (minMorse != null && head != null)
                {
                    minMorse = head;
                    current = minMorse;
                    while (current != null)
                    {
                        if (current.morse < minMorse.morse)
                        {
                            minMorse = current;
                        }
                        current = current.next;
                    }
                    
                    // relink the old list
                    if (minMorse == head && minMorse.next == null)
                    {
                        // only one
                        head = null;
                    }
                    else if (minMorse == head)
                    {
                        // the first one
                        head = minMorse.next;
                        minMorse.next.prev = null;
                    }
                    else if (minMorse.next == null)
                    {
                        // the last one
                        minMorse.prev.next = null;
                    }
                    else
                    {
                        // in the middle
                        minMorse.next.prev = minMorse.prev;
                        minMorse.prev.next = minMorse.next;
                    }
                    minMorse.next = null;
                    minMorse.prev = newTail;
                    newTail.next = minMorse;
                    newTail = minMorse;

                    current = minMorse.next;
                }
                
                head = newHead;
            }
        }
    }
}
