// Class /Script/EnhancedInput.EnhancedPlayerInput
// Size: 0x740
class UEnhancedPlayerInput : public UPlayerInput
{
	struct TMap<class UInputMappingContext*, int> AppliedInputContexts; // 0x498 (0x50)
	struct TArray<struct FEnhancedActionKeyMapping> EnhancedActionMappings; // 0x4e8 (0x10)
	unsigned char unreflected_4f8[0x50]; // 0x4f8 (0x50) 
	struct TMap<class UInputAction*, struct FInputActionInstance> ActionInstanceData; // 0x548 (0x50)
	unsigned char unreflected_598[0xa0]; // 0x598 (0xa0) 
	struct TMap<struct FKey, struct FVector> KeysPressedThisTick; // 0x638 (0x50)
	struct TMap<class UInputAction*, struct FInjectedInputArray> InputsInjectedThisTick; // 0x688 (0x50)
	struct TSet<class UInputAction*> LastInjectedActions; // 0x6d8 (0x50)
	unsigned char padding_728[0x18]; // 0x728 (0x18)
};

