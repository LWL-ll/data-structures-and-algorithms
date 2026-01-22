**例：**
已知一个带有表头节点的单链表，节点结构为

<table>
  <tr><td>data</td><td>link</td></tr>
</table>

假设该链表只给出了头指针list,在不改变链表的前提下，请设计一个***尽可能高效***的算法，查找链表中例数第K个位置上的结点(K为正整数)。若查找成功，算法输出该节点的data域的值， 并返回1；否则，只返回0。

```mermaid
graph LR
    A[Head] --> B[1]--> C[2]--> D[3]--> E[4]--> F[5]--> G[6]-->H[NULL]
```
[代码](https://github.com/LWL-ll/data-structures-and-algorithms/blob/master/exercises/%E6%9F%A5%E6%89%BE%E5%80%92%E6%95%B0%E7%AC%ACk%E4%B8%AA%E5%80%BC.c)
