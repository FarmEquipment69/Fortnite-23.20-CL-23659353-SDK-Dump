// ScriptStruct /Script/FortniteGame.FortOrientationWarpingSettings
// Size: 0x38
struct FFortOrientationWarpingSettings
{
	struct TEnumAsByte<EAxis> YawRotationAxis; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float BodyOrientationAlpha; // 0x4 (0x4)
	struct TArray<struct FFortOrientationWarpingSpineBoneSettings> SpineBones; // 0x8 (0x10)
	struct FBoneReference IKFootRootBone; // 0x18 (0xc)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct TArray<struct FBoneReference> IKFootBones; // 0x28 (0x10)
};

