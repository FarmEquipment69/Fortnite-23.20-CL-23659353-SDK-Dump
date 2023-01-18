// ScriptStruct /Script/CommonUI.CommonInputActionDataBase
// Size: 0x330
struct FCommonInputActionDataBase : FTableRowBase
{
	struct FText DisplayName; // 0x8 (0x18)
	struct FText HoldDisplayName; // 0x20 (0x18)
	int NavBarPriority; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FCommonInputTypeInfo KeyboardInputTypeInfo; // 0x40 (0xe0)
	struct FCommonInputTypeInfo DefaultGamepadInputTypeInfo; // 0x120 (0xe0)
	struct TMap<struct FName, struct FCommonInputTypeInfo> GamepadInputOverrides; // 0x200 (0x50)
	struct FCommonInputTypeInfo TouchInputTypeInfo; // 0x250 (0xe0)
};

