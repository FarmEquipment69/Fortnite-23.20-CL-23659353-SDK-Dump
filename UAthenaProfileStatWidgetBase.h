// Class /Script/FortniteUI.AthenaProfileStatWidgetBase
// Size: 0x2a0
class UAthenaProfileStatWidgetBase : public UCommonUserWidget
{
	struct FGameplayTag Stat; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	class UAthenaProfileStatBox* ProfileStatBox; // 0x298 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaProfileStatWidgetBase.SetStatView (Underlying native function: SetStatView 0xa5bdca4)
	void SetStatView(class UAthenaBaseStatView*& InStatView, bool& RespectParentStatView); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaProfileStatWidgetBase.SetAsStat (Underlying native function: SetAsStat 0xa5bced0)
	void SetAsStat(struct FGameplayTag& InStat); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaProfileStatWidgetBase.OnStatChanged (Has no native function)
	void OnStatChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaProfileStatWidgetBase.HandleStatViewChanged (Underlying native function: HandleStatViewChanged 0xa5ba508)
	void HandleStatViewChanged(class UAthenaBaseStatView*& StatView); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaProfileStatWidgetBase.CreateWeaponGroupData (Underlying native function: CreateWeaponGroupData 0xa5b7dd8)
	struct TArray<struct FStatGroupData> CreateWeaponGroupData(int& MaxToReturn, bool& bIncludeOtherCategory, bool& bPercentages); // (Final | Native | Public | BlueprintCallable)
};

