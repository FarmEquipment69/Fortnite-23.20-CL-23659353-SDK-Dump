// ScriptStruct /Script/Engine.SoundGroup
// Size: 0x20
struct FSoundGroup
{
	struct TEnumAsByte<ESoundGroup> SoundGroup; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString DisplayName; // 0x8 (0x10)
	unsigned char bAlwaysDecompressOnLoad; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	float DecompressedDuration; // 0x1c (0x4)
};

