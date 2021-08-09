# 1.C++编程简介
# 2.头文件与类的声明

## 2-1. 头文件的声明  
```cpp
#ifndef __COMPLEX__
#define __COMPLEX__

...


#endif

```
## 2-2. Class的声明

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

## 3-1. 内联函数
* 拥有宏的特性，没有宏的缺点（宏是C的概念)
* 快

## 3-2. 宏（C）
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
## 3-3.访问级别(access level)
* public
* private

## 3-4. 构造函数（初始化函数）

```cpp
complex (double r=0, double i =0) : re(r), im(i)
{ }
```
* 没有返回类型
* 使用初始列，初始化  
> why?  
> Class创建时第一阶段为初始化阶段，不使用等于放弃这一阶段，降低了效率
```cpp
: re(r),im(i) 
```
* 构造函数可以重载，但参数不能冲突
> 重载函数编译器编译后的实际名称可能是：  
?real@Conplex@@QBENXZ   
?real@Conplex@@QBENABN@AB

# 4.参数传递与返回值

## 4-1. 常量成员函数(const member functions)
* ### 会改变变量的函数
* ### 不会改变变量的函数
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

## 4-2. 参数传递
* ### pass by value
* ### pass by reference
    * 底层上是传递指针，速度很快
    * 可以传常量引用
    * 指针占用8byte，int占用4byte
* ### 不可以pass by referce的情况
    * 函数内生成的对象（临时对象）不能用引用的形式传递
## 4-3. friend(友元)
* ### 直接拿数据
    * 速度快，比调用函数效率高
    * 打破了封装，有风险
* ### 对于一个相同的Class，各个object之间互为友元

> 注意：  
> 1.Class的数据要放进private里面  
> 2.传递尽量用引用 const看情况  
> 3.返回值尽量用引用  
> 4.尽可能考虑const设计  
> 5.构造函数要利用初始化列

# 5. 操作符重载与临时对象

## 5-1. 操作符重载(operator overloading)
```cpp
{
    complex c1(2,1);
    complex c2(5);

    c2 += c1;
}
```
```cpp
inline complex& __doapl(complex* ths, const complex& r)  //do assignment plus
{
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}
inline complex& complex::operator += (const complex& r)
{
    return __doapl (this, r);
}
```
* ### this
    * 是一个指针，指向被调用的对象
    * 在成员函数中不显式声明

* ###  += 本质上是一个函数

* ###  return by reference 语法分析
    * 传递者无需知道接受者是以何种引用形式接收（接收value，接收引用都可以）

```cpp
c3 += c2 += c1;
```
> 连串使用的时候必须是左值，不能是value右值  


## 5-2 非成员操作符重载(operator overloading)
为了应对client的三种可能用法，需定义三种函数。例子并不全面
```cpp
{
    complex c1(2,1);
    complex c2;

    c2 = c1 + c2;
    c2 = c1 + 5;
    c2 = 7 + c1;
}
```
```cpp
inline complex operator + (const complex& x, const complex& y)  //这里是全局函数
{
    return complex (real(x) + real(y), imag(x) + imag(y)); //real imag 也是单独定义的全局函数
}

inline complex operator + (const complex& x, double y)
{
    return complex (real(x) + y, imag(x));
}

inline complex operator + (double x, const complex& y)
{
    return complex (x + real(y), imag(y));
}
```
> Q:为什么这里不返回引用？  
> A:因为返回的是临时变量，所以必须返回对象。

*  ### 临时对象 typename()
* ### << output operator
    * 返回值注意要是osteam& 类型 （因为cout << c(1) << c(2)）
```cpp
ostream& operator << (ostream& os, const complex& x)
{
    return os << '(' << real(x) << ',' << imag(x) << ')';
```

# 7.三大函数：拷贝构造，拷贝复制，析构.

```cpp
class String
{
    public:
        String(const char* cstr =0);          //构造 函数
        String(const String& str);            //拷贝构造 函数
        String& operator=(const String& str); //拷贝赋值 函数
        ~String();                            //析构 函数

        char* get_c_str() const{ return m_data; };
    private:
        char* m_data;
}
```