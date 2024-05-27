#pragma once
#include "ReactPackageProvider.g.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::ReactNativeAwesomeModule::implementation
{
    struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider>
    {
        ReactPackageProvider() = default;

        void CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept;
    };
} // namespace winrt::ReactNativeAwesomeModule::implementation

namespace winrt::ReactNativeAwesomeModule::factory_implementation
{

struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider, implementation::ReactPackageProvider> {};

} // namespace winrt::ReactNativeAwesomeModule::factory_implementation
