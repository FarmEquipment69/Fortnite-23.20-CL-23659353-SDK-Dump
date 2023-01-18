// ScriptStruct /Script/Engine.AnimLinkableElement
// Size: 0x30
struct FAnimLinkableElement
{
	class UAnimMontage* LinkedMontage; // 0x8 (0x8)
	int SlotIndex; // 0x10 (0x4)
	int SegmentIndex; // 0x14 (0x4)
	struct TEnumAsByte<EAnimLinkMethod> LinkMethod; // 0x18 (0x1)
	struct TEnumAsByte<EAnimLinkMethod> CachedLinkMethod; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	float SegmentBeginTime; // 0x1c (0x4)
	float SegmentLength; // 0x20 (0x4)
	float LinkValue; // 0x24 (0x4)
	class UAnimSequenceBase* LinkedSequence; // 0x28 (0x8)
};

