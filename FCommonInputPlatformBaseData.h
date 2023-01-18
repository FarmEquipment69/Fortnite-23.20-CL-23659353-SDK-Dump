// ScriptStruct /Script/CommonInput.CommonInputPlatformBaseData
// Size: 0x38
struct FCommonInputPlatformBaseData
{
	enum ECommonInputType DefaultInputType; // 0x8 (0x1)
	bool bSupportsMouseAndKeyboard; // 0x9 (0x1)
	bool bSupportsGamepad; // 0xa (0x1)
	unsigned char unreflected_b[0x1]; // 0xb (0x1) 
	struct FName DefaultGamepadName; // 0xc (0x4)
	bool bCanChangeGamepadType; // 0x10 (0x1)
	bool bSupportsTouch; // 0x11 (0x1)
	unsigned char unreflected_12[0x6]; // 0x12 (0x6) 
	struct TArray<struct TWeakObjectPtr<class UClass>> ControllerData; // 0x18 (0x10)
	struct TArray<class UClass*> ControllerDataClasses; // 0x28 (0x10)
};

