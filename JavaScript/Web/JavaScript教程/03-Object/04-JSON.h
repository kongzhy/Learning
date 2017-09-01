// JSON是JavaScript Object Notation的缩写，它是一种数据交换格式。

// JSON还定死了字符集必须是UTF-8，表示多语言就没有问题了。

// 为了统一解析，JSON的字符串规定必须用双引号""，Object的键也必须用双引号""。

// 序列化，JSON.stringify()，要输出得好看一些，可以加上参数，按缩进输出：JSON.stringify(xiaoming, null, '  ');第二个参数用于控制如何筛选对象的键值，如果我们只想输出指定的属性，可以传入Array

// 反序列化，JSON.parse(),JSON.parse()还可以接收一个函数，用来转换解析出的属性