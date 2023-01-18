// Class /Script/MotionWarping.RootMotionModifier_Warp
// Size: 0x240
class URootMotionModifier_Warp : public URootMotionModifier
{
	struct FName WarpTargetName; // 0xe0 (0x4)
	enum EWarpPointAnimProvider WarpPointAnimProvider; // 0xe4 (0x1)
	unsigned char unreflected_e5[0xb]; // 0xe5 (0xb) 
	struct FTransform WarpPointAnimTransform; // 0xf0 (0x60)
	struct FName WarpPointAnimBoneName; // 0x150 (0x4)
	bool bWarpTranslation; // 0x154 (0x1)
	bool bIgnoreZAxis; // 0x155 (0x1)
	enum EAlphaBlendOption AddTranslationEasingFunc; // 0x156 (0x1)
	unsigned char unreflected_157[0x1]; // 0x157 (0x1) 
	class UCurveFloat* AddTranslationEasingCurve; // 0x158 (0x8)
	bool bWarpRotation; // 0x160 (0x1)
	enum EMotionWarpRotationType RotationType; // 0x161 (0x1)
	unsigned char unreflected_162[0x2]; // 0x162 (0x2) 
	float WarpRotationTimeMultiplier; // 0x164 (0x4)
	unsigned char unreflected_168[0x8]; // 0x168 (0x8) 
	struct FTransform CachedTargetTransform; // 0x170 (0x60)
	unsigned char padding_1d0[0x70]; // 0x1d0 (0x70)
};

