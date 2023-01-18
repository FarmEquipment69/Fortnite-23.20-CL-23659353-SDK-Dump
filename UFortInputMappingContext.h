// Class /Script/FortniteGame.FortInputMappingContext
// Size: 0xb0
class UFortInputMappingContext : public UInputMappingContext
{
	struct FName Name; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FText DisplayName; // 0x60 (0x18)
	struct FGameplayTag CategoryTag; // 0x78 (0x4)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct TArray<struct FName> DefaultAutomaticActivationEvents; // 0x80 (0x10)
	struct FGameplayTagContainer ActivationEvents; // 0x90 (0x20)
};

