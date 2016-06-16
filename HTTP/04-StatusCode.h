4.1、StatusCode
客户端向服务端发送请求时，描述返回的请求结果。

1XX Infomational (信息性状态码)     接受的请求正在处理
2XX Success      (成功状态码)       请求正常处理完毕
3XX Redirection  (重定向状态码)     需要进行附加操作以完成请求
4XX Client Error (客户端错误状态码)  服务器无法处理请求
5XX Server Error (服务器错误状态码)  服务器处理请求出错

4.2、2XX
200 OK
204 No Content
206 Partial Content

4.3、3XX
301 Moved Permanently
302 Found
303 See Other
304 Not Modified
307 Temporary Redirect
