// Class /Script/SpecialEventGameplayRuntime.FortCustomTickComponent
// Size: 0x1a0
class UFortCustomTickComponent : public UActorComponent
{
	enum EFortCustomTickComponentCondition Condition; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	struct FGameplayTag AuthorityQualitySettingsTag; // 0xa4 (0x4)
	struct FGameplayTag DefaultClientQualitySettingsTag; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x4]; // 0xac (0x4) 
	struct TMap<enum ECommonPlatformType, struct FGameplayTag> ClientPlatformQualitySettingsTagMap; // 0xb0 (0x50)
	struct TMap<struct FGameplayTag, struct FCustomTickComonentQualitySettings> QualitySettingsMap; // 0x100 (0x50)
	float WasRecentlyRenderedTolerance; // 0x150 (0x4)
	unsigned char unreflected_154[0x4]; // 0x154 (0x4) 
	struct FMulticastInlineDelegate OnCustomTick; // 0x158 (0x10)
	unsigned char padding_168[0x38]; // 0x168 (0x38)
};

