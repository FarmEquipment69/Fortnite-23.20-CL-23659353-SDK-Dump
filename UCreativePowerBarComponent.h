// Class /Script/FortniteGame.CreativePowerBarComponent
// Size: 0xb8
class UCreativePowerBarComponent : public UActorComponent
{
	float StartTime; // 0xa0 (0x4)
	bool bLoop; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	class UCurveFloat* PowerCurve; // 0xa8 (0x8)
	unsigned char padding_b0[0x8]; // 0xb0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.CreativePowerBarComponent.StopInterpolation (Underlying native function: StopInterpolation 0x8785da8)
	void StopInterpolation(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativePowerBarComponent.SetPowerCurve (Underlying native function: SetPowerCurve 0x8784cb0)
	void SetPowerCurve(class UCurveFloat*& NewPowerCurve); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativePowerBarComponent.SetLooping (Underlying native function: SetLooping 0x8784c28)
	void SetLooping(bool& bLooping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativePowerBarComponent.ServerSetStopTime (Underlying native function: ServerSetStopTime 0x87843d4)
	void ServerSetStopTime(float& ServerStopTime); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.CreativePowerBarComponent.ResumeInterpolation (Underlying native function: ResumeInterpolation 0x8783874)
	void ResumeInterpolation(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativePowerBarComponent.IsInterpolationPaused (Underlying native function: IsInterpolationPaused 0x8781430)
	bool IsInterpolationPaused(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativePowerBarComponent.InitializePowerBar (Underlying native function: InitializePowerBar 0x8780e24)
	void InitializePowerBar(bool& bLoops, float& ChangeRate, class UCurveFloat*& NewPowerCurve); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativePowerBarComponent.GetPowerPercentage (Underlying native function: GetPowerPercentage 0x878018c)
	float GetPowerPercentage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

