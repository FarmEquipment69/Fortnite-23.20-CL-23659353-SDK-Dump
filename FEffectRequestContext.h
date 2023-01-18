// ScriptStruct /Script/FortniteGame.EffectRequestContext
// Size: 0x90
struct FEffectRequestContext
{
	class AActor* EffectReceivingActor; // 0x0 (0x8)
	class AController* EffectReceivingController; // 0x8 (0x8)
	class AController* InstigatingController; // 0x10 (0x8)
	class AActor* InstigatingActor; // 0x18 (0x8)
	struct FGameplayTagContainer SourceTags; // 0x20 (0x20)
	struct FGameplayTagContainer TargetTags; // 0x40 (0x20)
	struct FGameplayTagContainer ContextTags; // 0x60 (0x20)
	unsigned char padding_80[0x10]; // 0x80 (0x10)
};

