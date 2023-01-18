// ScriptStruct /Script/PoseSearch.PoseSearchDatabaseBlendSpace
// Size: 0x28
struct FPoseSearchDatabaseBlendSpace : FPoseSearchDatabaseAnimationAssetBase
{
	class UBlendSpace* BlendSpace; // 0x8 (0x8)
	bool bEnabled; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	enum EPoseSearchMirrorOption MirrorOption; // 0x14 (0x4)
	bool bUseGridForSampling; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	int NumberOfHorizontalSamples; // 0x1c (0x4)
	int NumberOfVerticalSamples; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

