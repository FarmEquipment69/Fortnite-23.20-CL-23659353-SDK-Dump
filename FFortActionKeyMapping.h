// ScriptStruct /Script/FortniteGame.FortActionKeyMapping
// Size: 0x78
struct FFortActionKeyMapping
{
	struct FName ActionName; // 0x0 (0x4)
	enum EFortInputActionGroup ActionGroup; // 0x4 (0x1)
	enum ESubGame SubGameUsedIn; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	struct FText LocalizedCategory; // 0x8 (0x18)
	struct FText LocalizedName; // 0x20 (0x18)
	struct FGameplayTag CategoryTag; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FKey KeyBind1; // 0x40 (0x18)
	struct FKey KeyBind2; // 0x58 (0x18)
	float InputScale; // 0x70 (0x4)
	bool bIsAxisMapping; // 0x74 (0x1)
	unsigned char padding_75[0x3]; // 0x75 (0x3)
};

