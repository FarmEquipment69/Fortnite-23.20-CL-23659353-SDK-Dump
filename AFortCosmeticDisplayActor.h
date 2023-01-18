// Class /Script/FortniteGame.FortCosmeticDisplayActor
// Size: 0x2d8
class AFortCosmeticDisplayActor : public AActor
{
	unsigned char unreflected_288[0x20]; // 0x288 (0x20) 
	class UAthenaCosmeticItemDefinition* CustomizationCosmeticDefinition; // 0x2a8 (0x8)
	class UChildActorComponent* PreviewActorComponent; // 0x2b0 (0x8)
	class USkeletalMeshComponent* SkeletalMeshComponent; // 0x2b8 (0x8)
	struct TArray<struct FMcpVariantChannelInfo> OverrideVariants; // 0x2c0 (0x10)
	bool bApplyLightingOverrideToChildren; // 0x2d0 (0x1)
	struct FLightingChannels LightingChannelsOverride; // 0x2d1 (0x1)
	unsigned char padding_2d2[0x6]; // 0x2d2 (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortCosmeticDisplayActor.OnVariantChanged (Has no native function)
	void OnVariantChanged(struct FGameplayTag& VariantChannel, struct FGameplayTag& OldVariantTag, struct FGameplayTag& NewVariantTag); // (0x00000002 | BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCosmeticDisplayActor.OnPartChanged (Has no native function)
	void OnPartChanged(class UCustomCharacterPart*& OldPart, class UCustomCharacterPart*& NewPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)
};

