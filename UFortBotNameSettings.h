// Class /Script/FortniteAI.FortBotNameSettings
// Size: 0x50
class UFortBotNameSettings : public UObject
{
	struct TEnumAsByte<EBotNamingMode> NamingMode; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FText OverrideName; // 0x30 (0x18)
	bool bAddPlayerIDSuffix; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

