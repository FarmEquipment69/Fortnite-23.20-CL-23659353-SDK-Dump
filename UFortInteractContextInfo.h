// Class /Script/FortniteGame.FortInteractContextInfo
// Size: 0x198
class UFortInteractContextInfo : public UObject
{
	struct FText ContextText; // 0x28 (0x18)
	struct FLinearColor ContextTextColor; // 0x40 (0x10)
	struct FText ContextSubText; // 0x50 (0x18)
	struct FLinearColor ContextSubTextColor; // 0x68 (0x10)
	struct TWeakObjectPtr<class UTexture2D> ContextSubTextImage; // 0x78 (0x28)
	class UClass* ContextOverrideWidget; // 0xa0 (0x8)
	class UClass* SecondContextOverrideWidget; // 0xa8 (0x8)
	struct FText SecondContextText; // 0xb0 (0x18)
	struct FLinearColor SecondContextTextColor; // 0xc8 (0x10)
	struct FText SecondContextSubText; // 0xd8 (0x18)
	struct FLinearColor SecondContextSubTextColor; // 0xf0 (0x10)
	struct FText ErrorText; // 0x100 (0x18)
	struct TWeakObjectPtr<class AActor> ReceivingActor; // 0x118 (0x8)
	struct TWeakObjectPtr<class UPrimitiveComponent> InteractComponent; // 0x120 (0x8)
	struct FGameplayTagContainer DynamicInteractionOptions; // 0x128 (0x20)
	class UObject* OptionalObjectData; // 0x148 (0x8)
	class USoundBase* LongInteractSound; // 0x150 (0x8)
	class UUserWidget* OptionalHUDDisplayWidget; // 0x158 (0x8)
	struct FVector InteractPoint; // 0x160 (0x18)
	struct TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted; // 0x178 (0x1)
	unsigned char unreflected_179[0x3]; // 0x179 (0x3) 
	float RequiredDuration; // 0x17c (0x4)
	float SecondRequiredDuration; // 0x180 (0x4)
	bool bShowCountDown; // 0x184 (0x1)
	bool bShowFirstInteraction; // 0x185 (0x1)
	bool bShowSecondInteraction; // 0x186 (0x1)
	bool bIsSecondInteractionActive; // 0x187 (0x1)
	bool bDisplayTextOnly; // 0x188 (0x1)
	bool bDisplaySubInteractIcon; // 0x189 (0x1)
	bool bSuppressInteractionWidget; // 0x18a (0x1)
	bool bHasCustomInteractionWidget; // 0x18b (0x1)
	bool bSuppressSimpleInteractionWidgetForTouch; // 0x18c (0x1)
	unsigned char unreflected_18d[0x1]; // 0x18d (0x1) 
	enum EFortInteractContextInfoType InteractContextInfoType; // 0x18e (0x1)
	unsigned char padding_18f[0x9]; // 0x18f (0x9)

	/* Functions */

	// Function /Script/FortniteGame.FortInteractContextInfo.HasValidSecondContextOverride (Underlying native function: HasValidSecondContextOverride 0x893c710)
	bool HasValidSecondContextOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractContextInfo.HasValidContextOverride (Underlying native function: HasValidContextOverride 0x893c6a8)
	bool HasValidContextOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

