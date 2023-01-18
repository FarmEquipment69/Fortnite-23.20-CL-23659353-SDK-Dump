// ScriptStruct /Script/EnhancedInput.BlueprintInputDebugKeyDelegateBinding
// Size: 0x30
struct FBlueprintInputDebugKeyDelegateBinding
{
	struct FInputChord InputChord; // 0x0 (0x20)
	struct TEnumAsByte<EInputEvent> InputKeyEvent; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	struct FName FunctionNameToBind; // 0x24 (0x4)
	bool bExecuteWhenPaused; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};

