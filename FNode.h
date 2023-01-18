// ScriptStruct /Script/Engine.Node
// Size: 0x90
struct FNode
{
	struct FName Name; // 0x0 (0x4)
	struct FName ParentName; // 0x4 (0x4)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Transform; // 0x10 (0x60)
	struct FString DisplayName; // 0x70 (0x10)
	bool bAdvanced; // 0x80 (0x1)
	unsigned char padding_81[0xf]; // 0x81 (0xf)
};

