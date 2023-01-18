// ScriptStruct /Script/Engine.AnimNotifyEvent
// Size: 0xb0
struct FAnimNotifyEvent : FAnimLinkableElement
{
	float DisplayTime; // 0x30 (0x4)
	float TriggerTimeOffset; // 0x34 (0x4)
	float EndTriggerTimeOffset; // 0x38 (0x4)
	float TriggerWeightThreshold; // 0x3c (0x4)
	struct FName NotifyName; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	class UAnimNotify* Notify; // 0x48 (0x8)
	class UAnimNotifyState* NotifyStateClass; // 0x50 (0x8)
	float Duration; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FAnimLinkableElement EndLink; // 0x60 (0x30)
	bool bConvertedFromBranchingPoint; // 0x90 (0x1)
	struct TEnumAsByte<EMontageNotifyTickType> MontageTickType; // 0x91 (0x1)
	unsigned char unreflected_92[0x2]; // 0x92 (0x2) 
	float NotifyTriggerChance; // 0x94 (0x4)
	struct TEnumAsByte<ENotifyFilterType> NotifyFilterType; // 0x98 (0x1)
	unsigned char unreflected_99[0x3]; // 0x99 (0x3) 
	int NotifyFilterLOD; // 0x9c (0x4)
	bool bTriggerOnDedicatedServer; // 0xa0 (0x1)
	bool bTriggerOnFollower; // 0xa1 (0x1)
	unsigned char unreflected_a2[0x2]; // 0xa2 (0x2) 
	int TrackIndex; // 0xa4 (0x4)
	unsigned char padding_a8[0x8]; // 0xa8 (0x8)
};

