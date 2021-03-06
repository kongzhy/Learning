6.1、HTTP Header
Request Header
Response Header

6.2、Header Fields
General Header Fields
Request Header Fields
Response Header Fields
Entity Header Fields

6.3、General Header Fields
Cache-Control:控制缓存的行为
Connection:逐跳首部、连接的管理
Date:创建报文的日期时间
Pragma:报文指令
Trailer:报文末端的首部一览
Transfer-Encoding:指定报文主体的传输编码方式
Upgrade:升级为其他协议
Via:代理服务器的相关信息
Warning:错误通知

6.4、Request Header Fields
Accept:用户代理可处理的媒体类型
Accept-Charset:优先的字符集
Accept-Encoding:优先的内容编码
Accept-Language:优先的语言
Authorization:Web认证信息
Expect:期待服务器的特定行为
From:用户的电子邮箱地址
Host:请求资源所在服务器
If-Match:比较实体标记
If-Modified-Since:比较资源的更新时间
If-None-Match:比较实体标记
If-Range:资源未更新时发送实体Byte的范围请求
If-Unmodified-Since:比较资源的更新时间
Max-Forwards:最大传输逐跳数
Proxy-Authorization:代理服务器要求客户端的认证信息
Range:实体的字节范围请求
Referer:对请求中URI的原始获取方
TE:传输编码的优先级
User-Agent:客户端程序的信息

6.5、Response Header Fields
Accept-Ranges:是否接受范围字节请求
Age:推算资源创建经过时间
ETag:资源的匹配信息
Location:令客户端重定向至指定URI
Proxy-Authenticate:代理服务器对客户端的认证信息
Retry-After:对再次发起请求的时机要求
Server:HTTP服务器的安装信息
Vary:代理服务器缓存的管理信息
WWW-Authenticate:服务器对客户端的认证信息

6.6、Entity Header Fields
Allow:资源可支持的HTTP方法
Content-Encoding:实体主体适用的编码方法
Content-Language:实体主体的自然语言
Content-Length:实体主体的大小
Content-Location:替代对应资源的URI
Content-MD5:实体主体的报文摘要
Content-Range:实体主体的位置范围
Content-Type:实体主体的媒体类型
Expires:实体主体过期的日期时间
Last-Modified:资源的最后修改日期时间
