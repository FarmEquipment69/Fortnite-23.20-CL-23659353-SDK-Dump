// Class /Script/FortniteUI.FortPerkWidget_NUI
// Size: 0x360
class UFortPerkWidget_NUI : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FFortUIPerk Perk; // 0x298 (0x98)
	unsigned char unreflected_330[0x8]; // 0x330 (0x8) 
	class UFortTooltipContext* CachedTooltipContext; // 0x338 (0x8)
	unsigned char unreflected_340[0x12]; // 0x340 (0x12) 
	bool bShouldUseSummaryTooltip; // 0x352 (0x1)
	unsigned char unreflected_353[0x5]; // 0x353 (0x5) 
	class UFortTooltipLoadingWrapper* CachedTooltipLoadingWrapper; // 0x358 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPerkWidget_NUI.SetTooltipContext (Underlying native function: SetTooltipContext 0xa91ae2c)
	void SetTooltipContext(class UFortTooltipContext*& InTooltipContext); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.RequestTooltipDescription (Underlying native function: RequestTooltipDescription 0xa919b78)
	void RequestTooltipDescription(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.RequestCombinedTooltipDescription (Underlying native function: RequestCombinedTooltipDescription 0xa919b04)
	void RequestCombinedTooltipDescription(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.OnTooltipDescriptionReady (Has no native function)
	void OnTooltipDescriptionReady(struct TArray<struct FText>& DescriptionList); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.OnPerkUpdated (Has no native function)
	void OnPerkUpdated(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.OnCombinedTooltipDescriptionReady (Has no native function)
	void OnCombinedTooltipDescriptionReady(struct FText& Description); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.IsTierPerk (Underlying native function: IsTierPerk 0x903f524)
	bool IsTierPerk(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.IsPerkUnlocked (Underlying native function: IsPerkUnlocked 0xa918ec0)
	bool IsPerkUnlocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.IsPerkHighlighted (Underlying native function: IsPerkHighlighted 0xa918e9c)
	bool IsPerkHighlighted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.IsPerkEmpty (Underlying native function: IsPerkEmpty 0xa918e50)
	bool IsPerkEmpty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.HasAbility (Underlying native function: HasAbility 0xa91893c)
	bool HasAbility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.HandleAbilityKitTooltipLoaded (Underlying native function: HandleAbilityKitTooltipLoaded 0xa91810c)
	void HandleAbilityKitTooltipLoaded(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetTooltipTitle (Underlying native function: GetTooltipTitle 0xa917af0)
	struct FText GetTooltipTitle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetTooltipContext (Underlying native function: GetTooltipContext 0xa917acc)
	class UFortTooltipContext* GetTooltipContext(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetSupportBonusType (Underlying native function: GetSupportBonusType 0xa917a24)
	enum EFortSupportBonusType GetSupportBonusType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetRequiredLevel (Underlying native function: GetRequiredLevel 0xa91757c)
	int GetRequiredLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetPerkTier (Underlying native function: GetPerkTier 0x7238fc4)
	enum EFortItemTier GetPerkTier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetIcon (Underlying native function: GetIcon 0xa916e20)
	bool GetIcon(struct FSlateBrush& Brush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

