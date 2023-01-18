// ScriptStruct /Script/AugmentedReality.ARImageUpdatePayload
// Size: 0xa0
struct FARImageUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FTransform WorldTransform; // 0x20 (0x60)
	class UARCandidateImage* DetectedImage; // 0x80 (0x8)
	struct FVector2D EstimatedSize; // 0x88 (0x10)
	unsigned char padding_98[0x8]; // 0x98 (0x8)
};

