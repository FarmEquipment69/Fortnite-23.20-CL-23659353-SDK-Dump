// ScriptStruct /Script/ModularGameplay.ActorInitStateChangedParams
// Size: 0x20
struct FActorInitStateChangedParams
{
	class AActor* OwningActor; // 0x0 (0x8)
	struct FName FeatureName; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UObject* Implementer; // 0x10 (0x8)
	struct FGameplayTag FeatureState; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

