// ScriptStruct /Script/GameplayAbilities.ServerAbilityRPCBatch
// Size: 0x50
struct FServerAbilityRPCBatch
{
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FPredictionKey PredictionKey; // 0x8 (0x18)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x20 (0x28)
	bool InputPressed; // 0x48 (0x1)
	bool Ended; // 0x49 (0x1)
	bool Started; // 0x4a (0x1)
	unsigned char padding_4b[0x5]; // 0x4b (0x5)
};

