# EasySocket

将Windows和Linux的socket库的使用封装成跨平台的类库，轻松使用socket。

# 组成

![esaysocket](http://ww1.sinaimg.cn/large/005HFdfGgy1frvzbsdhuuj30hv0jrdgg.jpg)

# 使用basicsocket

使用基础套接字库库，非常易用！

使用：

```
#include"EasySocket.h"
```

调用：

```c++
using namespace SocketLib;
ListeningSocket lsock;
DataSocket dsock;
lsock.Listen(5000);//在5000端口开始jiant
dsock = lsock.Accept();//等待流入连接
```

只有5行代码就完成了Socket API的几十行代码的工作，

封装了socket为人诟病的历史接口等，

代码执行后dsock将包含一个套接字（如果有客户机与我们相连了的话），我们可以向客户机发送数据，并接受客户机的数据：

```c++
char buffer[128] = "Hello clent!";
dsock.Send(buffer,strlen(buffer));
dsock.Receive(buffer,128);
```
## 文件

main.cpp演示了EasySocket的用法。