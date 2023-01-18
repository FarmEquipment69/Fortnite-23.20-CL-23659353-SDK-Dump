// Class /Script/Engine.BlendProfile
// Size: 0x50
class UBlendProfile : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	class USkeleton* OwningSkeleton; // 0x30 (0x8)
	struct TArray<struct FBlendProfileBoneEntry> ProfileEntries; // 0x38 (0x10)
	enum EBlendProfileMode Mode; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

