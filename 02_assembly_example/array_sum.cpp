#include <vector>
#include <memory>
#include <iostream>
#include <random>
#include <algorithm>


template <typename T>
class RandomNumberGenerator {
    public: 
        // Constructor
        RandomNumberGenerator() {
            rand_generator = std::make_unique<std::mt19937>(time(nullptr));
            return;
        }

        T generate() {
            auto gen = (*rand_generator)();
            return static_cast<T>(gen);
        }

    private:
        std::unique_ptr<std::mt19937> rand_generator;
};

template <typename T>
std::unique_ptr<std::vector<T>> GenerateRandomVector(
    std::shared_ptr<RandomNumberGenerator<T>> rand_generator,
    int len
) {
    auto ret_vector = std::make_unique<std::vector<T>>(len);
    std::generate(ret_vector->begin(), ret_vector->end(), [&]() { return rand_generator->generate(); });

    return ret_vector;
}


int main() {
    const int vector_length = 10;

    auto rand_generator = std::make_shared<RandomNumberGenerator<int>>();
    auto my_vector = GenerateRandomVector<int>(rand_generator, vector_length);

    long long sum = 0;
    for (auto it: *my_vector) {
        std::cout << it << std::endl;
        sum += it;
    }

    std::cout << "Sum of " << vector_length << " elements in the vector: " << sum << std::endl;

    return 0;
}

