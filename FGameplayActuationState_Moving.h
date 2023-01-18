// ScriptStruct /Script/GameplayInteractionsModule.GameplayActuationState_Moving
// Size: 0x88
struct FGameplayActuationState_Moving : FGameplayActuationStateBase
{
	struct FVector3f HeadingDirection; // 0x28 (0xc)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FGameplayActuationPredictedLocation Prediction; // 0x38 (0x30)
	unsigned char padding_68[0x20]; // 0x68 (0x20)
};

