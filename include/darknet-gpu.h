#ifndef DARKNET_GPU_API
#define DARKNET_GPU_API

#ifdef GPU
    #include "cuda_runtime.h"
    #include "curand.h"
    #include "cublas_v2.h"

    #ifdef CUDNN
    #include "cudnn.h"
    #endif
#endif

#endif
