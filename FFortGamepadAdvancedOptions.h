// ScriptStruct /Script/FortniteGame.FortGamepadAdvancedOptions
// Size: 0x3c
struct FFortGamepadAdvancedOptions
{
	uint32_t LookHorizontalSpeed; // 0x0 (0x4)
	uint32_t LookVerticalSpeed; // 0x4 (0x4)
	uint32_t LookHorizontalSpeedAds; // 0x8 (0x4)
	uint32_t LookVerticalSpeedAds; // 0xc (0x4)
	uint32_t LookHorizontalBoostSpeed; // 0x10 (0x4)
	uint32_t LookVerticalBoostSpeed; // 0x14 (0x4)
	float LookBoostAccelerationTime; // 0x18 (0x4)
	uint32_t LookHorizontalBoostSpeedAds; // 0x1c (0x4)
	uint32_t LookVerticalBoostSpeedAds; // 0x20 (0x4)
	float LookBoostAccelerationTimeAds; // 0x24 (0x4)
	bool bInstantBoostWhenBuilding; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float LookEaseTime; // 0x2c (0x4)
	enum EFortGamepadLookInputCurve LookInputCurve; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	uint32_t AimAssistStrength; // 0x34 (0x4)
	bool bUseLegacyControls; // 0x38 (0x1)
	unsigned char padding_39[0x3]; // 0x39 (0x3)
};

