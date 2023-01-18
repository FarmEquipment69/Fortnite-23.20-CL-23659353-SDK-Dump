// Class /Script/FortniteGame.FortCreativeAccoladesComponent
// Size: 0x1c8
class UFortCreativeAccoladesComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnAccoladeWouldHaveGrantedDelegate; // 0xa0 (0x10)
	struct FGuid Guid; // 0xb0 (0x10)
	struct FText Name; // 0xc0 (0x18)
	struct FText Description; // 0xd8 (0x18)
	struct TSet<int> ValidTeams; // 0xf0 (0x50)
	struct TSet<int> ValidClassSlots; // 0x140 (0x50)
	struct FGameplayTag XPAwardGameplayTag; // 0x190 (0x4)
	struct FGameplayTag SplashSizeGameplayTag; // 0x194 (0x4)
	struct TWeakObjectPtr<class UTexture2D> LargePreviewImage; // 0x198 (0x28)
	enum EFortSimulatedXPSize SimulatedXpSize; // 0x1c0 (0x1)
	unsigned char padding_1c1[0x7]; // 0x1c1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeAccoladesComponent.OnPlayModeChanged (Underlying native function: OnPlayModeChanged 0x70dc11c)
	void OnPlayModeChanged(class AFortMinigame*& Minigame, bool& bNewIsInPlayMode); // (Final | Native | Protected | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortCreativeAccoladesComponent.OnAccoladeWouldHaveGrantedSignature__DelegateSignature (Has no native function)
	void OnAccoladeWouldHaveGrantedSignatureDelegateSignature(class AFortPlayerController*& PlayerController); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortCreativeAccoladesComponent.GrantAccolade (Underlying native function: GrantAccolade 0x723ba10)
	bool GrantAccolade(class AFortPlayerController*& PlayerController); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeAccoladesComponent.CanGrantAccolade (Underlying native function: CanGrantAccolade 0x877e1f4)
	bool CanGrantAccolade(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

