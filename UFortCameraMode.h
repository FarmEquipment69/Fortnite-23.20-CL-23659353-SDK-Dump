// Class /Script/FortniteGame.FortCameraMode
// Size: 0x58
class UFortCameraMode : public UObject
{
	class AFortPlayerCameraBase* PlayerCamera; // 0x28 (0x8)
	struct FBlendStateData* BlendStateData; // 0x30 (0x8)
	float TransitionTime; // 0x38 (0x4)
	float TransitionOutTime; // 0x3c (0x4)
	bool bOverrideTransitionOutTime; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	struct FViewTargetTransitionParams TransitionParams; // 0x44 (0x10)
	unsigned char bResetInterpolation; // 0x54 (0x1)
	unsigned char bIsUsingConstantFOV; // 0x54 (0x1)
	unsigned char bShouldAllowBlendingWhenActive; // 0x54 (0x1)
	unsigned char bShouldAllowBlendingWhenInactive; // 0x54 (0x1)
	unsigned char bShouldPassViewTargetCheckOnTransition; // 0x54 (0x1)
	unsigned char padding_55[0x3]; // 0x55 (0x3)
};

