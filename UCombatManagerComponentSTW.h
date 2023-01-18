// Class /Script/FortniteGame.CombatManagerComponentSTW
// Size: 0xc60
class UCombatManagerComponentSTW : public UFortControllerComponent
{
	float ReplicatedCombatEventHeat[0x1c]; // 0xa0 (0x4) (ARRAY) 
	float CombatEventHeat[0x1c]; // 0x110 (0x4) (ARRAY) 
	float CombatFactors[0xc]; // 0x180 (0x4) (ARRAY) 
	float CurrentTotalHeat; // 0x1b0 (0x4)
	float MaximumTotalHeat; // 0x1b4 (0x4)
	float MaxHeatEver; // 0x1b8 (0x4)
	unsigned char unreflected_1bc[0x4]; // 0x1bc (0x4) 
	class UReporterGraph* CombatGraph; // 0x1c0 (0x8)
	class UReporterGraph* FactorGraph; // 0x1c8 (0x8)
	unsigned char unreflected_1d0[0x8]; // 0x1d0 (0x8) 
	struct FCombatEventData Events[0x1c]; // 0x1d8 (0x38) (ARRAY) 
	struct FCombatFactorData Factors[0xc]; // 0x7f8 (0x38) (ARRAY) 
	unsigned char unreflected_a98[0x8]; // 0xa98 (0x8) 
	struct FCombatThresholdData Thresholds[0x4]; // 0xaa0 (0x70) (ARRAY) 

	/* Functions */

	// Function /Script/FortniteGame.CombatManagerComponentSTW.ServerTriggerCombatEventBatch (Underlying native function: ServerTriggerCombatEventBatch 0x8e81698)
	void ServerTriggerCombatEventBatch(struct TArray<struct FFortCombatManagerEvent*>& Payload); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.CombatManagerComponentSTW.ServerTriggerCombatEvent (Underlying native function: ServerTriggerCombatEvent 0x8e815a8)
	void ServerTriggerCombatEvent(struct TEnumAsByte<EFortCombatEvents>& TriggeredEvent, float& HeatMultiplier); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.CombatManagerComponentSTW.OnRep_CombatEventHeat (Underlying native function: OnRep_CombatEventHeat 0x8e7fad0)
	void OnRepCombatEventHeat(); // (Final | Native | Public)

	// Function /Script/FortniteGame.CombatManagerComponentSTW.GetEventHeatPercentTotal (Underlying native function: GetEventHeatPercentTotal 0x8e7e640)
	float GetEventHeatPercentTotal(struct TEnumAsByte<EFortCombatEvents>& CombatEvent); // (Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CombatManagerComponentSTW.GetEventHeatPercent (Underlying native function: GetEventHeatPercent 0x8e7e518)
	float GetEventHeatPercent(struct TEnumAsByte<EFortCombatEvents>& CombatEvent); // (Native | Public | BlueprintCallable | BlueprintPure)
};

