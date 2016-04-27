// Array
// 直接给Array的length赋一个新的值会导致Array大小的变化
// Array可以通过索引把对应的元素修改为新的值，因此，对Array的索引进行赋值会直接修改这个Array，如果索引超过了范围，同样会引起Array大小的变化

// 获取数组长度
length

// 搜索一个指定的元素的位置
indexOf()

// 截取Array的部分元素，然后返回一个新的Array,起止参数包括开始索引，不包括结束索引
// 如果不给slice()传递任何参数，它就会从头到尾截取所有元素。利用这一点，我们可以很容易地复制一个Array
slice()

// 向Array的末尾添加若干元素, 返回Array新的长度
push()

// Array的最后一个元素删除掉, 返回被删除的元素
pop()

// 往Array的头部添加若干元素, 返回Array新的长度
unshift()

// 把Array的第一个元素删掉, 返回被删除的元素
shift()

// 对当前Array进行排序
sort()

// 反转Array的元素
reverse()

// 修改Array, 从指定的索引开始删除若干元素,然后再从该位置添加若干元素, 返回删除的元素
splice()

// 把当前的Array和另一个Array连接起来，并返回一个新的Array
concat()

// 把当前Array的每个元素都用指定的字符串连接起来，然后返回连接后的字符串
join()

