// Class /Script/FortniteGame.CustomizationItemInterface
// Size: 0x28
class ICustomizationItemInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.CustomizationItemInterface.SetCustomizationCosmeticItemAndVariants (Underlying native function: SetCustomizationCosmeticItemAndVariants 0x8093b38)
	void SetCustomizationCosmeticItemAndVariants(class UAthenaCosmeticItemDefinition*& NewCosmeticItemDefinition, struct TArray<struct FMcpVariantChannelInfo>& InOverrideVariants); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomizationItemInterface.ResetCustomizationCosmeticItemAndVariants (Underlying native function: ResetCustomizationCosmeticItemAndVariants 0x8093a58)
	void ResetCustomizationCosmeticItemAndVariants(class UAthenaCosmeticItemDefinition*& NewCosmeticItemDefinition, struct TArray<struct FMcpVariantChannelInfo>& InOverrideVariants); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomizationItemInterface.GetCustomizationItemRotatableSceneComponent (Underlying native function: GetCustomizationItemRotatableSceneComponent 0x8093894)
	class USceneComponent* GetCustomizationItemRotatableSceneComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomizationItemInterface.GetCustomizationCosmeticItem (Underlying native function: GetCustomizationCosmeticItem 0x809386c)
	class UAthenaCosmeticItemDefinition* GetCustomizationCosmeticItem(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

