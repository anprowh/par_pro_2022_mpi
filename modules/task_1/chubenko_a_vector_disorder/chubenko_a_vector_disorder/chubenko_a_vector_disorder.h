#ifndef MODULES_CHUBENKO_A_VECTOR_DISORDER
#define MODULES_CHUBENKO_A_VECTOR_DISORDER

#include <vector>
#include <string>

std::vector<int> getRandomVector(int  sz);
int getParallelNDisorder(std::vector<int> global_vec,
    int count_size_vector);
int getSequentialNDisorder(std::vector<int> vec);

#endif  // MODULES_CHUBENKO_A_VECTOR_DISORDER