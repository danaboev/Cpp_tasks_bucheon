namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
}

namespace StringOperations {
    std::string concatenate(const std::string& a, const std::string& b) {
        return a + b;
    }

    int length(const std::string& str) {
        return str.length();
    }
}