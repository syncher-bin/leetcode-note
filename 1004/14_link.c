/**
 * 链表算法:
 * 遍历
 * 查找
 * 清空
 * 删除
 * 销毁
 * 求长度
 * 排序
 * 插入
 * ...
 */

//插入一个结点:上一个元素的指针域p 指向插入的结点的地址,插入结点的指针域q指向下一个元素
// 中间变量t = p->pNext; p->pNext = q; q->pNext = t; 或者...
//删除一个结点:p->pNext = p->pNext->pNext;  但这样写没有释放内存
// t = p->pNext;p->pNext = p->pNext->pNext; free(t);//释放内存

/**
 * 学习数据结构的目的和要求:
 *       成为一个牛逼的软件程序员
 */
















