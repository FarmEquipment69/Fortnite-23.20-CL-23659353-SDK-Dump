// ScriptStruct /Script/GameplayAbilities.MovieSceneGameplayCueKey
// Size: 0x88
struct FMovieSceneGameplayCueKey
{
	struct FGameplayCueTag Cue; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector Location; // 0x8 (0x18)
	struct FVector Normal; // 0x20 (0x18)
	struct FName AttachSocketName; // 0x38 (0x4)
	float NormalizedMagnitude; // 0x3c (0x4)
	struct FMovieSceneObjectBindingID Instigator; // 0x40 (0x18)
	struct FMovieSceneObjectBindingID EffectCauser; // 0x58 (0x18)
	class UPhysicalMaterial* PhysicalMaterial; // 0x70 (0x8)
	int GameplayEffectLevel; // 0x78 (0x4)
	int AbilityLevel; // 0x7c (0x4)
	bool bAttachToBinding; // 0x80 (0x1)
	unsigned char padding_81[0x7]; // 0x81 (0x7)
};

