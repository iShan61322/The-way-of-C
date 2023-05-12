
int Add(int x, int y)//若前端加上static，则不能运行
{
	return x + y;
}
//static修饰函数的实质：将函数的外部链接属性变成了内部链接属性！