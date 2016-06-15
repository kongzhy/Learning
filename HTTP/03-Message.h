3.1、Message
用于HTTP协议交互的信息被称为HTTP报文。
报文首部:服务器端或客户端需处理的请求或响应的内容及属性
报文主体:应被发送的数据

3.2、Structure
请求行:包含用于请求的方法，请求URI和HTTP版本。
状态行:包含表明响应结果的状态码，原因短语和HTTP版本。
首部字段:包含表示请求和响应的各种条件和属性的各类首部。

3.3、Encode

3.4、Multi
MIME(Multipurpose Internet Mail Extensions)多用途因特网邮件拓展

3.5、Range
指定范围发送的请求叫做范围请求(Range Request)
针对范围请求，响应会返回状态码为206 Partial Content的响应报文。
如果服务端无法响应范围请求，则会返回状态码200 OK和完整的实体内容。

3.5、Content Negotiation
内容协商机制是指客户端和服务端就响应的资源内容进行交涉，然后提供给客户端最为合适的资源。