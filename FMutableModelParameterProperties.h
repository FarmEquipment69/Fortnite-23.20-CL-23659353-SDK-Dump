// ScriptStruct /Script/CustomizableObject.MutableModelParameterProperties
// Size: 0x28
struct FMutableModelParameterProperties
{
	enum EMutableParameterType Type; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	int ImageDescriptionCount; // 0x14 (0x4)
	struct TArray<struct FMutableModelParameterValue> PossibleValues; // 0x18 (0x10)
};

