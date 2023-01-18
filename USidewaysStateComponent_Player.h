// Class /Script/SidewaysCodeRuntime.SidewaysStateComponent_Player
// Size: 0x118
class USidewaysStateComponent_Player : public USidewaysStateComponent
{
	struct TWeakObjectPtr<class UMaterialParameterCollection> SidewaysMaterialParameterCollection; // 0xc8 (0x28)
	struct FName SidewaysBubbleLocationParameterNamesForLocalPlayers[0x2]; // 0xf0 (0x4) (ARRAY) 
	struct FName SidewaysBubbleRadiusParameterNamesForLocalPlayers[0x2]; // 0xf8 (0x4) (ARRAY) 
	float ExtraCorruptionRadius; // 0x100 (0x4)
	float MinRadiusToHaveAnyCorruption; // 0x104 (0x4)
	float MaxRadiusForScalingExtraCorruptionRadius; // 0x108 (0x4)
	float UpdateFrequency; // 0x10c (0x4)
	unsigned char padding_110[0x8]; // 0x110 (0x8)
};

