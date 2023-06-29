# Cpp-RandomNumberGenerator
C++随机数程序
#include <iostream>: 包含输入输出流的标准库头文件。
#include <random>: 包含随机数生成器的标准库头文件。
int main() { ... }: 主函数的开始和结束。
int minRange, maxRange, count;: 声明整型变量 minRange、maxRange 和 count，用于存储用户输入的最小范围、最大范围和随机数的数量。
std::cout << "请输入随机数的最小范围: ";: 输出提示信息，要求用户输入随机数的最小范围。
std::cin >> minRange;: 从标准输入流获取用户输入的最小范围，并将其存储在变量 minRange 中。
std::cout << "请输入随机数的最大范围: ";: 输出提示信息，要求用户输入随机数的最大范围。
std::cin >> maxRange;: 从标准输入流获取用户输入的最大范围，并将其存储在变量 maxRange 中。
std::cout << "请输入要生成的随机数的数量: ";: 输出提示信息，要求用户输入要生成的随机数的数量。
std::cin >> count;: 从标准输入流获取用户输入的随机数数量，并将其存储在变量 count 中。
std::random_device rd;: 创建一个随机设备对象，用于获取真随机数种子。
std::mt19937 generator(rd());: 创建一个名为 generator 的 Mersenne Twister 19937 生成器对象，并使用随机设备对象作为种子。
std::uniform_int_distribution<int> distribution(minRange, maxRange);: 创建一个均匀分布的整数分布对象，范围为 minRange 到 maxRange。
std::cout << "生成的随机数为: ";: 输出提示信息，表示即将打印生成的随机数。
for (int i = 0; i < count; ++i) { ... }: 循环 count 次，用于生成指定数量的随机数。
int randomNumber = distribution(generator);: 使用分布对象和生成器生成一个随机数，并将其存储在变量 randomNumber 中。
std::cout << randomNumber << " ";: 打印当前生成的随机数。
std::cout << std::endl;: 在生成随机数的循环结束后，输出一个换行符，将光标移动到下一行。
return 0;: 返回程序执行的结果，表示程序成功执行并终止。
