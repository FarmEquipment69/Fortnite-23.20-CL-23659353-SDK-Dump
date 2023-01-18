// Class /Script/FortniteGame.FortSkydivingAnimInstance
// Size: 0x840
class UFortSkydivingAnimInstance : public UFortBaseLayerAnimInstance
{
	struct FFortAnimInput_Skydiving Skydiving; // 0x440 (0x78)
	float FreeFallAimPitch; // 0x4b8 (0x4)
	unsigned char unreflected_4bc[0x4]; // 0x4bc (0x4) 
	struct FFortAnimInput_PlayerGliderAnimAsset CurrentGliderAnimSet; // 0x4c0 (0x268)
	class UFortPlayerSkydiveAnimSet* DefaultSkydiveAnimSet; // 0x728 (0x8)
	struct FFortAnimInput_PlayerSkydiveAnimAsset CurrentSkydiveAnimSet; // 0x730 (0xd8)
	enum EFortPlayerAnimBodyType AnimBodyType; // 0x808 (0x1)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x809 (0x1)
	unsigned char unreflected_80a[0x2]; // 0x80a (0x2) 
	float AimPitch; // 0x80c (0x4)
	unsigned char bIsAccelerating2D; // 0x810 (0x1)
	unsigned char unreflected_811[0x3]; // 0x811 (0x3) 
	float ParaGliderTurnAlpha; // 0x814 (0x4)
	float ParaGliderAddAlpha; // 0x818 (0x4)
	float GliderBaseBSYAxis; // 0x81c (0x4)
	float GliderBaseBSPlayRate; // 0x820 (0x4)
	float GliderIntoBSPlayRate; // 0x824 (0x4)
	unsigned char bParaGlideSurferHipsAreLow; // 0x828 (0x1)
	unsigned char padding_829[0x17]; // 0x829 (0x17)
};

