// ScriptStruct /Script/FortniteGame.DeathEvent
// Size: 0x148
struct FDeathEvent : FBaseSample
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FUniqueNetIdRepl Instigator; // 0x30 (0x30)
	struct FUniqueNetIdRepl Victim; // 0x60 (0x30)
	bool bIsDBNO; // 0x90 (0x1)
	bool bWasDBNOOnDeath; // 0x91 (0x1)
	enum EDeathCause DeathCause; // 0x92 (0x1)
	unsigned char unreflected_93[0x1]; // 0x93 (0x1) 
	float DeathDistance; // 0x94 (0x4)
	struct FPawnSample PawnSampleBeforeDeath; // 0x98 (0x50)
	struct FGameplayTagContainer DeathTags; // 0xe8 (0x20)
	struct FGameplayTagContainer VictimTags; // 0x108 (0x20)
	struct FGameplayTagContainer KillerTags; // 0x128 (0x20)
};

