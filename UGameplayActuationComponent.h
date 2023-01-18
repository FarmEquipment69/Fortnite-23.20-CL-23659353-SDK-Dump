// Class /Script/GameplayInteractionsModule.GameplayActuationComponent
// Size: 0xd8
class UGameplayActuationComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FInstancedStruct ActuationState; // 0xa8 (0x10)
	unsigned char unreflected_b8[0x8]; // 0xb8 (0x8) 
	struct TArray<struct FInstancedStruct> Transitions; // 0xc0 (0x10)
	bool bEnableTransitions; // 0xd0 (0x1)
	unsigned char padding_d1[0x7]; // 0xd1 (0x7)
};

