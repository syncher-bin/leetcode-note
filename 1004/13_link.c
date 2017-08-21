/**
 * 学习笔记:链表
 *         定义:n个结点离散分配;彼此通过指针相连;每个结点只有一个前驱结点,一个后续结点;首结点没有前驱结点
 *                  首结点:第一个有效结点
 *                  尾结点:最后一个有效结点
 *                  头结点:首结点前的一个结点,不存放有效数据,紧为了方便对链表的操作,头结点的数据类型和后面的是一样的
 *                  头指针: 指向头结点的指针变量,存放头结点的地址
 *                  尾指针:指向尾结点的指针变量
 *         分类:
 *             单链表
 *             双链表:没个结点有两个指针域,分别指向首尾
 *
 *              循环链表:首尾相连
 *              非循环链表
 *         算法:
 *         
 *         优缺:
 *
 *         确定一个列表需要几个参数:
 *            头指针
 *
 *      结点的生成:一个结点==结点内容+下一个指针
 */

#include <stdio.h>

typedef struct Node
{
  int age;
  struct Node * pNext;
}*PNODE,NODE;

int main(int argc, char const *argv[])
{
  
  return 0;
}















