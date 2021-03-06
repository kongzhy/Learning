在JavaScript中，Date对象用来表示日期和时间
// 获取系统当前时间 Wed Jun 24 2015 19:49:22 GMT+0800 (CST)
var now = new Date();
// 2015 : 年份
now.getFullYear();
// 5 : 月份，注意月份范围是0~11，5表示六月
now.getMonth();
// 24 : 表示24号
now.getDate();
// 3 : 表示星期三
now.getDay();
// 19 : 24小时制
now.getHours();
// 49 : 分钟
now.getMinutes();
// 22 : 秒
now.getSeconds();
// 875 : 毫秒数
now.getMilliseconds();
// 1435146562875 : 以number形式表示的时间戳
now.getTime();

// JavaScript的月份范围用整数表示是0~11，0表示一月，1表示二月……
// 注意，当前时间是浏览器从本机操作系统获取的时间，所以不一定准确，因为用户可以把当前时间设定为任何值。

// 时间戳是一个自增的整数，它表示从1970年1月1日零时整的GMT时区开始的那一刻，到现在的毫秒数。假设浏览器所在电脑的时间是准确的，那么世界上无论哪个时区的电脑，它们此刻产生的时间戳数字都是一样的，所以，时间戳可以精确地表示一个时刻，并且与时区无关。
