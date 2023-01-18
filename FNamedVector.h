// ScriptStruct /Script/Engine.NamedVector
// Size: 0x20
struct FNamedVector
{
	struct FVector Value; // 0x0 (0x18)
	struct FName Name; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

