// ScriptStruct /Script/ContextualAnimation.ContextualAnimTrack
// Size: 0xe0
struct FContextualAnimTrack
{
	class UAnimSequenceBase* Animation; // 0x0 (0x8)
	float AnimMaxStartTime; // 0x8 (0x4)
	bool bRequireFlyingMode; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FContextualAnimAlignmentTrackContainer AlignmentData; // 0x10 (0x28)
	struct FContextualAnimAlignmentTrackContainer IKTargetData; // 0x38 (0x28)
	struct TArray<class UContextualAnimSelectionCriterion*> SelectionCriteria; // 0x60 (0x10)
	struct FTransform MeshToScene; // 0x70 (0x60)
	struct FName Role; // 0xd0 (0x4)
	int SectionIdx; // 0xd4 (0x4)
	int AnimSetIdx; // 0xd8 (0x4)
	int AnimTrackIdx; // 0xdc (0x4)
};

