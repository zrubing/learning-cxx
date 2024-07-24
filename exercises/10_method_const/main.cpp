#include "../exercise.h"

struct Fibonacci {
    int numbers[11];
    // TODO: 修改方法签名和实现，使测试通过
    // 修改方法签名，添加 const 限定符使其可在常量表达式中使用
    constexpr int get(int i) const {
        if (i < 0 || i >= 11) {
            // 处理越界情况
            return -1;  // 或者可以抛出异常
        }
        return numbers[i];
    }
};

int main(int argc, char **argv) {
    Fibonacci constexpr FIB{{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55}};
    ASSERT(FIB.get(10) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(10) = " << FIB.get(10) << std::endl;
    return 0;
}
