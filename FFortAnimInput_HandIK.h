// ScriptStruct /Script/FortniteGame.FortAnimInput_HandIK
// Size: 0x1c
struct FFortAnimInput_HandIK
{
	float IKAlphaOverrideInterpSpeed; // 0x0 (0x4)
	float IKSpaceSwitchOverrideInterpSpeed; // 0x4 (0x4)
	float HandIKRetargetingWeight; // 0x8 (0x4)
	float HandsInRootSpaceAlpha; // 0xc (0x4)
	float LeftHandIKAlpha; // 0x10 (0x4)
	float RightHandIKAlpha; // 0x14 (0x4)
	enum EFortHandIKOverrideType LeftHandIKOverrideType; // 0x18 (0x1)
	enum EFortHandIKOverrideType RightHandIKOverrideType; // 0x19 (0x1)
	unsigned char padding_1a[0x2]; // 0x1a (0x2)
};

