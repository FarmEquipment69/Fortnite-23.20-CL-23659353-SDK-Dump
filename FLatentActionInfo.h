// ScriptStruct /Script/Engine.LatentActionInfo
// Size: 0x18
struct FLatentActionInfo
{
	int Linkage; // 0x0 (0x4)
	int UUID; // 0x4 (0x4)
	struct FName ExecutionFunction; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UObject* CallbackTarget; // 0x10 (0x8)
};

