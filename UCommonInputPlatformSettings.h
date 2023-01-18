// Class /Script/CommonInput.CommonInputPlatformSettings
// Size: 0x70
class UCommonInputPlatformSettings : public UPlatformSettings
{
	enum ECommonInputType DefaultInputType; // 0x40 (0x1)
	bool bSupportsMouseAndKeyboard; // 0x41 (0x1)
	bool bSupportsTouch; // 0x42 (0x1)
	bool bSupportsGamepad; // 0x43 (0x1)
	struct FName DefaultGamepadName; // 0x44 (0x4)
	bool bCanChangeGamepadType; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct TArray<struct TWeakObjectPtr<class UClass>> ControllerData; // 0x50 (0x10)
	struct TArray<class UClass*> ControllerDataClasses; // 0x60 (0x10)
};

