// Class /Script/FortniteGame.InputTypeConfiguration
// Size: 0x120
class UInputTypeConfiguration : public UDataAsset
{
	struct FName Name; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FText DisplayName; // 0x38 (0x18)
	struct TWeakObjectPtr<class UClass> InputReceiver; // 0x50 (0x28)
	struct TWeakObjectPtr<class UPlayerMappableInputConfig> Config; // 0x78 (0x28)
	unsigned char InputTypes; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FGameplayTagContainer DependentPlatformTraits; // 0xa8 (0x20)
	struct FGameplayTagContainer ExcludedPlatformTraits; // 0xc8 (0x20)
	bool bShouldActivateAutomatically; // 0xe8 (0x1)
	unsigned char unreflected_e9[0x7]; // 0xe9 (0x7) 
	struct TArray<struct FName> DefaultAutomaticActivationEvents; // 0xf0 (0x10)
	struct FGameplayTagContainer ActivationEvents; // 0x100 (0x20)
};

