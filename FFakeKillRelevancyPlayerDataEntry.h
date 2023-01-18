// ScriptStruct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataEntry
// Size: 0x38
struct FFakeKillRelevancyPlayerDataEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FFakeKillRelevancyVictim> Victims; // 0x10 (0x10)
	struct FGameplayTag Reason; // 0x20 (0x4)
	int PhaseNum; // 0x24 (0x4)
	int WaveNum; // 0x28 (0x4)
	float RelevancyDelay; // 0x2c (0x4)
	float RelevancyChangeServerWorldTime; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

