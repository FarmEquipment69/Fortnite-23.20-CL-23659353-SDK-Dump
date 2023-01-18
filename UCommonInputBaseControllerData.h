// Class /Script/CommonInput.CommonInputBaseControllerData
// Size: 0xf8
class UCommonInputBaseControllerData : public UObject
{
	enum ECommonInputType InputType; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FName GamepadName; // 0x2c (0x4)
	struct FText GamepadDisplayName; // 0x30 (0x18)
	struct FText GamepadCategory; // 0x48 (0x18)
	struct FText GamepadPlatformName; // 0x60 (0x18)
	struct TArray<struct FInputDeviceIdentifierPair> GamepadHardwareIdMapping; // 0x78 (0x10)
	struct TWeakObjectPtr<class UTexture2D> ControllerTexture; // 0x88 (0x28)
	struct TWeakObjectPtr<class UTexture2D> ControllerButtonMaskTexture; // 0xb0 (0x28)
	struct TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap; // 0xd8 (0x10)
	struct TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets; // 0xe8 (0x10)

	/* Functions */

	// Function /Script/CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads (Underlying native function: GetRegisteredGamepads 0x6a510d4)
	static struct TArray<struct FName> GetRegisteredGamepads(); // (Final | Native | Static | Public)
};

