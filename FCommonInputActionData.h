// ScriptStruct /Script/CommonUILegacy.CommonInputActionData
// Size: 0x8c0
struct FCommonInputActionData : FCommonInputActionDataBase
{
	struct TMap<enum ECommonGamepadType, struct FCommonInputTypeInfo> GamepadInputTypeInfoOverrides; // 0x330 (0x50)
	struct FCommonInputTypeInfo GamepadInputTypeInfos[0x6]; // 0x380 (0xe0) (ARRAY) 
};

