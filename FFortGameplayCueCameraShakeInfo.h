// ScriptStruct /Script/FortniteGame.FortGameplayCueCameraShakeInfo
// Size: 0x38
struct FFortGameplayCueCameraShakeInfo
{
	class UClass* Shake; // 0x0 (0x8)
	float Scale; // 0x8 (0x4)
	enum ECameraShakePlaySpace Playspace; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FRotator UserPlaySpaceRotation; // 0x10 (0x18)
	bool bAlwaysPlayOnTarget; // 0x28 (0x1)
	bool bCalculateUserPlaySpaceRotationFromLocation; // 0x29 (0x1)
	bool bCancelOnRemove; // 0x2a (0x1)
	unsigned char unreflected_2b[0x1]; // 0x2b (0x1) 
	struct FFortGameplayCueAOEInfo* Falloff; // 0x2c (0x8)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

