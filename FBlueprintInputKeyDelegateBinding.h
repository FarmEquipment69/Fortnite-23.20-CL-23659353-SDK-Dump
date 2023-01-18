// ScriptStruct /Script/Engine.BlueprintInputKeyDelegateBinding
// Size: 0x30
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding
{
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FInputChord InputChord; // 0x8 (0x20)
	struct TEnumAsByte<EInputEvent> InputKeyEvent; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FName FunctionNameToBind; // 0x2c (0x4)
};

