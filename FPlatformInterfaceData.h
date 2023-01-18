// ScriptStruct /Script/Engine.PlatformInterfaceData
// Size: 0x28
struct FPlatformInterfaceData
{
	struct FName DataName; // 0x0 (0x4)
	struct TEnumAsByte<EPlatformInterfaceDataType> Type; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	int IntValue; // 0x8 (0x4)
	float FloatValue; // 0xc (0x4)
	struct FString StringValue; // 0x10 (0x10)
	class UObject* ObjectValue; // 0x20 (0x8)
};

