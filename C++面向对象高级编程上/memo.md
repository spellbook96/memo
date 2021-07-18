# 1.C++编程简介
# 2.头文件与类的声明

* ## 头文件的声明  
```cpp
#ifndef __COMPLEX__
#define __COMPLEX__

...


#endif

```
* ## Class的声明

```cpp
class complex
{
public:
    complex (double r = 0, double i =0) : re (r), im (r)
    { }
    complex &operator += (const complex&);
    double real() const { return re; }
    double imag() const { return im; }
private:
    double re, im;

    friend complex &__doapl (complex*, const complex&);
};
```

# 3.构造函数

## 内联函数
* 拥有宏的特性，没有宏的缺点（宏是C的概念)
* 快

## 宏（C）
* #define 定义
* 没有参数的宏
* 太复杂的话编译器就无法编程inline
* 在Class本体定义
```cpp
#define 宏名称 替换文本
```
* 有参数的宏
```cpp
#define 宏名称( [形参列表] ) 替换文本
#define 宏名称( [形参列表 ,] ... ) 替换文本
```
## 访问级别(access level)
* public
* private

## 构造函数（初始化函数）

```cpp
complex (double r=0, double i =0) : re(r), im(i)
{ }
```
* 没有返回类型
* 使用初始列，初始化  
> why? Class创建时第一阶段为初始化阶段，不使用等于放弃这一阶段，降低了效率
```cpp
: re(r),im(i) 
```
* 构造函数可以重载，但参数不能冲突
> 重载函数编译器编译后的实际名称可能是：  
?real@Conplex@@QBENXZ   
?real@Conplex@@QBENABN@AB

# 4.参数传递与返回值

## 常量成员函数(const member functions)
* 会改变变量的函数
* 不会改变变量的函数
```cpp
double real() const {return re;}    // 在函数后面加const
```
> 如果不加const的话，创建const对象的时候会无法调用
```cpp
{
    const complex c1(2,1);
    cout << c1.real;    //调用时会报错
}
```