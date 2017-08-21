if...else...语句的执行特点是二选一，在多个if...else...语句中，如果某个条件成立，则后续就不再继续判断了
JavaScript把null、undefined、0、NaN和空字符串''视为false，其他值一概视为true


Map是一组键值对的数据结构，具有极快的查找速度
由于一个key只能对应一个value，所以，多次对一个key放入value，后面的值会把前面的值冲掉

// 添加新的key-value
set()

// 判断是否存在key-value
has()

// 获取value
get()

// 删除key-value
delete()


Set自动过滤重复元素
要创建一个Set，需要提供一个Array作为输入，或者直接创建一个空Set

// 添加元素
add()

// 删除元素
delete()

for
for...in   Object、Array
for...of   Iterable(Object、Array、Set、Map)
forEach()
