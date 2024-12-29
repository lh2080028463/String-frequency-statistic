# String-frequency-statistic

### 开发环境

- Windows 11

- Qt Creator 6.7
- MinGW  64-bit
#### 必要资源库
- QChart

### 代码规范

- 命名方式：驼峰法（英文前缀）

  - **全局变量、类、结构体**首字母大写
  - 符号常量全采用大写字母，用下划线分割单词
  - 不同代码块之间添加空行
  - 不得使用**goto**

- 代码格式

  ```c++
  #include<iostream>
  
  using namespace std
  
  #define MAX_DATALEN 100
  const int MAX_DATALEN = 100;
  
  
  
  /*结构体，类等命名开头大写*/
  class Myclass{
  	public:
      	void myFunction(int input);
  	protected:
  	private:
  	
      signal:
      slot:
  }
  
  void Myclass::myFunction(int input)
  {
      
  }
  
  //此处说明函数作用
  void function()
  {
  	
      return;
  }
  
  int main()
  {
      int x = new int;   //x为。。。
      delete x;		   //
      
      // boolen变量用true和false
      bool example = true;
      
      // p为指针时不得使用数字
      if(p == nullptr)
      {
          /**/
    }
      
      return 0;
  }
  ```


### 功能

- 文件操作
  - 增加
  - 删除
  - 修改

- 统计图（饼图、柱形图）
- 词云
- 字符串查询
- 
