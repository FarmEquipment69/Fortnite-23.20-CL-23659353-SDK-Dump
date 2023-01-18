// Class /Script/CommonInput.CommonInputSettings
// Size: 0x118
class UCommonInputSettings : public UDeveloperSettings
{
	struct TWeakObjectPtr<class UClass> InputData; // 0x30 (0x28)
	struct FPerPlatformSettings PlatformInput; // 0x58 (0x10)
	struct TMap<struct FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData; // 0x68 (0x50)
	bool bEnableInputMethodThrashingProtection; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x3]; // 0xb9 (0x3) 
	int InputMethodThrashingLimit; // 0xbc (0x4)
	double InputMethodThrashingWindowInSeconds; // 0xc0 (0x8)
	double InputMethodThrashingCooldownInSeconds; // 0xc8 (0x8)
	bool bAllowOutOfFocusDeviceInput; // 0xd0 (0x1)
	bool bEnableDefaultInputConfig; // 0xd1 (0x1)
	unsigned char unreflected_d2[0x6]; // 0xd2 (0x6) 
	struct TWeakObjectPtr<class UCommonInputActionDomainTable> ActionDomainTable; // 0xd8 (0x28)
	unsigned char unreflected_100[0x8]; // 0x100 (0x8) 
	class UClass* InputDataClass; // 0x108 (0x8)
	class UCommonInputActionDomainTable* ActionDomainTablePtr; // 0x110 (0x8)
};

