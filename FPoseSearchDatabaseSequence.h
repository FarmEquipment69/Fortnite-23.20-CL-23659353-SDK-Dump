// ScriptStruct /Script/PoseSearch.PoseSearchDatabaseSequence
// Size: 0x30
struct FPoseSearchDatabaseSequence : FPoseSearchDatabaseAnimationAssetBase
{
	class UAnimSequence* Sequence; // 0x8 (0x8)
	bool bEnabled; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FFloatInterval* SamplingRange; // 0x14 (0x8)
	enum EPoseSearchMirrorOption MirrorOption; // 0x1c (0x4)
	class UAnimSequence* LeadInSequence; // 0x20 (0x8)
	class UAnimSequence* FollowUpSequence; // 0x28 (0x8)
};

