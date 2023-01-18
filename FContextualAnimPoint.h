// ScriptStruct /Script/ContextualAnimation.ContextualAnimPoint
// Size: 0x80
struct FContextualAnimPoint
{
	struct FName Role; // 0x0 (0x4)
	unsigned char unreflected_4[0xc]; // 0x4 (0xc) 
	struct FTransform Transform; // 0x10 (0x60)
	float Speed; // 0x70 (0x4)
	int SectionIdx; // 0x74 (0x4)
	int AnimSetIdx; // 0x78 (0x4)
	int AnimTrackIdx; // 0x7c (0x4)
};

