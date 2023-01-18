// Class /Script/AIModule.PawnSensingComponent
// Size: 0xe8
class UPawnSensingComponent : public UActorComponent
{
	float HearingThreshold; // 0xa0 (0x4)
	float LOSHearingThreshold; // 0xa4 (0x4)
	float SightRadius; // 0xa8 (0x4)
	float SensingInterval; // 0xac (0x4)
	float HearingMaxSoundAge; // 0xb0 (0x4)
	unsigned char bEnableSensingUpdates; // 0xb4 (0x1)
	unsigned char bOnlySensePlayers; // 0xb4 (0x1)
	unsigned char bSeePawns; // 0xb4 (0x1)
	unsigned char bHearNoises; // 0xb4 (0x1)
	unsigned char unreflected_b5[0xb]; // 0xb5 (0xb) 
	struct FMulticastInlineDelegate OnSeePawn; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnHearNoise; // 0xd0 (0x10)
	float PeripheralVisionAngle; // 0xe0 (0x4)
	float PeripheralVisionCosine; // 0xe4 (0x4)

	/* Functions */

	// Function /Script/AIModule.PawnSensingComponent.SetSensingUpdatesEnabled (Underlying native function: SetSensingUpdatesEnabled 0x8b0b064)
	void SetSensingUpdatesEnabled(bool& bEnabled); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.PawnSensingComponent.SetSensingInterval (Underlying native function: SetSensingInterval 0x76c8978)
	void SetSensingInterval(float& NewSensingInterval); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.PawnSensingComponent.SetPeripheralVisionAngle (Underlying native function: SetPeripheralVisionAngle 0x76c8a00)
	void SetPeripheralVisionAngle(float& NewPeripheralVisionAngle); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature (Has no native function)
	void SeePawnDelegateDelegateSignature(class APawn*& Pawn); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature (Has no native function)
	void HearNoiseDelegateDelegateSignature(class APawn*& Instigator, struct FVector& Location, float& Volume); // (MulticastDelegate | Public | Delegate | HasOutParms | HasDefaults)

	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionCosine (Underlying native function: GetPeripheralVisionCosine 0x87b243c)
	float GetPeripheralVisionCosine(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionAngle (Underlying native function: GetPeripheralVisionAngle 0xa1e3344)
	float GetPeripheralVisionAngle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

