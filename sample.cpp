#include "pch.h"
#include "sample.h"
#include <wil/winrt.h>
#include <wil/com.h>
#include <winrt/windows.storage.provider.h>

using namespace SharePickerUI;

void AppInstallManagerCreator::CreateAppInstallManagerObj()
{
    auto a = 5;
    // ComPtr<IAppInstallManager> appInstallManager;
    wil::com_ptr<winrt::Windows::Storage::Provider::IStorageProviderItemPropertySource> appInstallManager;
    // auto aim = wil::ActivateInstance<IAppInstallManager>(RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManager);
    // Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager^ m_appInstallManager;
    a;
    // HRESULT hr = Windows::Foundation::ActivateInstance(HStringReference(RuntimeClass_Windows_ApplicationModel_Store_Preview_InstallControl_AppInstallManager).Get(), );
    // hr;
    // appInstallManager;
}

