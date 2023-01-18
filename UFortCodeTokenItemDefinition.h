// Class /Script/FortniteGame.FortCodeTokenItemDefinition
// Size: 0x458
class UFortCodeTokenItemDefinition : public UFortAccountItemDefinition
{
	struct FString RedemptionCodeRule; // 0x420 (0x10)
	struct FString RedemptionCodeGroup; // 0x430 (0x10)
	struct TArray<enum ECodeTokenPlatform> AllowedPlatforms; // 0x440 (0x10)
	enum EItemProfileType ProfileType; // 0x450 (0x1)
	unsigned char padding_451[0x7]; // 0x451 (0x7)
};

