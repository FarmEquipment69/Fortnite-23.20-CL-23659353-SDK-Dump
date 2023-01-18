// Class /Script/FortniteGame.BuildingPropBigHealth
// Size: 0xf00
class ABuildingPropBigHealth : public ABuildingProp
{
	int64_t BigHealth; // 0xee8 (0x8)
	int64_t BigHealthMax; // 0xef0 (0x8)
	bool bShowHealthBar; // 0xef8 (0x1)
	unsigned char padding_ef9[0x7]; // 0xef9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.BuildingPropBigHealth.SetBigHealthMax (Underlying native function: SetBigHealthMax 0x860ce68)
	void SetBigHealthMax(int64_t& NewHealth); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropBigHealth.SetBigHealth (Underlying native function: SetBigHealth 0x860cd88)
	void SetBigHealth(int64_t& NewHealth); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropBigHealth.OnRep_BigHealth (Underlying native function: OnRep_BigHealth 0x860bfe0)
	void OnRepBigHealth(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingPropBigHealth.GetHealthValueText (Underlying native function: GetHealthValueText 0x8608d84)
	struct FText GetHealthValueText(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingPropBigHealth.GetHealthValuePercent (Underlying native function: GetHealthValuePercent 0x8608d50)
	float GetHealthValuePercent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure)
};

