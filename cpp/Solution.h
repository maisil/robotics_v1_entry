#ifndef SOLUTION_H_
#define SOLUTION_H_

#include <cstdint>

#include "utils/EyePatterns.h"
#include "utils/FunctionTracer.h"
#include "utils/Image.h"

class Solution {
public:
  void compute([[maybe_unused]] std::vector<PackedImage> &images) {
    FunctionTracer<std::chrono::milliseconds> tracer("compute", "ms");
    // TODO: fill solution
  }
  void *set_mem(void *src, char val, size_t n) {
    size_t t = 0;
    char *temp = (char *)src;
    while (t < n) {

      *temp++ = val;
      t++;
    }

    return src;
  }

  void compute(std::vector<StrideImage> &images) {
    FunctionTracer<std::chrono::milliseconds> tracer("compute", "ms");
    // TODO: fill solution

    for (int h = 0; h < images.size(); ++h) {
      const int width = images[h].resolution.width;
      const int heigth = images[h].resolution.height;

      for (int y = 2; y < heigth - 2; ++y) {
        for (int x = 2; x < width - 2; ++x) {

          for (int j = -2; j < 3; ++j) {

            for (int i = -2; i < 3; ++i) {
              if (images[h].redPixels[(y + j) * width + x + i] >= 200) {
                if (EYE_PATTERNS[0][j + 2][i + 2] != ' ') {

                  images[h].redPixels[(y + j) * width + x + i] -= 150;
                }
              }
            }
          }
        }
      }
    }
  }
};

#endif /* SOLUTION_H_ */
