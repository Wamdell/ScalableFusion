#ifndef FILE_TEST_H
#define FILE_TEST_H

#include <cuda.h>
#include <cublas.h>
#include <opencv2/opencv.hpp>


//TODO: small code example to copy (opengl) bindless texture to cv::cuda::GpuMat

void copy(cudaTextureObject_t texture, cv::cuda::GpuMat &to);

#endif
