// Class /Script/MantisRuntime.FortAnimNotifyState_Mantis
// Size: 0x40
class UFortAnimNotifyState_Mantis : public UAnimNotifyState
{
	enum EFortMantisNotifyWindow MantisNotifyWindow; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FGameplayTag MantisNotifyTag; // 0x34 (0x4)
	enum EFortMantisNotifyRotationWarpRateRule RotationRateWarpRule; // 0x38 (0x1)
	unsigned char bWarpRotation; // 0x39 (0x1)
	unsigned char bWarpTranslation; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};

