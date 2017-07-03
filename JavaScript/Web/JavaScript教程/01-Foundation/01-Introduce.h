JavaScript是一种运行在浏览器中的解释型的编程语言
JavaScript代码可以直接嵌在网页的任何地方，不过通常我们都把JavaScript代码放到<head>中.另一种方法是把JavaScript代码放到一个单独的.js文件，然后在HTML中通过<script src="..."></script>引入这个文件
JavaScript并不强制要求在每个语句的结尾加;
JavaScript不建议一行写多个语句
JavaScript严格区分大小写，如果弄错了大小写，程序将报错或者运行不正常
JavaScript不区分整数和浮点数，统一用Number表示
NaN表示Not a Number，当无法计算结果时用NaN表示
Infinity表示无限大，当数值超过了JavaScript的Number所能表示的最大值时，就表示为Infinity
十六进制用0x前缀和0-9，a-f表示
使用==比较，会自动转换数据类型再比较，很多时候，会得到非常诡异的结果；使用===比较，不会自动转换数据类型，如果数据类型不一致，返回false，如果一致，再比较。所以不要使用==比较，始终坚持使用===比较
判断NaN的方法 isNaN()
null表示一个空的值，而undefined表示值未定义
JavaScript中数组用[]表示，元素之间用,分隔
不用var申明的变量会被视为全局变量，为了避免这一缺陷，所有的JavaScript代码都应该使用strict模式。启用strict模式的方法是在JavaScript代码的第一行写上：'use strict';
