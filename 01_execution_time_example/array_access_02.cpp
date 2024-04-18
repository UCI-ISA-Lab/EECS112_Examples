#include<memory>
#include<iostream>
#include<vector>

static const int row_size = 100000;
static const int col_size = 10000;

int main() {

    auto test_array = std::make_unique<std::vector<int>>(row_size * col_size);

    long sum = 0;

        // Loop order: j (column) -> i (row)
    for(int j = 0; j < col_size; j++) {
        for(int i = 0; i < row_size; i++) {
            auto idx = i * col_size + j;
            sum += test_array->at(idx); 
        }
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}