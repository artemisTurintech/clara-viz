/*
 * Copyright (c) 2020, NVIDIA CORPORATION. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <memory>

namespace clara::viz
{

class CudaFunctionLauncher;

/**
 * Get the CUDA function launcher for the convert kernel from ABGR to YCbCr 4:4:4 (CCIR 601)
 **/
std::unique_ptr<CudaFunctionLauncher> GetConvertABGRToYCbCr444CCIR601Launcher();

/**
 * Get the CUDA function launcher for the convert kernel from ABGR to YCbCr 4:2:0 (CCIR 601)
 **/
std::unique_ptr<CudaFunctionLauncher> GetConvertABGRToYCbCr420CCIR601Launcher();

} // namespace clara::viz