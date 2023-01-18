// Class /Script/FortniteGame.FortHealthBarComponent
// Size: 0x2f0
class UFortHealthBarComponent : public USceneComponent
{
	class ABuildingActor* BuildingActorOwner; // 0x2a0 (0x8)
	struct FText DisplayText; // 0x2a8 (0x18)
	bool bIsHealthBarVisible; // 0x2c0 (0x1)
	unsigned char unreflected_2c1[0x3]; // 0x2c1 (0x3) 
	float MaxDistance; // 0x2c4 (0x4)
	class UCurveFloat* ScaleOverDistanceCurve; // 0x2c8 (0x8)
	bool bClampToScreen; // 0x2d0 (0x1)
	bool bShowClampToScreenArrow; // 0x2d1 (0x1)
	unsigned char unreflected_2d2[0x6]; // 0x2d2 (0x6) 
	class UCurveLinearColor* HealthBarColorCurve; // 0x2d8 (0x8)
	unsigned char padding_2e0[0x10]; // 0x2e0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortHealthBarComponent.SetHealthBarWidgetVisibility (Underlying native function: SetHealthBarWidgetVisibility 0x89473b8)
	void SetHealthBarWidgetVisibility(bool& bIsVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHealthBarComponent.SetHealthBarVisibility (Underlying native function: SetHealthBarVisibility 0x89472f4)
	void SetHealthBarVisibility(bool& bNewVisibleState); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHealthBarComponent.SetHealthBarDisplayText (Underlying native function: SetHealthBarDisplayText 0x8947258)
	void SetHealthBarDisplayText(struct FText& NewDisplayText); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHealthBarComponent.OnRep_IsVisible (Underlying native function: OnRep_IsVisible 0x8942f10)
	void OnRepIsVisible(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortHealthBarComponent.OnRep_DisplayText (Underlying native function: OnRep_DisplayText 0x8942efc)
	void OnRepDisplayText(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortHealthBarComponent.GetHealthBarDisplayText (Underlying native function: GetHealthBarDisplayText 0x8937498)
	struct FText GetHealthBarDisplayText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

