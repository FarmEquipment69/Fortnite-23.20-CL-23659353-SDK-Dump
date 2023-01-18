// Class /Script/FortniteGame.AthenaBarrierObjective
// Size: 0xac0
class AAthenaBarrierObjective : public ABuildingGameplayActor
{
	unsigned char unreflected_9d8[0x20]; // 0x9d8 (0x20) 
	struct FBarrierObjectiveDisplayData FoodDisplayData[0x2]; // 0x9f8 (0x48) (ARRAY) 
	enum EBarrierFoodTeam FoodTeam; // 0xa88 (0x1)
	enum EBarrierObjectiveDamageState ObjectiveDamageState; // 0xa89 (0x1)
	unsigned char unreflected_a8a[0x2]; // 0xa8a (0x2) 
	float HeadRotationYaw; // 0xa8c (0x4)
	bool bAllowDamage; // 0xa90 (0x1)
	unsigned char unreflected_a91[0x7]; // 0xa91 (0x7) 
	struct FScalableFloat DamageFromSword; // 0xa98 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.AthenaBarrierObjective.UpdateInGameHealth (Has no native function)
	void UpdateInGameHealth(float& NewHealthPercent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaBarrierObjective.SetHeadMesh (Has no native function)
	void SetHeadMesh(class UStaticMesh*& NewMesh, struct FVector& NewScale, struct FVector& NewOffset, struct TArray<class UMaterialInterface*>& MaterialsToSwap); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaBarrierObjective.OnRep_ObjectiveDamageState (Underlying native function: OnRep_ObjectiveDamageState 0x8266978)
	void OnRepObjectiveDamageState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.AthenaBarrierObjective.OnRep_HeadRotationYaw (Underlying native function: OnRep_HeadRotationYaw 0x826683c)
	void OnRepHeadRotationYaw(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.AthenaBarrierObjective.OnRep_FoodTeam (Underlying native function: OnRep_FoodTeam 0x82667b8)
	void OnRepFoodTeam(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.AthenaBarrierObjective.OnNewDamageState (Has no native function)
	void OnNewDamageState(enum EBarrierObjectiveDamageState& NewState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaBarrierObjective.OnHeadRotationSet (Has no native function)
	void OnHeadRotationSet(float& NewYaw); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaBarrierObjective.OnGeneratorDestroyed (Underlying native function: OnGeneratorDestroyed 0x82662c4)
	void OnGeneratorDestroyed(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaBarrierObjective.IsFriendlyTeam (Underlying native function: IsFriendlyTeam 0x8265a38)
	bool IsFriendlyTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaBarrierObjective.GetObjectiveDamageState (Underlying native function: GetObjectiveDamageState 0x8265428)
	enum EBarrierObjectiveDamageState GetObjectiveDamageState(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaBarrierObjective.GetFoodTeam (Underlying native function: GetFoodTeam 0x8265290)
	enum EBarrierFoodTeam GetFoodTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaBarrierObjective.ApplyTimerGE (Has no native function)
	void ApplyTimerGE(float& TimerLength); // (Event | Protected | BlueprintEvent)
};

