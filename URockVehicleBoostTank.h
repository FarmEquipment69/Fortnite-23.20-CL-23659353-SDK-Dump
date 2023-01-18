// Class /Script/RockVehicleRuntime.RockVehicleBoostTank
// Size: 0x128
class URockVehicleBoostTank : public UActorComponent
{
	struct FMulticastInlineDelegate OnSecondsChanged; // 0xa0 (0x10)
	struct FRockScalableFloat StartSeconds; // 0xb0 (0x30)
	struct FRockScalableFloat MaxSeconds; // 0xe0 (0x30)
	enum ERockBoostLogic BoostLogic; // 0x110 (0x1)
	unsigned char unreflected_111[0x3]; // 0x111 (0x3) 
	float BoostRechargeRate; // 0x114 (0x4)
	float BoostRechargeDelay; // 0x118 (0x4)
	float SecondsRemaining; // 0x11c (0x4)
	unsigned char padding_120[0x8]; // 0x120 (0x8)

	/* Functions */

	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.OnRep_SecondsRemaining (Underlying native function: OnRep_SecondsRemaining 0x7544564)
	void OnRepSecondsRemaining(float& PrevValue); // (Final | Native | Protected)

	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.IsBoostFull (Underlying native function: IsBoostFull 0x75440a0)
	bool IsBoostFull(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.HasBoost (Underlying native function: HasBoost 0x7544080)
	bool HasBoost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.GiveBoost (Underlying native function: GiveBoost 0x7543ffc)
	void GiveBoost(float& Seconds); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.GetPercentRemaining (Underlying native function: GetPercentRemaining 0x7543fdc)
	float GetPercentRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RockVehicleRuntime.RockVehicleBoostTank.GetMaxBoostInSeconds (Underlying native function: GetMaxBoostInSeconds 0x6a4b83c)
	float GetMaxBoostInSeconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

