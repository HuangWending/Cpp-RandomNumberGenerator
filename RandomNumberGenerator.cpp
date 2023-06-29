#include <iostream>
#include <random>

int main() {
    int minRange, maxRange, count;
    
    // 获取用户输入的范围和数量
    std::cout << "请输入随机数的最小范围: ";
    std::cin >> minRange;
    
    std::cout << "请输入随机数的最大范围: ";
    std::cin >> maxRange;
    
    std::cout << "请输入要生成的随机数的数量: ";
    std::cin >> count;
    
    // 创建随机数生成器
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(minRange, maxRange);
    
    // 生成随机数并打印
    std::cout << "生成的随机数为: ";
    for (int i = 0; i < count; ++i) {
        int randomNumber = distribution(generator);
        std::cout << randomNumber << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
