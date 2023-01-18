// ScriptStruct /Script/Engine.BlendParameter
// Size: 0x20
struct FBlendParameter
{
	struct FString DisplayName; // 0x0 (0x10)
	float min; // 0x10 (0x4)
	float max; // 0x14 (0x4)
	int GridNum; // 0x18 (0x4)
	bool bSnapToGrid; // 0x1c (0x1)
	bool bWrapInput; // 0x1d (0x1)
	unsigned char padding_1e[0x2]; // 0x1e (0x2)
};

