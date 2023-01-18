// ScriptStruct /Script/ContextualAnimation.ContextualAnimQueryResult
// Size: 0xe0
struct FContextualAnimQueryResult
{
	struct TWeakObjectPtr<class UAnimMontage> Animation; // 0x0 (0x8)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform EntryTransform; // 0x10 (0x60)
	struct FTransform SyncTransform; // 0x70 (0x60)
	float AnimStartTime; // 0xd0 (0x4)
	int AnimSetIdx; // 0xd4 (0x4)
	unsigned char padding_d8[0x8]; // 0xd8 (0x8)
};

