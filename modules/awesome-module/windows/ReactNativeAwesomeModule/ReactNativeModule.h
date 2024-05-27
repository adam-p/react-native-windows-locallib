#pragma once

#include "JSValue.h"
#include "NativeModules.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::ReactNativeAwesomeModule
{

REACT_MODULE(ReactNativeModule, L"AwesomeModule")
struct ReactNativeModule
{
    // See https://microsoft.github.io/react-native-windows/docs/native-modules for details on writing native modules

    REACT_INIT(Initialize)
    void Initialize(ReactContext const &reactContext) noexcept
    {
        m_reactContext = reactContext;
    }

    REACT_METHOD(multiply)
    void multiply(int a, int b, std::function<void(int)> &&callback) noexcept
    {
        callback(a * b);
    }

    private:
        ReactContext m_reactContext{nullptr};
};

} // namespace winrt::ReactNativeAwesomeModule
