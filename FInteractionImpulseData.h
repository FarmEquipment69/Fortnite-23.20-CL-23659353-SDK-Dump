// ScriptStruct /Script/FortniteGame.InteractionImpulseData
// Size: 0x60
struct FInteractionImpulseData
{
	struct FGameplayTag GameplayTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FScalableFloat ImpulseMagnitude; // 0x8 (0x28)
	unsigned char bUseDamageToManageImpulse; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FScalableFloat DamageImpulseScale; // 0x38 (0x28)
};

