// JavaScript并不强制要求在每个语句的结尾加;
// NaN表示Not a Number，当无法计算结果时用NaN表示
// Infinity表示无限大，当数值超过了JavaScript的Number所能表示的最大值时，就表示为Infinity
// 使用==比较，会自动转换数据类型再比较，很多时候，会得到非常诡异的结果；使用===比较，不会自动转换数据类型，如果数据类型不一致，返回false，如果一致，再比较。所以不要使用==比较，始终坚持使用===比较。
// null表示一个空的值，而undefined表示值未定义

// 判断NaN的方法
isNaN()